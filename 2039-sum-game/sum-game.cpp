class Solution {
public:
    bool sumGame(string num) {
        int leftSum = 0;
        int rightSum = 0;
        int leftQ = 0;
        int rightQ = 0;
        for(int i =0; i<num.size()/2; i++){
            if(num[i] == '?'){
                leftQ++;
            }else{
            leftSum += (num[i] - '0');}
        }
        for(int i = num.size()/2; i<num.size(); i++){
            if(num[i] == '?'){
                rightQ++;
            }else{
            rightSum += (num[i] - '0');}
        }
        if((leftQ + rightQ) % 2 != 0) return true;

        int diff = rightSum - leftSum;
        int diffQ = rightQ - leftQ;
        return diff != -(diffQ/2) * 9;
    }
};
class Solution {
public:
    int gcdd(int a , int b){
        while(b!=0){
        int rem = a%b;
        a  = b;
        b = rem;}
        return a;
        
    }
    int findGCD(vector<int>& nums) {
        int m = *max_element(nums.begin(), nums.end());
        int n = *min_element(nums.begin(), nums.end());
        return gcdd(m, n);
    }
};
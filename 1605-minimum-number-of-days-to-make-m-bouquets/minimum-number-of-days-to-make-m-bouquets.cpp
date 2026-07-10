class Solution {
public:
bool possible(vector<int> &arr, int day, int m, int k){
    int cnt = 0, boq =0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] <= day){
            cnt++;;
            if(cnt == k){
                boq++;
                cnt =0;
            }
        }else{
                cnt =0;
        }
    }
    return boq>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL*m*k;
        if(total > bloomDay.size()) return -1;
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int low = mini;
        int high = maxi;
        int result = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(possible(bloomDay, mid, m, k)){
                result = mid;
                high = mid -1;
            }else{
                low = mid+1;
            }
        }
        return result;
    }
};
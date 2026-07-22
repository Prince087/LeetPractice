class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<pair<int, int>> count;
        for (int i =0; i<ratings.size(); i++) {
            count.push_back({ratings[i], 1});
        }
        for (int i =1; i<count.size(); i++) {
            if (count[i].first > count[i - 1].first) {
                count[i].second = count[i - 1].second + 1;
            }
        }
        for (int i = count.size() - 2; i >= 0; i--) {
            if (count[i].first>count[i + 1].first) {
                count[i].second = max(count[i].second, count[i + 1].second + 1);
                }
        }
        int cnt = 0;
        for (int i =0; i<count.size(); i++) {
            cnt += count[i].second;
        }
        return cnt;
    }
};
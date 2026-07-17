class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        reverse(g.begin(), g.end());
        reverse(s.begin(), s.end());
        
        int f  =0;
        int i=0, j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                i++;
                j++;
                f++;
        }else{
            i++;
        }
        }
        return f;
    }
};
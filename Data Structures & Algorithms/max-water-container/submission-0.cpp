class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans =0;
        int n =heights.size();
        for(int i =0 ; i<n; i++){
            int res = 0;
            for(int j =i ; j<n; j++){
                res = max(res, min(heights[i],heights[j])* (j-i));
            }

            ans = max(ans,res);
        }
        return ans;
    }
};

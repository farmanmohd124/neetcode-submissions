class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int ans = 0;
        int st =0;
        int rp=0;


        for(int i =1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                rp++;
            }
            else if(nums[i]==nums[i-1]+1 ){
               continue;
            }
            else{
              ans=max(ans,i-st-rp);
              st =i;
              rp=0;
            }
        }
        ans = max(ans, (int)nums.size() - st - rp);
        return ans;
    }
};

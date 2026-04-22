class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int lh =0;
        int rh = n-1;

        while(lh<=rh){
            int mid = lh + (rh-lh)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                lh =mid+1;
            }
            else{
                rh = mid-1;
            }
        }
        return -1;
    }
};

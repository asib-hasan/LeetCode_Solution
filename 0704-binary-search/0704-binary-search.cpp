class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        if(right == 1 && (nums[0] == target))return 0;
        if(right == 1 && (nums[0] != target))return -1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
};
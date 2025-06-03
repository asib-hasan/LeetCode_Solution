class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        if(right == 1 && nums[0] == target) return 0;
        else if(right == 1 && nums[0] < target) return 1;
        else if(right == 1 && nums[0] > target) return 0;
        int mid;
        while(left<=right){
            mid = left + (right-left)/2;
            if(mid >= nums.size()) return nums.size();
            else if(mid < 0) return 0;
            if(nums[mid] == target)return mid;
            else if(nums[mid] < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if(nums[mid] > target) return mid;
        else return mid + 1;
    }
};


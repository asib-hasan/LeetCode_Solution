class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int even = nums[i] % 2 == 0 && nums[i + 1] % 2 == 0;
            int odd = nums[i] % 2 == 1 && nums[i + 1] % 2 == 1;
            if(odd || even) return false;
        }
        return true;
    }
};
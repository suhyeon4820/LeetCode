class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int x = 0;
        while(i < nums.size())
        {
            if(nums[i] != 0)
            {
                x = nums[i];
                nums[i] = nums[j];
                nums[j] = x;
                j++;
            }
            i++;
        }
    }
};
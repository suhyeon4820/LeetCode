class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     
        int firstNum = nums.size();
        set<int> s;
        for(int i = 0; i<firstNum; i++)
        {
            s.insert(nums[i]);
        }
        int secondNum = s.size();
        if(firstNum == secondNum)
            return false;
        else
            return true;
    }
};
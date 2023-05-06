class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int last = numbers.size()-1;
        int sum = 0;
        vector<int> result(2);
        while(start<last)
        {
            sum = numbers[start] + numbers[last];
            if(sum == target)
            {
                result[0] = start + 1;
                result[1] = last + 1;
                return result;
            }
            else if(sum > target)
            {
                last--;
            }
            else if(sum < target)
            {
                start++;
            }
        }
        return result;
    }
};
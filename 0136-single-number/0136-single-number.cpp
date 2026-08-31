class Solution {
public:
    int singleNumber(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++)
        {
           
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    nums[i] = -1;
                    nums[j] = -1;
                 
                }
            }
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != -1)
            {
                return nums[i];
            }
        }

        return -1;
    }
};
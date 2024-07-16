class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
        int i;
    for(i=0;i<n;i++)
    {
        if(nums[i]==nums[i+1])
        {
            break;
        }
        
    }
        return nums[i];
        
    }
};
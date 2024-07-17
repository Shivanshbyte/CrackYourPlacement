class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> index;
        int n=nums.size();
    
    for(int i=0;i<n;i++)
    {
        int complement=target-nums[i];
        if((index.find(complement)!=index.end()) && index[complement]!=i)
         {
               return {i,index[complement]};
         }
          index[nums[i]]=i;
         
    }
    
    return {};
        
    }
};
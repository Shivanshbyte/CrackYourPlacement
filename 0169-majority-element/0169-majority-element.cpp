class Solution {
public:
    int majorityElement(vector<int>& nums) {
    map<int, int> count;
        int n=nums.size();
    for(int i=0;i<n;i++)
    {
        count[nums[i]]++;
    }
    for(auto it:count)
    {
        if(it.second>(n/2))
        {
            return it.first;
            break;
        }
    }
    return -1; 
    }
};
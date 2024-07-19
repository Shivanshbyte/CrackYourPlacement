class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> s;
    
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<=n-3;i++)
    {   
        int j=i+1,k=n-1;
        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0)
            {
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(nums[k]);
                s.insert(v);
                j++;
                k--;
                   
            }
            else if(sum>0)
            {
                k--;
                
            }
            else
            {
                j++;
            }
               
        }
    }
    vector<vector<int>> ans;
    for(auto it:s)
    {
        ans.push_back(it);
    }
    return ans;  
    }
};
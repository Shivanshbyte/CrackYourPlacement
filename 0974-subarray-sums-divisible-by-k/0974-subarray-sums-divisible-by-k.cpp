class Solution {
public:
    
    int subarraysDivByK(vector<int>& nums, int k) {
    
    map<int, int> prefix_cnt;
    prefix_cnt[0]=1;
    int res=0;
    int prefix_sum=0;
        int n=nums.size();
    for(int i=0;i<n;i++)
    {
        prefix_sum+=nums[i];
        int rem=prefix_sum%k;
        if (rem < 0) rem += k;
        if(prefix_cnt.count(rem))
        {
            res+=prefix_cnt[rem];
        }
        prefix_cnt[rem]++;
    }
        return res;
    }
};
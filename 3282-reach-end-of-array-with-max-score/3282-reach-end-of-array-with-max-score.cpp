class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int i=0;
    int num=INT_MIN;
    long long sum=0;
    while(i<nums.size()-1)
    {
        num=max(nums[i],num);
        sum+=num;
        i++;
        
    }
        return sum;
    }
};
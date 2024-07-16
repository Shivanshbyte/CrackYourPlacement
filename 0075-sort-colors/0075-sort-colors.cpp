class Solution {
public:
    void sortColors(vector<int>& nums) {
    int count[]={0,0,0};
    for(int i=0;i<nums.size();i++)
    {
        count[nums[i]]++;       
    }
    int j=0;
    while(count[0]>0)
    {
        nums[j]=0;
        j++;
        count[0]--;
    }
    while(count[1]>0)
    {
        nums[j]=1;
        j++;
        count[1]--;
    }
    while(count[2]>0)
    {
        nums[j]=2;
        j++;
        count[2]--;
    }
    }
};
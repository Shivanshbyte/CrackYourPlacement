class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    map<int, int> index;
    int n=nums.size();
    int i=0,j=-1,count=0;
    while(i<n)
    {
        if(nums[i]==0)
        {
            count++;
        }
        else
        {
            nums[j+1]=nums[i];
            j++;
        }
        i++;
    }
    int k=n-1;
    while(count--)
    {
        nums[k]=0;
        k--;
    }
    
    }
};
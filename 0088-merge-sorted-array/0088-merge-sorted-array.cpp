class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> C;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                C.push_back(nums1[i]);
                i++;
            }
            else
            {
                C.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
            C.push_back(nums1[i]);
            i++;
        }
        while(j<n)
        {
             C.push_back(nums2[j]);
            j++;
        }
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=C[i];
        }
        
    }
};
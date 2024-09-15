class Solution {
public:
    long long helper(vector<int>& a, vector<int>& b, int i1,int i2,vector<vector<long long>> &v)
    {
        if(i1>=a.size()){
            return 0;
        }
        if(i2>=b.size())
        {
            return INT_MIN;
        }
        if(v[i1][i2]!=-1)
        {
            return v[i1][i2];
        }
        long long take=(long long)a[i1]*(long long)b[i2]+helper(a,b,i1+1,i2+1,v);
        long long not_take=helper(a,b,i1,i2+1,v);
        
        v[i1][i2]= max(take,not_take);
        return v[i1][i2];
    }
    long long maxScore(vector<int>& a, vector<int>& b) {
        vector<vector<long long>> v(4,vector<long long>(b.size(),-1));
    return helper(a,b,0,0,v);
        
    }
};
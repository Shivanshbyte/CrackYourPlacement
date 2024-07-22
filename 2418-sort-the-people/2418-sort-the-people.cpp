class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    map<int,string> index;
    for(int i=0;i<heights.size();i++)
    {
        index[heights[i]]=names[i];
    }
    sort(heights.begin(),heights.end(),greater<int>());
    for(int i=0;i<heights.size();i++)
    {
        names[i]=index[heights[i]];
    }
        return names;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            mp2[t[i]]++;
        }
        if(mp1.size()!=mp2.size())return false;
        for(auto it:mp1)
        {
            if(it.second!=mp2[it.first])
            return false;
        }
        return true;
    }
};

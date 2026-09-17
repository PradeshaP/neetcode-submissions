class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
       vector<vector<string>>ans;
       for(string s:strs)
       {
        string ori=s;
        sort(s.begin(),s.end());
        mp[s].push_back(ori);
       }
       for(auto it:mp)
       {
        ans.push_back(it.second);
       }
       return ans;
    }
};

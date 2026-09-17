class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>maxheap;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
    maxheap.push({it.second,it.first});
        }
        vector<int>ans;
        for(int i=1;i<=k;i++)
        {
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
   return ans;
    }
};

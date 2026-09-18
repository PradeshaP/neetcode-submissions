/*
class Solution {
public:
int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,lastsmall=INT_MIN,longest=0;
        for(int i=0;i<nums.size();i++)
        {
            
              if(nums[i]-1==lastsmall)
              {
                cnt++;
                lastsmall=nums[i];
              }
              else if(nums[i]!=lastsmall)
              {
                cnt=1;
                lastsmall=nums[i];
              }
              longest=max(longest,cnt);
        }
        return longest;
    }
};
*/


class Solution {
public:
int longestConsecutive(vector<int>& nums) {
       int cnt=0,longest=0;
       unordered_set<int>st;
       for(int i=0;i<nums.size();i++)
       {
        st.insert(nums[i]);
       }
       for(auto it:st)
       {
        if(st.find(it-1)==st.end())
        {
            cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end())
            {
                x=x+1;
                cnt++;
            }
            longest=max(longest,cnt);
        }
       }
       return longest;
    }
};


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

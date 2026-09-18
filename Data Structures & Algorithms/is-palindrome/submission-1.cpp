/*class Solution {
public:
    bool isPalindrome(string s) {
    string new_str;
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        if(isdigit(ch)||isalpha(ch))
        {
            new_str.push_back(tolower(ch));
        }
    }
    string orig=new_str;
    reverse(new_str.begin(),new_str.end());
    if(orig==new_str) return true;
    else return false;
    
    }
};*/


class Solution {
public:
    bool isPalindrome(string s) {
    int left=0,right=s.size()-1;
    while(left<right)
    {
        if(!isalnum(s[left]))
        {
            left++;
            continue;
        }
        if(!isalnum(s[right]))
        {
            right--;
            continue;
        }
        if(tolower(s[left])!=tolower(s[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
    
    }
};


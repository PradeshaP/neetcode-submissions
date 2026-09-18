class Solution {
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
};

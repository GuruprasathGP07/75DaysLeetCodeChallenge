class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string new_string;
        for (int i=0;i<n;i++){
            if (isalnum(s[i])){
                new_string.push_back(tolower(s[i]));            }
        }
        string new_rev=new_string;
        reverse(new_rev.begin(),new_rev.end());
        return (new_rev==new_string);
    }
};

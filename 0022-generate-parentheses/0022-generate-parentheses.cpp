class Solution {
public:
    void addpar(int n,int open,int close,vector<string>&ans,string temp){
        if(temp.length()==2*n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
        temp+='(';
        addpar(n,open+1,close,ans,temp);
        temp.pop_back();
        }
        if(close<open){
        temp+=')';
        addpar(n,open,close+1,ans,temp);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        addpar(n,0,0,ans,temp);
        return ans;
        
    }
};
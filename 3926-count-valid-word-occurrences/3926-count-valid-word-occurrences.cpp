class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& co, vector<string>& queries) {
        vector<string>c=co;
        string str="";
        unordered_map<string,int>mp;
        string s="";
        for(string ch:c) s+=ch;
            for(int j=0;j<s.length();j++){
                if(s[j]>='a' && s[j]<='z')str+=s[j];
                else if(j>0 && j<s.length()-1 && s[j]=='-' && (s[j-1]>='a' && s[j-1]<='z') && (s[j+1]>='a' && s[j+1]<='z')) str+=s[j];
                
            
            else if(!str.empty()){
                mp[str]++;
                str="";
            }
            }
        string r="";
        if(!str.empty()) mp[str]++;
        for(int i=0;i<str.length();i++){
            if(str[i]==' '){
                if(r!=""){
                mp[r]++;
                r="";
                }
            }
            else r+=str[i];
        }
        vector<int>ans(queries.size(),0);
        for(int i=0;i<queries.size();i++){
            ans[i]=mp[queries[i]];
        }
        return ans;
    }
};
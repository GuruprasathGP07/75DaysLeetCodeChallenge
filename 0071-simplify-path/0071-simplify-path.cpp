class Solution {
public:
    string simplifyPath(string path){
        vector<string>res;
        stack<string>st;
        string a="";
        for(int i=1;i<path.length();i++){
            if(path[i]!='/'){
                a+=path[i];
            }
            else if(path[i]=='/'){
                if(!a.empty() && a!=".")res.push_back(a);
                a="";
            }
        }
        if(!a.empty() && a!=".") res.push_back(a);
        for(int i=0;i<res.size();i++){
            if(res[i]==".."){
                if(!st.empty())st.pop();
            }
            else {
                st.push(res[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        return ((ans!="")?ans:"/");
        
    }
};
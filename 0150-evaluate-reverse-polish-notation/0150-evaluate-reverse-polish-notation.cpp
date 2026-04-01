class Solution {
public:
    int evalRPN(vector<string>&s) {
        stack<int>st;
        for(string c:s){
            if(c!="+" && c!="-" && c!="*" && c!="/"){
                int r=stoi(c);
                st.push(r);
            }
            else{
                if(c=="+"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int ans=a+b;
                    st.push(ans);
                }
                else if(c=="-"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int ans=b-a;
                    st.push(ans);
                }
                else if(c=="*"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int ans=a*b;
                    st.push(ans);
                }
                else if(c=="/"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int ans=b/a;
                    st.push(ans);
                }
            }
        }
        return st.top();
    }
};

class Solution {
public:
    string maximumBinaryString(string b) {
        int c=0;
        int r=0;
        bool flag=true;
        for(int i=0;i<b.size();i++){
            if(b[i]=='0' && flag){
                r=i;
                flag=false;
            }
            if(b[i]=='0') c++;
        }
        string res="";
        int ind=r+(c-1);
        for(int i=0;i<b.size();i++){
            if(i==ind) b[i]='0';
            else b[i]='1';
        }
        return b;
    }
};
class Solution {
public:
bool isvowel(char c){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
        else return false;
    }
int vowelcount(string ch){
    int n=0;
    for(char c:ch){
        if(isvowel(c)) n++;
    }
    return n;
}
string rev(string s){
    int l=0,r=s.length()-1;
    while(l<r){
        int t=s[l];
        s[l]=s[r];
        s[r]=t;
        l++;
        r--;
    }
    return s;
}
    string reverseWords(string s) {
        vector<string>vc;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                str+=s[i];

            }
            else if(s[i]==' '){
                vc.push_back(str);
                str="";
            }
        }
        vc.push_back(str);
        int no=vowelcount(vc[0]);    
        for(int i=1;i<vc.size();i++){
            if(vowelcount(vc[i])==no){
                vc[i]=rev(vc[i]);
            }
        }
        string ans="";
        for(int i=0;i<vc.size();i++){
            ans+=vc[i];
            if(i!=vc.size()-1)ans+=' ';
        }
        
        return ans;
        
    }
};
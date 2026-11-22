class Solution {
public:
    bool checkString(string s) {
        bool bas=false;
        for(char c :s){
            if(c=='b'  && bas==false) bas=true;
            if(c=='a' && bas==true) return false;
        }
        return true;
        
    }
};
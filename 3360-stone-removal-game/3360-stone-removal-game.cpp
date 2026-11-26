class Solution {
public:
    bool canAliceWin(int n) {
        int f=0;
        int p=10;
        while(n>=p){
            n-=p;
            p-=1;
            f+=1;
        }
    return (f%2!=0)?true:false;
    }
};
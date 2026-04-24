class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,d=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L') l++;
            else if(moves[i]=='R') r++;
            else if(moves[i]=='_') d++;
        }
        if(l>=r) l+=d;
        else r+=d;
        return abs(l-r);
    }
};
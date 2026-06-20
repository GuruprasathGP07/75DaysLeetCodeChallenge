class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target){
        int l=0,r=letters.size()-1;
        int ansi=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(letters[mid]>target) {
                ansi=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return (ansi==-1)?letters[0]:letters[ansi];
    }
};
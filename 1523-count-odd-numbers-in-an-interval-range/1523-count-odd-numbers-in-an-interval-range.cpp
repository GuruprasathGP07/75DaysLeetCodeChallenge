class Solution {
public:
    int countOdds(int low, int high) {
        int r=(high-low+1);
        if(low%2==0 && high%2==0){
            return (high-low)/2;
        }
        return (high-low)/2+1;
    }
};
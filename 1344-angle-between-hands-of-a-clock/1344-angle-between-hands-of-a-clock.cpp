class Solution {
public:
    double angleClock(int hour, int minutes){
        hour%=12;
        double ang=abs(30*hour - (5.5*(minutes)));
        return min(ang,360.0-ang);
    }
};
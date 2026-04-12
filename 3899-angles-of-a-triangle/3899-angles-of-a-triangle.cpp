class Solution {
public:
    double pi=3.141592653589793;
    vector<double> internalAngles(vector<int>&s){
        int n=s.size();
        vector<double>ans(n);
        double a=s[0]*s[0];
        double b=s[1]*s[1];
        double c=s[2]*s[2];
        double A=s[0];
        double B=s[1];
        double C=s[2];
        if(A+B<=C || A+C<=B || B+C<=A){
            return {};
        }
        ans[0]=acos((b+c-a)/(2*B*C))*180/pi;
        ans[1]=acos((a+c-b)/(2*A*C))*180/pi;
        ans[2]=acos((b+a-c)/(2*A*B)) *180/pi;   

        sort(ans.begin(),ans.end());
        return ans;
    }
};
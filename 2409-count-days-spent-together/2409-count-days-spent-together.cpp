class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a1=convertToDays(arriveAlice);
        int l1=convertToDays(leaveAlice);
        int a2=convertToDays(arriveBob);
        int l2=convertToDays(leaveBob);
        int start = max(a1, a2);
        int end=min(l1,l2);
        return max(0,end-start+1);
    }
    
private:
    int convertToDays(string date) {
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int month=stoi(date.substr(0,2));
        int day=stoi(date.substr(3,2));
        int t=day;
        for(int i=0;i<month-1;i++) {
            t+=days[i];
        }
        return t;
    }
};
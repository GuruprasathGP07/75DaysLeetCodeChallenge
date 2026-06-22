class Solution {
public:
   long long findTrips(vector<int>time,long long m){
        long long s=0;
        for(int i=0;i<time.size();i++){
            s+=(m/time[i]);
        }
        return s;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=1;
        long long mi=*min_element(time.begin(),time.end());
        long long r=mi*totalTrips;
        long long ans=LLONG_MAX;
        while(l<=r){
            long long mid=(l+r)/2;
            long long trips=findTrips(time,mid);
            if(trips>=totalTrips){
                r=mid-1;
                ans=min(ans,mid);
            }else l=mid+1;
        }
        return ans;
    }
};
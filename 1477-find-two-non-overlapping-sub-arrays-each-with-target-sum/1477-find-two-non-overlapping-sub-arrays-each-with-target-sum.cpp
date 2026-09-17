class Solution {
public:
	int minSumOfLengths(vector<int>& arr,int target) {
		int n=arr.size();
		vector<int>min_len(n,1e9);
		int left=0,sum=0;
		int best=1e9,ans=1e9;
		for(int i=0;i<n;i++) {
			sum +=arr[i];
			while(sum>target && left<=i ) {
				sum-=arr[left];
				left++;
			}
			if (sum==target) {
				int cur=i-left+1;
				if (left>0 && min_len[left-1] !=1e9) {
					ans=min(ans,cur+min_len[left-1]);
				}
				best=min(best,cur);
			}
			min_len[i]=best;
		}
		return ans>=1e9?-1:ans;
	}
};
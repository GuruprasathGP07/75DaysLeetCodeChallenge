class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=1;
        while (j<n){
            if (arr[i]==arr[j]){
                j++;
            }
            else{
                arr[i+1]=arr[j];
                i+=1;
                j+=1;

            }
        }
    return i+1;
    }  
};
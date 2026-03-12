class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        vector<int>a;
        for(int i=0;i<n.size()-1;i++){
            for(int j=i+1;j<n.size();j++){

                if (n[i]+n[j]==target){
                    return {i,j};

            }
            }
        }
        return {};
    }
};
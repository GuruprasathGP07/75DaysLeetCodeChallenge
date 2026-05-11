class Solution {
public:

    vector<int> separateDigits(vector<int>& nums) {
       string str="";
       vector<int>ans;
       for(int i:nums){
        str+=to_string(i);
       }
       for(int i=0;i<str.length();i++){
        ans.push_back(str[i]-'0');
       }
       return ans;
    }
};
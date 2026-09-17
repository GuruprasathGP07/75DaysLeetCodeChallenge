class Solution {
public:
    bool check(unordered_map<char,int>mp){
        for(auto p:mp){
            if(p.second>1) return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows=board.size();
        int columns=board[0].size();
        for(int i=0;i<rows;i++){
            unordered_map<char,int>mp;
            for(int j=0;j<columns;j++){
                if(board[i][j]!='.')mp[board[i][j]]++;
            }
            if(!check(mp)) return false;
        }

        for(int i=0;i<columns;i++){
            unordered_map<char,int>mpp;
            for(int j=0;j<rows;j++){
                if(board[j][i]!='.') mpp[board[j][i]]++;
            }
            if(!check(mpp)) return false;
        }

        for(int i=0;i<rows;i+=3){
            for(int j=0;j<columns;j+=3){
                unordered_map<char,int>mp;
                for(int m=0;m<3;m++){
                    for(int n=0;n<3;n++){
                        if(board[i+m][j+n]!='.') mp[board[i+m][j+n]]++;
                    }
                }
                if(!check(mp)) return false;
            }
        }
        return true;
    }
};
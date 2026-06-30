class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    //int next(int price) {
        /*int count=1;
        if(st.empty()) st.push({price,1});
        else{
            while( !st.empty() && st.top().first<=price){
                 count+=(st.top().second);
                st.pop();
               
            }
            st.push({price,count});
        }
        return count;
    */
    int next(int price) {
        int c=1;
        if(st.empty()) st.push({price,1});
        else{
            while(!st.empty() && st.top().first<=price){
                c+=(st.top().second);
                st.pop();
            }
            st.push({price,c});
        }
        
        return st.top().second;
        
    }
};

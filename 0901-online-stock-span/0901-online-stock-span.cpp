class StockSpanner {
public:
    vector<pair<int,int>>  arr;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int c = 1;
        while(arr.size() != 0 && arr[arr.size()-1].first <= price){
            c += arr[arr.size()-1].second;
            arr.pop_back();
        }
        arr.emplace_back(make_pair(price, c));
        return c;

    }
};
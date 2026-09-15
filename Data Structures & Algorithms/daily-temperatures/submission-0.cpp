class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
        stack<pair<int,int>> store;

        for(int i = 0; i < temperatures.size(); i++){
            int t = temperatures[i];
            while(!store.empty() && t>store.top().first){
                int Storeval = store.top().first;
                int StoreIndex = store.top().second;
                store.pop();

                result[StoreIndex] = i - StoreIndex;
            }
            store.push({t,i});
        }
        return result;
    }
};

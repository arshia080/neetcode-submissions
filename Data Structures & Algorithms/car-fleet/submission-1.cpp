class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        stack<double> st;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end());
        for(int i = cars.size()-1; i >= 0; i--){
            int p = cars[i].first;
            int q = cars[i].second;

            double time = (double)(target-p)/q;
            st.push(time);

            if(st.size()>=2){
                double current = st.top();
                st.pop();

                double ahead = st.top();
                if(current<= ahead){
                    continue;
                }
                else{
                    st.push(current);
                }
            }
        }
        return st.size();
    }
};

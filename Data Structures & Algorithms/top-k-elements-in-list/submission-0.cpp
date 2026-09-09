class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> maps;
        vector<vector<int>> freq(nums.size()+1);
        for(int i : nums){
            maps[i]++;
        }
        for(auto c : maps){
            freq[c.second].push_back(c.first);
        }
        vector<int> results;
        for(int i = freq.size()-1; i>=0; i--){
            for(int num: freq[i]){
                results.push_back(num);
            }

            if(results.size() == k){
                return results;
            }
        }
        return {};
    }
};

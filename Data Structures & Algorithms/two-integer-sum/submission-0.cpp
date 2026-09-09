class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> maps;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(maps.count(diff)){
                return {maps[diff],i};
            }
            maps[nums[i]] = i;
        }
        return {} ;
    }
};

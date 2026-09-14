class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> val;

        int l = 0;
        int r = 0;
        while(r<nums.size()){
            while(!val.empty() && nums[val.back()] < nums[r] ){
                val.pop_back();
            }
            val.push_back(r);

            if(l>val.front()){
                val.pop_front();
            }
            if(r+1 >= k){
                result.push_back(nums[val.front()]);
                l++;
            }
            r++;
        }
        return result;
    }
};

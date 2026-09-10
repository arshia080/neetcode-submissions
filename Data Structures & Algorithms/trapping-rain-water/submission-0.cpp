class Solution {
public:
    int trap(vector<int>& height) {
        int result =0;
        int l = 0;
        int r = height.size()-1;
        int maxleft = height[l];
        int maxright = height[r];
        while(l<r){
            if(maxleft<maxright){
                l++;
                maxleft = max(maxleft,height[l]);
                result += maxleft - height[l];
            }
            else{
                r--;
                maxright = max(maxright,height[r]);
                result += maxright - height[r];
            }
        }
        return result;
    }
};

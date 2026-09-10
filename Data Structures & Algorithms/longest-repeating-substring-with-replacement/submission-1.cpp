class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> maps;
        int l = 0;
        int result = 0;
        int maxFreq = 0;
        for(int i = 0; i < s.size(); i++){
            maps[s[i]]++;

            maxFreq = max(maxFreq, maps[s[i]]);

            while((i-l+1)-maxFreq > k){
                maps[s[l]]--;
                l++;
            }
            result = max(result, i-l+1);
        }
        return result;
    }
};

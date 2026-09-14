class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        unordered_map<char,int> s1count;
        unordered_map<char,int> s2count;

        for(char ch : s1){
            s1count[ch]++;
        }
        int l = 0;
        for(int r = 0; r<s2.length(); r++){
            s2count[s2[r]]++;
            if(r-l+1 > s1.length()){
                s2count[s2[l]]--;
                if(s2count[s2[l]] == 0){
                    s2count.erase(s2[l]);
                }
                l++;
            }
            if(s1count == s2count){
                return true;
            }
        }
        return false;

    }
};

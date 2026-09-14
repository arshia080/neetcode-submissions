class Solution {
public:
    string minWindow(string s, string t) {
        if ( t == ""){
            return "";
        }

        unordered_map<char, int> st;
        unordered_map<char, int> track;

        for(char ch: t){
            st[ch]++;
        }
        int have = 0;
        int count = st.size();
        int l = 0;
        int resR = 0;
        int resL = 0;
        int resLength = INT_MAX;

        for(int r = 0; r<s.size(); r++){
            track[s[r]]++;
            if(st.count(s[r]) && st[s[r]] == track[s[r]]){
                have++;
            }
            while(have == count){
                if(r-l+1 < resLength){
                    resR = r;
                    resL = l;
                    resLength = r-l+1;
                }
                track[s[l]]--;
                if(st.count(s[l]) && track[s[l]] < st[s[l]]){
                    have--;
                }
                l++; 
            }
        }
        if(resLength == INT_MAX){
            return "";
        }
        return s.substr(resL, resLength);
    }
};

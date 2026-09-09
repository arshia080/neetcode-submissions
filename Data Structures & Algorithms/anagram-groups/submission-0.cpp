class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;
        for( auto s : strs){
            vector<int> freq(26,0);
            for( char ch : s){
                freq[ch - 'a']++;
            }
            string keys;
            for( int count : freq){
                keys += to_string(count) + "#";
            }
            maps[keys].push_back(s);
        }
        vector<vector<string>> results;
        for( auto c : maps){
            results.push_back(c.second);
        }
        return results;
        
    }
};

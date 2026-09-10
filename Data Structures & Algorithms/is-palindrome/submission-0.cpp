class Solution {
public:
    bool isPalindrome(string s) {
      string newString = "";
      for( char c : s){
        if(isalnum(c)){
            newString += tolower(c);
        }
      }
      string reversed = newString;
      reverse(reversed.begin(),reversed.end());
      return reversed == newString;
    }
};

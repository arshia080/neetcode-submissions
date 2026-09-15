class Solution {
public:
    vector<string> result;
    string c;

    void backtracking(int OpenI, int ClosedI, int n){
        if(OpenI == n && ClosedI == n){
            result.push_back(c);
            return;
        }
        if(OpenI < n){
            c.push_back('(');
            backtracking(OpenI+1,ClosedI,n);
            c.pop_back();
        }
        if(ClosedI < OpenI){
            c.push_back(')');
            backtracking(OpenI,ClosedI+1,n);
            c.pop_back();
        }
    } 
    vector<string> generateParenthesis(int n) {
        backtracking(0,0,n);
        return result;
    }
};

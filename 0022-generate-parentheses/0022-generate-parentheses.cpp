class Solution {
public:
    void solve(int open, int close, string s, vector<string>& ans){
        //base case
        if(open == 0 && close == 0){
            ans.push_back(s);
            return;
        }
        if(open == close){
            string str = s;
            str.push_back('(');
            solve(open-1, close, str, ans);
        }else if(open == 0){
            string str = s;
            str.push_back(')');
            solve(open, close-1, str, ans);
        }else{
            string str = s;
            string str1 = s;
            str.push_back('(');
            str1.push_back(')');
            solve(open-1 , close, str, ans);
            solve(open, close-1, str1, ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        int open = n;
        int close = n;
        solve(open, close, s, ans);
        return ans;
    }
};
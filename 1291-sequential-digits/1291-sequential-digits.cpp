class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> ans;
        string s = "123456789";
        
        for(int i=0; i<s.size(); i++){
            for(int j=i+1; j<=s.size(); j++){
                int cur = stoi(s.substr(i, j-i));
                if(low <= cur && cur <= high) ans.push_back(cur);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
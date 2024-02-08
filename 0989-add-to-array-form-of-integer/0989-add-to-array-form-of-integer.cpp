class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        
        int i=num.size()-1;
        int carry = 0;
        while(i>=0 || k>0){
            int x;
            if(i>=0) x = num[i] + k%10 + carry;
            else x = k%10 + carry;
            carry = 0;
            if(x >= 10) carry = 1;
            ans.insert(ans.begin(), x%10);
            
            k = k/10;
            i--;
        }
        if(carry) ans.insert(ans.begin(), carry);
        return ans;
        
    }
};
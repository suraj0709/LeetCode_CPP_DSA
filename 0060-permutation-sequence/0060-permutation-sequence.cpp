class Solution {
public:
    string getPermutation(int n, int k) {
        
        string str = "";
        int fact = 1;
        
        for(int i=1; i<n; i++){
            fact *= i;
            str += i + '0';
        }
        str += n + '0';
        
        k = k-1;
        string ans = "";
        
        while(true){
            ans += str[k/fact];
            str.erase(str.begin() + k/fact);
            
            if(str.length() == 0) break;
            
            k = k % fact;
            fact = fact / str.length();
        }
        
        return ans;
    }
};
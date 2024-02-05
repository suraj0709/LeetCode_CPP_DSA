class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        long long newNum = 0;
        int n = x;
        
        while(n >= 10){
            int q = n/10;
            int r = n%10;
            newNum = (newNum * 10) + r;
            n = q;
        }
        newNum = (newNum * 10) + n;
        
        return (x == newNum);
    }
};
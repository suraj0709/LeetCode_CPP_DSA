class Solution {
public:
    bool isPalin(string word){
        int i = 0;
        int j = word.size()-1;
        while(i<j){
            if(word[i] != word[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto word : words){
            if(isPalin(word)) return word;
        }
        return "";
    }
};
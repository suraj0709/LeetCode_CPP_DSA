class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> map;
        
        for(auto i : arr){
            map[i]++;
        }
        
        int n = map.size();
        vector<pair<int, int>> temp(n);
        
        int j=0;
        for(auto i : map){
            temp[j].first = i.second;
            temp[j].second = i.first;
            j++;
        }
        
        sort(temp.begin(), temp.end());
        
        int ans = temp.size();
        j = 0;
        while(k>0){
            while(temp[j].first>0 && k>0){
                temp[j].first--;
                k--;
            }
            if(temp[j].first == 0){
                j++;
                ans--;
            }
        }
        return ans;
    }
};
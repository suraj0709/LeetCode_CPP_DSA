class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans = 0;
        for(auto x : nums){
            ans = ans ^ x;
        }
        return ans;
        
//         int ans;
//         unordered_map<int, int> map;
        
//         for(int i=0; i<nums.size(); i++){
//             if(map[nums[i]]) map.erase(nums[i]);
//             else map[nums[i]]++;
//         }
//         for(auto it : map)
//             ans = it.first;
        
//         return ans;
    }
};
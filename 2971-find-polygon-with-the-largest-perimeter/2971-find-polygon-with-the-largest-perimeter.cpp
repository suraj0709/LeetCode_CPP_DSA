class Solution {
private:
    long long totalSum(vector<int> &nums){
        long long sum = 0;
        for(auto x : nums)
            sum += x;
        return sum;
}
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long sum = totalSum(nums);
        sort(nums.begin(), nums.end());
        
        for(int i=n-1 ; i>=2; i--){
            if(sum - nums[i] > nums[i]) return sum;
            else sum -= nums[i];
        }
        return -1;
    }
};
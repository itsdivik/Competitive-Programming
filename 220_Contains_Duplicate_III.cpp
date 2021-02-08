class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n = nums.size();
        set<int> ss(nums.begin(), nums.end());
        if( t == 0 && n == ss.size()) return false;
            
        for(int i = 0; i < n; ++i){
            for(int j = i+1; j < i+1+k; ++j){
                if(j >= n) break;
                if(abs((long long)nums[i] - nums[j]) <= t) return true;
            }
        }
        return false;
    }
};

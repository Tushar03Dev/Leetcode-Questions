class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) return false;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<=k+i && j<n;j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0,j=0;
        while(j<n){
            if(nums[i] != val){
                i++;
                j++;
            }
            else if(nums[i]== val && nums[j] != val){
                swap(nums[i],nums[j]);
            }
            else if(((i != j && nums[i] == val && nums[j] == val)) || nums[i] == val){
                j++;
            }
        }
        return i;
    }
};

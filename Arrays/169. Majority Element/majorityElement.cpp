class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=0;
        for(auto x:nums){
            if(count == 0){
             candidate=x;
             count++;
            }
            else if(x == candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};

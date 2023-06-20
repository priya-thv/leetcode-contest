class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1 || nums.size()==2){
            return -1;
        }
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;
        return nums[mid];
    }
};

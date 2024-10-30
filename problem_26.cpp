class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int val : nums){
            if(i<1 || val > nums[i-1])
                nums[i++] = val;
        }
        return i;

    }
};

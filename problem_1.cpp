class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;
        int n_vect = nums.size();
        for(int i=0;i<n_vect;i++){
            for(int j=i+1;j<n_vect;j++){
                if(nums[i]+nums[j]==target){
                    n.push_back(i);
                    n.push_back(j);
                }
            }
        }
        return n;
    }
};

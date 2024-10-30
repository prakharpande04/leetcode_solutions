class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        while(count(nums.begin(), nums.end(), val)!=0){
            auto it = find(nums.begin(), nums.end(), val);
            nums.erase(it);
        }
        return nums.size();
    }
};

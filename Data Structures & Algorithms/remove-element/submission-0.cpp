class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // recorrer los elementos del vector
        erase(nums,val);
        return (nums.size());
    }
};
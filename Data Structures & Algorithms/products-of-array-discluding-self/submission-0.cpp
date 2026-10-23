class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        int totalProductPrefix = 1;
        int totalProductSuffix = 1;
        vector<int> prefix(nums.size(), 0);
        vector<int> suffix(nums.size(), 0);
        vector<int> ans(nums.size(), 0);
        // Para hacer el prefix
        for(int i = 0; i < nums.size(); i++){
            totalProductPrefix *= nums[i];
            prefix[i] = totalProductPrefix;
        }
        // Para hacer el suffix
        for(int i = n-1; i >= 0; i--){
            totalProductSuffix *= nums[i];
            suffix[i] = totalProductSuffix;
        }
        // Obtener mi valor
        for(int i = 0; i < nums.size();i++){
            // ans = prefix [left] * suffix[right]
            // si i = 0
            if(i == 0){
                //solo prefix [right]
                ans[i] = suffix[i+1];
            }
            else if(i == nums.size() -1 ){
                ans[i] = prefix[i-1];
            }
            else {
                ans[i] = prefix[i-1] * suffix[i+1];
            }
        }
        return ans;
    }
};

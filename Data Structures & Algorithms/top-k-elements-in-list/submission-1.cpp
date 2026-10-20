class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequencies;
        for(const int& num : nums){
            frequencies[num]++;
        } 

        // Generacion de un array cuya posicion sea freq
        vector<vector<int>> freq(nums.size()+1);
        for(const auto& [key, frequency] : frequencies){
            freq[frequency].push_back(key);
        }
        //Vector de respuesta
        vector<int> ans;
        for(int i = freq.size() - 1; i > 0; i--){
            for(int j : freq[i]){
                ans.push_back(j);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};

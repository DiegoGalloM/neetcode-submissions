class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pairs;
        for(int i = 0; i < nums.size(); i++){
            // calculo cuánto me falta para llegar a lo que necesito
            int rest = target - nums[i];
            //reviso qué otro elemento tiene el par
            if (pairs.contains(rest)){
                return {pairs[rest], i};
            }
            //de lo contrario guardo el index porque es lo que hay que retornar
            pairs[nums[i]] = i;
        }
    }
};

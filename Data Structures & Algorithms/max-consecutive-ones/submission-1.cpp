class Solution {
public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            // Pongo un contador máximo que es el que voy a devolver
            int total_max = 0;
            //Un contador para cada uno de los chunks de 1's que        comparo        con el total_max
        int current_max = 0;
            for (auto ones : nums){
                if (ones == 1){
                    current_max += 1;
                    total_max = max(total_max, current_max);
                }
                else{
                        current_max = 0;
                    }
                
            }
            return total_max;
        }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> elements;
        for(int num : nums){
            elements.insert(num);
        }
        int sequence = 0;
        for(int num : elements){
            if(!elements.count(num-1)){
                int currentLength = 1;
                while(elements.count(num+1)){
                    num++;
                    currentLength++;
                }
                sequence = max(sequence, currentLength);
            }
        }
        return sequence;
    }
};
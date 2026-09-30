class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++){
            //revisar caso final
            if(i == arr.size()-1){
                ans.push_back(-1);
                return ans;
            }
            else {
                // halla rel elemento mayor
                int max = 0;
                for(int j = i+1; j < arr.size(); j++){
                    if (arr[j] > max){
                    max = arr[j];
                    }
                }
                ans.push_back(max);
            }
        }
    }
};
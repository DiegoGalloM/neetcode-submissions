class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> groups;
       for (const string& str : strs){
            string key = str;
            sort(key.begin(), key.end());
            if(groups.contains(key)){
                groups[key].push_back(str);
            }
            else{
                groups[key].push_back(str);
            }
        }
        vector<vector<string>> ans;
        for(const auto& [key, vec] : groups){
            ans.push_back(vec);
        }
        return ans;
    }
};

class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(const string& str : strs){
            res += to_string(str.size());
            res += "#";
            res += str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j]!='#'){
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            string word = s.substr(j + 1, length);
            ans.push_back(word);
            i = j + length + 1;
        }
        return ans;
    }
};

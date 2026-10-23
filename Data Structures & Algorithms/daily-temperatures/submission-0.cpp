class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int,int>> st;
        for(int i = 0; i < temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > st.top().first){
                auto [temp, idx] = st.top();
                // Elimino el actual porque es menor
                st.pop();
                // Pero cambio su index porque encontramos el siguiente mayor
                ans[idx] = i - idx;
            }
            st.push({temperatures[i], i});
        }
        return ans;
    }
};

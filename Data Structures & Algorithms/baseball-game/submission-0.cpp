class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int a = st.top();
                st.pop();
                int res = st.top() + a;
                st.push(a);
                st.push(res);
            }
            else if (operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                int res = 2*st.top();
                st.push(res);
            }
            // De lo contrario solo lo añade al stack
            else{
                st.push(stoi(operations[i]));
            }
        }
        // Pasa por todos los elementos del stack
        int ans = 0;
        while (!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
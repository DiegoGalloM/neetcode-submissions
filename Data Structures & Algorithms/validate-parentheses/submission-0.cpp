class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> pairs = {{')','('}, {']','['}, {'}','{'}};
        stack<char> st;
        for(char ch : s){
            // Si lo que ingresó lo cierra
            if(pairs.count(ch)){
                //Revisar que no esté vacío
                if(st.empty() || st.top() != pairs[ch]){
                    return false;
                }
                // Significa que es de apertura y que sí encaja
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        return st.empty();
    }
};

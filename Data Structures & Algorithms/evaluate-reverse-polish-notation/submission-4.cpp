class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> values;
        for(const auto ch : tokens){
            if(ch == "+"){
                int a = values.top();
                values.pop();
                int res = a + values.top();
                values.pop();
                values.push(res);
            }
            else if(ch == "-"){
                int a = values.top();
                values.pop();
                int res = values.top()-a;
                values.pop();
                values.push(res);
            }
            else if(ch == "*"){
                int a = values.top();
                values.pop();
                int res = a * values.top();
                values.pop();
                values.push(res);
            }
            else if(ch == "/"){
                int a = values.top();
                values.pop();
                int res = values.top()/a;
                values.pop();
                values.push(res);
            }
            else{
                values.push(stoi(ch));
            }
        }
        return values.top();
    }
};

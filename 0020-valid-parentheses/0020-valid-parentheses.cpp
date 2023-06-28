class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
        for(auto c : s){
            if(c == '{' || c == '(' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                else if(c == '}' and st.top() != '{')
                    return false;
                else if(c == ')' and st.top() != '(')
                    return false;
                else if(c == ']' and st.top() != '[')
                    return false;
                else
                    st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
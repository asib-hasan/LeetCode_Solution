class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        if(s.size() == 1)return false;
        for (int i = 0; i < s.size(); i++) {
            if (!st.empty() && s[i] == ')' && st.top() == '(' ||
                s[i] == '}' && st.top() == '{' ||
                s[i] == ']' && st.top() == '[') {
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        return st.empty() ? true : false;
    }
};
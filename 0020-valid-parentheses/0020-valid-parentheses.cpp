class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            // agar closing bracket hai
            if (ch == ')' || ch == '}' || ch == ']') {

                // stack empty ya mismatch
                if (st.empty())
                    return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') || (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            } else {
                // opening bracket
                st.push(ch);
            }
        }

        return st.empty();
    }
};
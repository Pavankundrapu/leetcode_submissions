class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if( c == '(' || c == '{' || c == '[' ) {
                st.push(c);
            } else {
                // Check if stack is empty before accessing st.top()
                if(st.empty()) return false;
                
                if(c == ')' && st.top() != '(') return false;
                if(c == ']' && st.top() != '[') return false;
                if(c == '}' && st.top() != '{') return false;
                
                st.pop(); // Pop only if matched
            }
        }
        
        // If stack is empty, all brackets matched
        return st.empty();
    }
};

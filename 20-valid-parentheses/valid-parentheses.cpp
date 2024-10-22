class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       for(char ch : s) {
           if(ch == '(' || ch == '[' || ch == '{') {
               st.push(ch);
           } else {
               if(st.empty()) return false;  // Stack cannot be empty when encountering a closing bracket
               char top = st.top();
               if((ch == ')' && top != '(') ||
                  (ch == ']' && top != '[') ||
                  (ch == '}' && top != '{')) {
                   return false;  // Mismatched bracket
               }
               st.pop();  // Valid matching pair, pop the stack
           }
       }
       return st.empty();  // Stack should be empty if all brackets matched
    }
};

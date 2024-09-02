#include<stack>
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp;
        for(int i = 0;i<s.size();i++)
        {
            if(!(isspace(s[i])))
            {   temp = "";
                while(!(isspace(s[i])) && i<s.size())
                {
                    temp+=s[i];
                    i++;
                }
                st.push(temp);
            }
        }
        string ans;
        while(st.size() != 0)
        {
             ans+=st.top();
             st.pop(); 
             if(st.size()!=0)
             {
                ans+=" ";
             }
        }
        return ans;
    }
};
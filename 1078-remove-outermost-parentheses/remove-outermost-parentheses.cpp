class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        char c;
        int count = 0;
        for(int i = 0;i<s.size();i++)
        {
           c = s[i];
           if(c == '(')
           {
              if(count != 0)
              {
                 ans+=c;
              }
              count++;
           }
           else if(c == ')')
           {
             if(count == 1)
             {
                count = 0;
             }
             else
             {
                ans+=c;
                count--;
             }
           } 
        }
        return ans;
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0;
        int y = 0;
        while(y < t.size())
        {
          if(s[x] == t[y])
          {
            x++;
            y++;
          }
          else
          {
            y++;
          }
        }
        if( x == s.size())
        {
            return true;
        }
        else
        {
            return false;
        }
        return false;
        
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpst;
        unordered_map<char,char> mpts;
        char c1,c2;
        for(int i = 0;i<s.size();i++)
        {
            c1 = s[i];
            c2 = t[i];
            if(mpst.find(c1) != mpst.end())
            {
                if(mpst[c1] != c2)
                {
                    return false;
                }
            }
            else
            {
                mpst[c1] = c2;
            }
            if(mpts.find(c2) != mpts.end())
            {
                if(mpts[c2] != c1)
                {
                    return false;
                }
            }
            else
            {
                mpts[c2] = c1;
            }
        }
        return true;
    }
};
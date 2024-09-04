class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> temp1;
        string temp;
        for(int i = 0;i<s.size();i++)
        {
            if(!isspace(s[i]))
            {   temp = "";
                while(!isspace(s[i])&&i<s.size())
                {
                    temp+=s[i];
                    i++;
                }
                temp1.push_back(temp);
            }
        }
        if(temp1.size()!=pattern.size())
        {
            return false;
        }
        unordered_map<char,string> mpp;
        unordered_map<string,char> mpp1;
        char x;
        string y;
        for(int i = 0;i<pattern.size();i++)
        {
           x = pattern[i];
           y = temp1[i];
           if(mpp.find(x) != mpp.end())
           {
             if(mpp[x] != y)
             {
                return false;
             }
           }
           else
           {
             mpp[x] = y;
           }
           if(mpp1.find(y) != mpp1.end())
           {
             if(mpp1[y] != x)
             {
                return false;
             }
           }
           else
           {
             mpp1[y] = x;
           }
        }
        return true;
    }
};
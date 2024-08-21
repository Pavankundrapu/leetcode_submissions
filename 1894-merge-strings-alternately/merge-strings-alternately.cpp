class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int flag = 0;
        string ans;
        int x = 0;
        int y = 0;
        while(x<word1.size() && y<word2.size())
        {
            if(flag == 0)
            {
                ans.push_back(word1[x]);
                x++;
                flag = 1;
            }
            else if(flag == 1)
            {
                ans.push_back(word2[y]);
                y++;
                flag = 0;
            }
        }
        while(x<word1.size())
        {
            ans.push_back(word1[x]);
            x++;
        }
         while(y<word2.size())
        {
            ans.push_back(word2[y]);
            y++;
        }
        return ans;
        
    }
};
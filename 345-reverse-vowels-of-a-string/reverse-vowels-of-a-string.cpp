class Solution {
public:

     bool isVowel(char ca)
      {   
        char c = tolower(ca);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
      }  
    string reverseVowels(string s) {
        int x= 0;
        int y = s.size()-1;
        while(x<=y)
        {
            if(isVowel(s[x]) && isVowel(s[y]))
            {
                swap(s[x],s[y]);
                x++;
                y--;
            }
            else if(!isVowel(s[x]))
            {
                x++;
            }
            else if(!isVowel(s[y]))
            {
                y--;
            }

        }
      return s;
        
    }
};
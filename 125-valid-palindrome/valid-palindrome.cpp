#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        //to remove all the non alphanumeric characters.
        s.erase(remove_if(s.begin(),s.end(),[](unsigned char c)
        {
            return !isalnum(c);
        }),s.end());
         
      transform(s.begin(), s.end(), s.begin(), ::tolower);

       int low = 0;
       int high = s.size()-1;  
       while(low<=high)
       {
        if(s[low] != s[high])
        return false;

        low++;
        high--;

       }
       return true;

    }
};
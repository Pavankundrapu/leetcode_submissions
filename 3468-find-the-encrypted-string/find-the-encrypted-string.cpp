class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
        string var(n, ' '); 
        
        for(int i = 0; i < n; i++) {
            int newIndex = (i + k) % n;
            var[i] = s[newIndex];  
        }

        return var;
    }
};

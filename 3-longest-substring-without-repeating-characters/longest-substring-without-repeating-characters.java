class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> st = new HashSet<>();
        int left = 0;
        int maxLen = 0;

        for(int right = 0;right<s.length();right++)
        {
            char c = s.charAt(right);
            while(st.contains(c))
            {
                st.remove(s.charAt(left));
                left++;
            }
            st.add(c);
            maxLen = Math.max(maxLen,right-left+1);
        }
        return maxLen;  
    }
}
class Solution {
    public int maxPower(String s) {
        int maxi = 1;
        int current = 1;
        char temp = s.charAt(0);
        for(int i= 1;i<s.length();i++)
        {
            if(s.charAt(i) == temp)
            {
               current++;
            }
            else
            {
                if(current > maxi) 
                maxi = current;
                current = 1;
            }
            temp = s.charAt(i);
        }

         if(current > maxi) 
         {
            maxi = current;
         }
         return maxi;

    }
}
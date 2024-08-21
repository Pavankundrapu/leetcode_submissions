class Solution
{
    public:
        bool canPlaceFlowers(vector<int> &flowerbed, int n)
        {
            int i = 0;
            if(flowerbed.size()==1)
            {
                if(flowerbed[0]==0&&n==1||n==0)
                return true;

                else
                return false;
                
            }
            while (i < flowerbed.size())
            {
                if (i == 0 && flowerbed[i] == 0 && flowerbed[i + 1] != 1)
                {
                    n--;
                    flowerbed[i]=1;
                   i++;
                }
                else if (i == flowerbed.size() - 1 && flowerbed[i] == 0 && flowerbed[i - 1] != 1)
                {
                    n--;
                      flowerbed[i]=1;
                    i++;
                }
                else if (flowerbed[i] == 0 &&i!=0&&i!=flowerbed.size() - 1 && flowerbed[i + 1] != 1 && flowerbed[i - 1] != 1)
                {
                    n--;
                      flowerbed[i]=1;
                     i++;
                }
                else
                {
                     i++;
                }
            }
          
            if (n <= 0)
                return true;
            return false;
        }
};

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;  // To keep track of the number of flowers that can be planted
        int size = flowerbed.size();
        
        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0) {
                // Check if the previous and next plots are empty or out of bounds
                bool emptyPrev = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyNext = (i == size - 1) || (flowerbed[i + 1] == 0);
                
                if (emptyPrev && emptyNext) {
                    flowerbed[i] = 1;  // Plant a flower here
                    count++;  // Increase the count of flowers planted
                    
                    // If we've planted enough flowers, return true
                    if (count >= n) {
                        return true;
                    }
                    
                    // Skip the next position since we can't plant adjacent flowers
                    i++;
                }
            }
        }
        
        // After the loop, check if we've planted enough flowers
        return count >= n;
    }
};

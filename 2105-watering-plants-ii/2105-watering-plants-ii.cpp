class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
       int i=0, j= plants.size()-1, n= capacityA, m=capacityB, count = 0;
        while(i <= j)
        {
          if(i == j)
          {
              if(capacityA >= plants[i] || capacityB >= plants[i])
                  break;
              else
                  count++;
              break;
          }
          if(plants[i] <= capacityA)  
          {
              capacityA -= plants[i++];
          }
         else
         {
             capacityA = n;
             capacityA -= plants[i++];
             count++;
         }
         if(plants[j] <= capacityB)  
         {
             capacityB -= plants[j--];
         }
         else
         {
             capacityB = m;
             capacityB -= plants[j--];
             count++;
         }
        }
        return count;
    }
};
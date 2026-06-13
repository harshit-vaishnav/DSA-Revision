class Solution {
public:
    int maxArea(vector<int>& height) {
//   brute force TC-O(N^2) SC-O(1);
    //  int n = height.size();
    //    int MaxArea = 0;
    //  for(int i = 0; i < n; i++)
    //  {
    //      for(int j = i+1; j < n; j++)
    //      {
    //          int area = min(height[i],height[j]) * (j - i);
    //          MaxArea = max(area,MaxArea);
    //      }
    //  }
    //   return MaxArea;

    
        //  optimal TC-O(N) SC-O(1)
        //   using two pointer approach
         int n = height.size();
         int MaxArea = 0;
         int i = 0;
          int j = n-1;
          while(i < j)
          {
             int w = j-i;
           int h = min(height[i],height[j]);
            int area = h * w;
             MaxArea = max(area,MaxArea);
             if(height[i] < height[j])
             {
                i++;
             }
             else
             {
                j--;
             }  
          }
           return MaxArea;
        
    }
};
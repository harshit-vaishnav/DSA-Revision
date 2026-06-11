// leetcode - best time to buy and sell a stock (136)
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//class Solution {
// public:
//     int maxProfit(vector<int>& arr) {
   

//         // brute force  TC-O(N^2) SC -O(1)
//         // approach go on ith day choose stock check for i+1 days if selling price greter compute profit and maxmizee profit
//         // int n = arr.size();
//         // int max_profit = 0;
//         // for(int i = 0; i < n; i++)
//         // {
//         //     int buy_stock = arr[i];
//         //     for(int j = i+1; j < n; j++)
//         //     {
//         //         if(arr[j] > buy_stock)
//         //         {
//         //              max_profit = max(arr[j] - buy_stock,max_profit);
//         //         }
//         //     }
//         // }
//         //  return max_profit;
         
//          //optimal TC-O(N) SC -O(1)
//     //      approach consider a minbuy day is first day sell to second day if profit comes maximize the profit if  not profit comes then it is your buying day so update buying price
//     //      int n = arr.size();
//     //     int max_profit = 0;
//     //      int buy = INT_MAX;
//     //      for(int i = 1; i < n; i++)
//     //      {
//     //         buy = min(buy,arr[i-1]);
//     //          if(arr[i] > buy)
//     //          {
//     //             max_profit = max(max_profit,arr[i] - buy);
//     //          }
            
//     //      }
//     //       return max_profit;
//     // }
     
// };
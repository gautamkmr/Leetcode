class Solution {
public:
    int maxProfit(vector<int> &prices) {
 
     int n=prices.size();
     if(n==0||n==1)
      return 0;
             
     int i=0;
     int sum=0;
     int min = prices[0];
     int max = prices[0];
     
     while(i<n-1)
     {
        while((i < (n-1))&&(prices[i+1]<=prices[i]))
         i++;
        min = prices[i];
        max = prices[i];
        
         while((i<(n-1))&&(prices[i+1]>=prices[i]))
          i++;
        
         max = prices[i];
         
         sum += max -min;
       //  min = prices[i];
     }   
     return sum;
    }
};

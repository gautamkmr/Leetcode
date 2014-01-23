/*
  My observation about this problem the consider the worse scenario where you have minimum value of gas - cost.
and if you can make the total sum >=0 then it should be a start position. 

*/
class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
      int i;
      int n= gas.size();
      if(n==0)
       return -1;
      if(n==1)
      {
          if(gas[0] < cost[0])
           return -1;
          else
           return 0;
      }
      int min = INT_MAX;
      int idx = -1;
      int total = 0;
      int tmp = 0;
      for(i=0;i<n;i++)
      {
         tmp = tmp + gas[i] - cost[i];
         total += gas[i] - cost[i];
         if(tmp < min)
         {
             min  = tmp;
             idx = i;
         }
      }
      if(total<0)
       return -1;
      else
       return idx+1;
    }
};

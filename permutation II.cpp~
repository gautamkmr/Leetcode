class Solution {
public:
   bool noSwap(vector<int> &num, int s, int i)
   {
       for(int j=s;j<i;j++)
        if(num[j]==num[i])
         return true;
         
       return false;     
   }
   void perm(vector<int> &num, int s, int n, vector<vector<int> > &res )
   {
       if(s==n)
         res.push_back(num);
       else
       {
           for(int i=s;i<=n;i++)
           {
               if(noSwap(num,s,i))
                 continue;
               int tmp = num[i];
                num[i] = num[s];
                num[s] = tmp;
                
                perm(num, s+1, n, res);

                tmp = num[i];
                num[i] = num[s];
                num[s] = tmp;
           }
       }
   }

    vector<vector<int> > permuteUnique(vector<int> &num) {
        vector<vector<int> > res;
        perm(num, 0, num.size()-1, res);
        return res;
    }
};

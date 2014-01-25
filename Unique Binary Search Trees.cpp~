class Solution {
public:
    int numTrees(int n) {
        if(n==0) return 1;
        if(n==1 || n==2) return n;
        vector<long long> a(n+1,0);
        a[0] = 1;
        a[1] = 1;
        a[2] = 2;
        int i,j;
        for(i=3;i<=n;i++)
        {
            long long res =0LL;
            for(j=0;j<=i-1;j++)
            {
              res += a[j]*a[i-j-1]; 
            }
            a[i] = res;
        }
        
        return a[n];
    }
};

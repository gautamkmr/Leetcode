class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int n = num.size();
        
        if(n==1 || n==0)
          return;
        if(n==2)
        {
            sort(num.begin(), num.end());
        }
        

        int i,j;
        for(i=n-2; i>=0;i--)
         if(num[i]<num[i+1])
          break;
        if(i==-1)
        {
            sort(num.begin(), num.end());
            return;
        }
        
        int min=i+1;
        for(j=i+1;j<n;j++)
        {
            if(num[j]<num[min] && num[j] > num[i])
             min = j;
        }
        int tmp = num[min];
        num[min] = num[i];
        num[i] = tmp;
        
        sort(num.begin()+i+1, num.end());
        
    }
};

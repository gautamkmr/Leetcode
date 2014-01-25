class Solution {
public:
    int searchInsert(int A[], int n, int target) {
       if(n==0)  return 0;
       if(target<A[0])  return 0;
       if(target>A[n-1]) return n;
       
      int start = 0;
      int end = n-1;
       
       while(start<end)
       {
           int mid = start + (end-start)/2;
           if(A[mid] == target)
             return mid;
           
            else if(A[mid]<target)
             start =  mid +1;
            else
             end = mid;
       }
       return start;    
    }
};

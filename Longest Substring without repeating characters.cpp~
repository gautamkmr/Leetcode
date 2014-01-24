class Solution {
public:
    int max(int a, int b)
    {
        return a>b ? a:b;
    }
    int lengthOfLongestSubstring(string s) {
        char visit[256];
        for(int i=0;i<256;i++)
         visit[i] = -1;
        int n = s.length();
        if(n==0||n==1)
          return n;
        int currlen = 1;
        int maxlen = 1;
        visit[s[0]] = 0;
        for(int i=1; i<n ;i++)
        {
            int prev = visit[s[i]];
            if( prev==-1 || currlen < i -prev)
             currlen++;
            else
            {
                maxlen = max(maxlen, currlen);
                currlen = i -prev;
            }
            visit[s[i]] = i;
        }
        
        return max(maxlen, currlen);
    }
};

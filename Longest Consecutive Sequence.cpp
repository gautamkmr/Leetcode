class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        map<int, bool> MAP;  
        int i;
        for(i=0; i<num.size(); i++)
         MAP[num[i]] = true;
         
        int longest = 0 ;
        
        for(i=0; i<num.size(); i++)
        {
            int res = 1;
            if(MAP[num[i]]==false) 
              continue; 
            
            int ptr = num[i];
            MAP.erase(num[i]);
            
            while(MAP.find(ptr+1) != MAP.end())
            {
                res++;
                MAP.erase(ptr+1);
                ptr++;
            }
            
            ptr = num[i];
            while(MAP.find(ptr-1) != MAP.end())
            {
                res++;
                MAP.erase(ptr - 1);
                ptr--;
            }
            if(res>longest)
             longest = res;
        }
        return longest;
    }
};

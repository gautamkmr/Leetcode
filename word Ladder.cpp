class Solution {
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
      if(start==end || dict.size()==0)
       return 0;
       
      queue<pair<string, int> > Q;
      pair<string, int> P;
      P = make_pair(start, 1);
      Q.push(P);
      //wl.push(1); 
      
      while(!Q.empty())
      {
          P = Q.front(); 
          Q.pop();
          
          string curr = P.first;
          int level =  P.second;
          
          if(curr==end)
           return level;
           
         string tmp;  
         for(int i=0; i<curr.length(); i++)
         {
             tmp = curr;
             for(char c='a'; c<='z'; c++)  //try changing one character at a time
             {
                 tmp[i] = c;
                 if(dict.find(tmp) != dict.end())  //if the word is in dictionary 
                 {
                     pair<string, int> t = make_pair(tmp, level+1);
                     Q.push(t);
                     dict.erase(tmp);
                 }
             }
         }
      }
      return 0;
    }
};

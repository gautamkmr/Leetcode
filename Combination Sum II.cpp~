class Solution {
public:
   void combination(vector<int> &candidates, int start, int target, vector<int> &tmp, set<vector<int> > &res)
   {
       if(target==0)
       {
         res.insert(tmp);
         return;
       }
       for(int i=start; i<candidates.size(); i++)
       {
           if(candidates[i] > target) return;  //no need to recurse 
           tmp.push_back(candidates[i]);
           combination(candidates,i+1,target-candidates[i], tmp, res); //note that we are starting next position from the same point even after fixing it
           tmp.pop_back();
       }
   }
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
       set<vector<int> > res;
        vector<int> tmp;
        int start = 0; 
        sort(num.begin(), num.end());   /* since out put should be non-decreasing otherwise avoid 
                                                         sorting and change return to continue in for loop 
                                                         Input: 	[8,7,4,3], 11
                                                         Output: 	[[8,3],[7,4],[4,4,3]]
                                                         Expected: 	[[3,4,4],[3,8],[4,7]]
                                                         and this was a WA :P 
                                                         */
        combination(num, start, target, tmp, res);
        vector<vector<int> > res1;
        
        set<vector<int> >:: iterator it;
        for(it = res.begin(); it!= res.end(); ++it)
         res1.push_back(*it);
        return res1;
    }
};

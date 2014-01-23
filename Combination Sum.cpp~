class Solution {
public:
   void combination(vector<int> &candidates, int start, int target, vector<int> &tmp, vector<vector<int> > &res)
   {
       if(target==0)
       {
         res.push_back(tmp);
         return;
       }
       for(int i=start; i<candidates.size(); i++)
       {
           if(candidates[i] > target) return;  //no need to recurse 
           tmp.push_back(candidates[i]);
           combination(candidates,i,target-candidates[i], tmp, res); //note that we are again starting from the same point even after fixing it
           tmp.pop_back();
       }
   }

    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<vector<int> > res;
        vector<int> tmp;
        int start = 0; 
        sort(candidates.begin(), candidates.end());   /* since out put should be non-decreasing otherwise avoid 
                                                         sorting and change return to continue in for loop 
                                                         Input: 	[8,7,4,3], 11
                                                         Output: 	[[8,3],[7,4],[4,4,3]]
                                                         Expected: 	[[3,4,4],[3,8],[4,7]]
                                                         and this was a WA :P 
                                                         */
        combination(candidates, start, target, tmp, res);
        return res;
    }
};

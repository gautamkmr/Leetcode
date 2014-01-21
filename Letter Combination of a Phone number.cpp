class Solution {
public:

   void comb(string &digits, int idx, string map[], string &tmp, vector<string> &res)
   {
       if(idx == digits.length())
       {
           res.push_back(tmp);
           return;
       }
       else
       {
           string itr = map[digits[idx] - '0'];
           for(int i=0; i<itr.size(); i++)
           {
               tmp.push_back(itr[i]);
               comb(digits, idx+1, map, tmp, res);
               tmp.pop_back();
           }
       }
   }

    vector<string> letterCombinations(string digits) {
        vector<string> res(1, "");

         string map[]={ "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        if(digits.length()==0)
         return res;
         
       res.clear();
        
        string tmp;
        comb(digits, 0, map,tmp, res);
        return res;
    }


};

class Solution {
public:
    string addBinary(string a, string b) {
        string res;   
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0, sum = 0, v1=0, v2=0;
        while(i>=0 || j>=0 || carry)   
        {
           v1 = (i>=0? a[i]-'0' : 0);
           v2 = (j>=0? b[j]-'0' : 0);
          sum = v1 + v2 + carry;
          carry = sum/2;
          sum = sum%2;
          res.insert(0, 1, sum + '0');
          //insert right before 0 of len 1 and value is sum
          
          i--;
          j--;
        }
        return res;
    }
};

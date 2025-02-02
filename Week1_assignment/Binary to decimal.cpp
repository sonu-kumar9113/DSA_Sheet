//gfg 
//Given a Binary Number b, find its decimal equivalent.
//Examples:
//Input: b = 10001000
//Output: 136
//Input: b = 101100
//Output: 44

//code

class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
          int i = b.size()-1;
          int decimal_no = 0;
          
          int power = 1;
          while(i>=0){
              int bit = b[i] - '0';
              decimal_no = decimal_no + (bit * power);
             
              power = power*2;
              i--;
          }
          return decimal_no;
    }
};

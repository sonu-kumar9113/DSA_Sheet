//gfg
You are given an integer n. Your task is to reverse the digits, ensuring that the reversed number has no leading zeroes.
Examples:
  Input: 200
  Output: 2
Examples:
  Input : 122
  Output: 221

//CODE
class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int ans = 0;
        while(n>0){
            int last_digit = n%10;
            ans = (ans * 10) + last_digit;
            n = n/10;
        }
        return ans;
    }
};

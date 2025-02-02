//gfg
Given a number n. Find the sum of all the digits of n.
Examples:
  Input: n = 12
  Output: 3
Explanation: Sum of 12's digits: 1 + 2 = 3
Examples:
  Input: n = 23
  Output 5
//CODE
class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int digit_sum = 0;
        while(n>0){
            int last_digit = n%10;
            digit_sum = digit_sum + last_digit;
            n = n/10;
        }
        return digit_sum;
    }
};

//gfg
You are given an integer n. Your task is to determine whether it is a palindrome.
  A number is considered a palindrome if it reads the same backward as forward, like the string examples "MADAM" or "MOM".

Examples:
   Input: n = 555
   Output: true
Examples:
   Input: n = 123
   Output: false

//CODE
class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        int k = n;
        int reverse = 0;
        
        while(n>0){
            int last_digit = n%10;
            reverse = (reverse*10) + last_digit;
            n = n/10;
        }
        if(k == reverse){
            return true;
        }
        return false;
    }
};

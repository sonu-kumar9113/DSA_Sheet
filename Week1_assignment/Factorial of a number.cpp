//gfg
Given a positive integer, n. Find the factorial of n.
Examples :
  Input: n = 5
  Output: 120
  Explanation: 1 x 2 x 3 x 4 x 5 = 120
Examples :
  Input: n = 4
  Output: 24
  Explanation: 1 x 2 x 3 x 4 = 24

//CODE
class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact = 1;
        while(n>0){
            fact = fact * n;
            n--;
        }
        return fact;
    }
};

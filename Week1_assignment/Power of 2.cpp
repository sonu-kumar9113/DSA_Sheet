//gfg
Given a non-negative integer n. The task is to check if it is a power of 2. 
Examples
  Input: n = 8
  Output: true
Examples
  Input: n = 98
  Output: false
  
//CODE
class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        // code here
       int  ans = 1;
       if(n==1){
           return true;
       }
        int temp = n;
        while(n>0){
            ans = ans *2;
            if(ans==temp){
                return true;
            }
            n--;
        }
        return false;
    }
};

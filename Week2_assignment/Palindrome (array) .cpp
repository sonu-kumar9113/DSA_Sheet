//gfg
Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.

Examples:
  Input: arr[] = [111, 222, 333, 444, 555]
  Output: true
Examples:
  Input: arr[] = [121, 131, 20]
  Output: false

//code
class Solution {
  public:
  bool checkPalindrome(int num){
      int original=num;
      int reverse = 0;
      int i=0;
      while(i<num){
          int lastbit=num%10;
          reverse = reverse*10 + lastbit;
          num = num/10;
      }
      if(reverse == original){
          return true;
      }
      else{
        return false;
      } 
  }
  bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0; i<arr.size(); i++){
           bool ans = checkPalindrome(arr[i]);
           if(ans == false){
               return false;
           }
        }
        return true;
    }
};

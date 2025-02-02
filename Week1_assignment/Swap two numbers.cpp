//gfg
You are given two numbers a and b. Your task is to swap the given two numbers.
Note: Try to do it without a temporary variable.
Examples:
  Input: a = 13, b = 9
  Output: 9 13
Examples:
  Input: a = 15, b = 8
  Output: 8 15

//CODE
class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        pair<int, int>ans;
        a = a+b;
        b = a-b;
        a = a-b;
        ans.first=a;
        ans.second=b;
        return ans;
    }
};

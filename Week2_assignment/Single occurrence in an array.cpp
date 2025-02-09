//gfg
Given a sorted array arr[] of n positive integers having all the numbers occurring exactly twice, 
except for one number which will occur only once. Find the number occurring only once.

Examples :
  Input: n = 5, arr[] = {1, 1, 2, 5, 5}
  Output: 2
//code
class Solution {
  public:
    int search(int n, int arr[]) {
  
    int ans = 0;
        for(int i=0; i<n; i++){
            ans = ans^arr[i];
        }
        return ans;
    }
};

//gfg
You are given an array of integers arr[]. Your task is to reverse the given array.
Note: Modify the array in place.

Examples:
  Input: arr = [1, 4, 3, 2, 6, 5]
  Output: [5, 6, 2, 3, 4, 1]

//code
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
};

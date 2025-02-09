//gfg
Given an array, arr of n integers, and an integer element x, find whether element x is present in the array. 
Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.
  
Examples:
    Input: arr[] = [1, 2, 3, 4], x = 3
    Output: 2
Examples:
    Input: arr[] = [10, 8, 30], x = 6
    Output: -1
//code
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // Your code here
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }
};

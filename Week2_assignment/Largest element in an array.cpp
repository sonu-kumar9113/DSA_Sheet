//gfg
Given an array arr[]. The task is to find the largest element and return it.
Examples:
  Input: arr[] = [1, 8, 7, 56, 90]
  Output: 90

//code
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxElement = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            maxElement = max(maxElement,arr[i]);
        }
        return maxElement;
    }
};

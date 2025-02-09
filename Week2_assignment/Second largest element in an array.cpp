//gfg
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.
Note: The second largest element should not be equal to the largest element.

Examples:
    Input: arr[] = [12, 35, 1, 10, 34, 1]
    Output: 34

//code
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int firstlargest =-1;
        int secondlargest = -1;
         for(int i = 0; i<arr.size(); i++){
             if(arr[i] > firstlargest){
                 firstlargest = arr[i];
             }
         }
        for(int i = 0; i< arr.size(); i++){
            if((arr[i] > secondlargest) && (arr[i] != firstlargest)){
                secondlargest = arr[i];
            }
            
        }
        return secondlargest;
    }
};

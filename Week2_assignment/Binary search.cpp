//gfg
Given a sorted array arr and an integer k, find the position(0-based indexing) at which k is present in the array using binary search.
Note: If multiple occurrences are there, please return the smallest index.

Examples:
   Input: arr[] = [1, 2, 3, 4, 5], k = 4
   Output: 3
Examples:
   Input: arr[] = [11, 22, 33, 44, 55], k = 445
   Output: -1

//code
  class Solution {
  public:
    int checkSmallestElementIndex(vector<int> &arr,int k){
       int n=arr.size();
       int start = 0;
       int end = n-1;
        int mid = (start+end)/2;
        
        while(start<=end){
            if(arr[mid] == k){
              //check for smallest index
                if(arr[mid] == arr[mid-1]){
                    end = mid-1;
                }
                else{
                     return mid;
                }
            }
            else if(arr[mid] > k){
                end = mid-1;
            }
            else if(arr[mid] < k){
                start= mid+1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
    
    int binarysearch(vector<int> &arr, int k) {
       return checkSmallestElementIndex(arr,k);
    }
};

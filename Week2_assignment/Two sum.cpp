//gfg
Given an array arr[] of positive integers and another integer target. Determine if there exists two 
distinct indices such that the sum of there elements is equals to target.

Examples:
    Input: arr[] = [1, 4, 45, 6, 10, 8], target = 16
    Output: true
  
//code
class Solution {
  public:
    bool findTwoSum(vector<int>arr,int target){
        int n = arr.size();
        int lptr = 0;
        int rptr = n-1;
        
        while(lptr < rptr){
            if((arr[lptr] + arr[rptr]) == target){
                return true;
                
            }
            else if ((arr[lptr] + arr[rptr]) > target){
                rptr--;
            }
            else if((arr[lptr] + arr[rptr]) < target){
                lptr++;
            }
        }
        return false;
    }
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
       return findTwoSum(arr,target);
       
    }
};

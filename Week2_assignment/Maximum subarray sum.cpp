//gfg
Given an integer array arr[]. You need to find the maximum sum of a subarray.

Examples:
  Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
  Output: 11
  Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.

//code
class Solution {
  public:
    int maxSum(vector<int>&arr){
    int ans = INT_MIN;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        int num = arr[i];
        sum +=num;
        ans = max(sum,ans);
        if(sum<0) sum=0;
    }
    return ans;
    }
  
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        return maxSum(arr);
    }
};

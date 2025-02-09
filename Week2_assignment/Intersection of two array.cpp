//gfg
Given two unsorted integer arrays a[] and b[] each consisting of distinct elements, the task is to return the count 
of elements in the intersection (or common elements) of the two arrays.

Intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Examples:
   Input: a[] = [89, 24, 75, 11, 23], b[] = [89, 2, 4]
   Output: 1
  
//code
class Solution {
  public:
    int numberofElementsInIntersection(vector<int> &a, vector<int> &b) {
        // Your code goes here
    unordered_set<int> elements(b.begin(), b.end()); 
    int count = 0;
    for (int i : a){
        if (elements.find(i) != elements.end()){
            count++;
        }
    }
    return count;
    }
};

//Problem Link : https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/#
//Problem Type : Basics, Mathematical
class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        /* lil gotcha -
            If the given diagonal end up forming a straight line, it is though not 
            a rectangle, but will be considered
        */
        
        //check if any of them is above the other one
        if(r2[1] > l1[1] || r1[1] > l2[1]) return false;
        
        //check if they are adjacent to each other
        if(r2[0] < l1[0] || r1[0] < l2[0]) return false;
        
        return true;
        
    }
};

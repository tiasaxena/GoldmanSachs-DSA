
//problem link : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& nums, int n, long long product) {
        if(product <= 1) return 0;
        
        int count = 0;
        int j = 0;
        //keep on taking product until the condition is false
        long long p = 1;
            
        for(int i = 0; i < nums.size(); i++) {
            p *= nums[i];
            //if condition breaks
            while(p >= product) {
               p /= nums[j];
               j++;
            }
            //update the answer
               count += (i - j + 1); //stores all possible subarray starting from index i 
         }
        return count;
    }
};

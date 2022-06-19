//https://practice.geeksforgeeks.org/problems/mean0021/1
class Solution {
  public:
    int mean(int N , int A[]) {
       int sum=0;
       for(int i=0;i<N;i++){
           sum=sum +A[i];
       }
       return sum/N;
    }
};
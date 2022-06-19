//https://practice.geeksforgeeks.org/problems/perfect-number3759/1#

class Solution {
  public:
  int fact(int n)
  {
      if(n<=1)
      return 1;
      else
      return n*fact(n-1);
  }
    int isPerfect(int N) {
     int sum=0;
     int temp=N;
     while(N)
     {
         sum=sum+fact(N%10);
         N=N/10;
     }
     if (sum==temp)
     {
         return 1;
     }
     else
     return 0;
    }
    
};
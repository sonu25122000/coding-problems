//https://practice.geeksforgeeks.org/problems/check-if-a-number-is-power-of-another-number5442/1#
class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
       if(X==1)
       {
            return X==Y;
       }
       if (Y==1)
       {
            return 1;
       }
       for (int i=1;i<Y;i++)
       {
           if(pow(X,i)==Y)
           {
              return 1;
           }
       }
               return 0;
    }
};
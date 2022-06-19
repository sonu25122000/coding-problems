//https://practice.geeksforgeeks.org/problems/maximum-possible-sum-of-products3637/1#
long long MaxSum(long long int A[], long long int B[], long long int N){
    //complete the function here
    sort(A,A+N);
    sort(B,B+N);
   long long sum=0;
    for(int i=0; i< N;i++){
        sum=sum+A[i]*B[i];
    }
    return sum;
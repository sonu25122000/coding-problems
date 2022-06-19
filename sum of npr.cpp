//https://practice.geeksforgeeks.org/problems/npr4253/1
class Solution{
public:
long long fact(long long n){
    if (n<=1)
    return 1;
    else
    return n*fact(n-1);
}
    long long nPr(int n, int r){
        long long ans;
       long long N=(long long)n;
       long long R=(long long)r;
       ans= fact(N)/ fact(N-R);
       return ans;
    }
};
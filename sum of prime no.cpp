//https://practice.geeksforgeeks.org/problems/sum-of-all-prime-numbers-between-1-and-n4404/1#
	class Solution{
	public:
	bool isPrime(int k){
	    if(k <= 1)
	        return false;
	   for(int i = 2; i*i <= k; i++){
	       if(k % i == 0){
	           return false;
	       }
	   }
	   return true;
	}
   	long long int prime_Sum(int n){
   	    long long int sum = 0;
   	    for(int i = 1; i<=n; i++){
   	        if(isPrime(i)){
   	            sum += i;
   	        }
   	    }
   	    return sum;
   	}    
};


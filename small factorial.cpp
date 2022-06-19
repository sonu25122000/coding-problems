//https://practice.geeksforgeeks.org/problems/simple-interest3457/1#
class solution
{
	public:
		long long int find_fact(int n)
		{
		   if(n<=1)
		   return 1;
		   else
		   return n*find_fact(n-1);
		       
		   }
		
};
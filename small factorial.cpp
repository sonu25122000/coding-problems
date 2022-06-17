class Solution
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
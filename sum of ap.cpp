//https://practice.geeksforgeeks.org/problems/sum-of-an-ap1025/1#
class Solution
{
	public:
		int sum_of_ap(int n,int a, int d)
		{
		 return (double) n/2*(2*a + (n-1)*d);
		}
};

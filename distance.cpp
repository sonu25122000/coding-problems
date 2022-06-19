//https://practice.geeksforgeeks.org/problems/distance-between-2-points3200/1#
class Solution
{
	public:
		int distance(int x1, int y1, int x2, int y2)
		{
		  //  return √((x_2-x_1)²+(y_2-y_1)²);
		 return round(sqrt(pow((x2-x1),2) + pow((y2-y1),2)));
		  
		}
};
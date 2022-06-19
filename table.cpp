//https://practice.geeksforgeeks.org/problems/print-table0303/1#
class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> v;
     for(int i=1; i<=10; i++){
         v.push_back(i*N);
     }
        return v;
    }
};
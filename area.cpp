//https://practice.geeksforgeeks.org/problems/area-of-rectange-right-angled-triangle-and-circle2600/1#
class Solution {
  public:
    vector<int> getAreas(int L , int W , int B , int H , int R) {
        vector<int> v;
        v.push_back(L*W);
        v.push_back(0.5*B*H);
        v.push_back(3.14*R*R);
       return v;
       
    }
};
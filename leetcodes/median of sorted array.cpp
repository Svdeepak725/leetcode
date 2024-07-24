class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double sum;
        vector<int>m(nums1.size() + nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),m.begin());
        sort(m.begin(),m.end());
        int l=m.size();
        if(l%2==0){
          sum=m[l/2]+m[(l/2)-1];
          return sum/2;
        }
        else{
            int sum=m[l/2];
            return sum;  
              }
      }
};
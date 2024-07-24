class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int>a(m+n);
     std::merge(nums1.begin(),nums1.begin()+m,nums2.begin(),nums2.begin()+n,a.begin());
      sort(a.begin(),a.end());
      for(int i=0;i<a.size();i++){
        nums1[i]=a[i];
      }
      for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<"";
      }

    }
};
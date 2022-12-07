class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(n+m);
        int i=0;
        int k=m;
        while(k<m+n){
            nums1[k]=nums2[i];
            i++;
            k++;
        }
        sort(nums1.begin(),nums1.end());
    }
};

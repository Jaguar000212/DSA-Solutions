class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m - 1, k = n - 1, i = m + n - 1;
        while(p > -1 && k > -1){
            if(nums1[p] > nums2[k]) nums1[i--] = nums1[p--];
            else nums1[i--] = nums2[k--];
        }
        for(int a = k; a > -1; a--)
            nums1[i--] = nums2[a];
    }
};
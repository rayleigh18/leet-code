class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> cp = nums1;
        int l1 = 0;
        int l2 = 0;
        for (int i = 0; i < m + n; i++) {
            if (l1 >= m) {
                nums1[i] = nums2[l2];
                l2++;
                continue;
            }
            if (l2 >= n) {
                nums1[i] = cp[l1];
                l1++;
                continue;
            }
            if (cp[l1] < nums2[l2]) {
                nums1[i] = cp[l1];
                l1++;
                continue;
            }
            nums1[i] = nums2[l2];
            l2++;
        }
    }
};
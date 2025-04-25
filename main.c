void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = 0;
    while (m < nums1Size && i < n) {
        nums1[m] = nums2[i];
        m++;
        i++;
    }
    for (int k = 0; k < nums1Size; k++) {
        for (int j = k + 1; j < nums1Size; j++)
            if ( nums1[j] <  nums1[k]) {
                int temp = nums1[j];
                nums1[j] = nums1[k];
                nums1[k] = temp;
            }
        }
}
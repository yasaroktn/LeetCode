#include <stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int *arry = malloc(sizeof(int) * (m + n));
    int n1 = 0;
    int n2 = 0;

    for (int i = 0; i < (m + n); i++)
    {
        if (n1 < m && (n2 >= n || nums1[n1] <= nums2[n2]))
        {
            arry[i] = nums1[n1];
            n1++;
        }
        else if (n2 < n && (n1 >= m || nums1[n1] > nums2[n2]))
        {
            arry[i] = nums2[n2];
            n2++;
        }
    }

    for (int a = 0; a < (m + n); a++)
        nums1[a] = arry[a];

    free(arry);
}
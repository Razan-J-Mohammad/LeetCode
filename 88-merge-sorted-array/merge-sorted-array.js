/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    // Start from the end of nums1 and nums2
    let i = m - 1;
    let j = n - 1;
    let k = m + n - 1;
    
    // Merge nums1 and nums2 starting from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    
    // If there are remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
};
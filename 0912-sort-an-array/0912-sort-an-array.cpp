class Solution {
public:
    
    void merge2(vector<int> &nums, int si, int ei, int mid) {
        int size = ei - si + 1;
        vector<int> temp(size, 0);
        int i = si, j = mid + 1, k = 0;
        while(i <= mid && j <= ei) {
            if(nums[i] < nums[j]) {
                temp[k] = nums[i];
                k++; i++;
            }
            else {
                temp[k] = nums[j];
                k++; j++;
            }
        }
        while(i <= mid) {
            temp[k] = nums[i];
            k++; i++;
        }
        while(j <= ei) {
            temp[k] = nums[j];
            k++; j++;
        }
        int m = 0;
        for(int i = si; i <= ei; i++) {
            nums[i] = temp[m];
            m++;
        }
    }
    
    void mergeSort(vector<int> &nums, int si, int ei) {
        if(si >= ei) { return; }
        int mid = si + (ei - si) / 2;
        mergeSort(nums, si, mid);
        mergeSort(nums, mid + 1, ei);
        merge2(nums, si, ei, mid);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        mergeSort(nums, 0, size - 1);
        return nums;
    }
};
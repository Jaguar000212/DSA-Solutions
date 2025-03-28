class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 1;
        int right = arr.size() - 2;
        while(left <= right){
            int middle = left + (right - left)/2;
            if(arr[middle] > arr[middle + 1] && arr[middle] > arr[middle - 1]) return middle;
            if(arr[middle] > arr[middle - 1]) left = middle + 1;
            else right = middle - 1;
        }
        return -1;
        
    }
};
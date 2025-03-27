int BinarySearch(const int *arr, const int left, const int right, const int target) {
    if (left > right) return -1;
    const int middle = (right + left) / 2;
    if (arr[middle] > target) return BinarySearch(arr, left, middle - 1, target);
    if (arr[middle] < target) return BinarySearch(arr, middle + 1, right, target);
    return middle;
}
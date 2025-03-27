int BinarySearch(const int *arr, const int size, const int target) {
    int left = 0;
    int right = size - 1;
    do {
        const int middle = (right + left) / 2;
        if (arr[middle] > target) right = middle - 1;
        else if (arr[middle] < target) left = middle + 1;
        else return middle;
    } while (left <= right);
    return -1;
}
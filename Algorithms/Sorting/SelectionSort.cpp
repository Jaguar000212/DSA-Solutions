void SelectionSort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int smallIDX = i;
        for (int j = i; j < n; j++) if (arr[j] < arr[smallIDX]) smallIDX = j;

        int temp = arr[i];
        arr[i] = arr[smallIDX];
        arr[smallIDX] = temp;
    }
}
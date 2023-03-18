// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
     int a = 0;
    if (size == 0) {
        return 0;
    }
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            a += 1;
        }
    }
    return a;
}

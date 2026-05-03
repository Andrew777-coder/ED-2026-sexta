#include <stdio.h>
#include "selecao.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right) {
    int pivo = arr[right];
    int i = left;
    
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivo) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[right]);
    return i;
}

int quick_select(int arr[], int left, int right, int k) {
    if (left <= right) {
        int pivoIndex = partition(arr, left, right);
        
        if (pivoIndex == k)
            return arr[pivoIndex];
        else if (pivoIndex > k)
            return quick_select(arr, left, pivoIndex - 1, k);
        
        return quick_select(arr, pivoIndex + 1, right, k);
    }
    return -1; 
}

int linear_search(int arr[], int n, int k) {
    for (int i = 0; i <= k; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
    return arr[k]; 
}

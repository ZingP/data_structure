#include <stdio.h>

int partition (int array[], int left, int right) {
    int tmp;
    tmp = array[left];
    while (left < right) {
        while ((left < right) && (array[right] >= tmp)) {
            right--;
        }
        array[left] = array[right];
        while ((left < right) && (array[left] <= tmp)) {
            left++;
        }
        array[right] = array[left];
    }
    array[left] = tmp;

    return left;
}

void quickSort(int array[], int left, int right){
    int mid;
    if (left < right) {
        mid = partition(array, left, right-1);
        quickSort(array, left, mid-1);
        quickSort(array, mid+1, right);
    }
}

int main() {
    int a[10] = {2, 5, 6, 4, 8, 9, 20, 11, 47, 22};
    int i, n;
    char c;

    n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n);

    for (i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
    scanf("%c", &c);
    return 0;
}
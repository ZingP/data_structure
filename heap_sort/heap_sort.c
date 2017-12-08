#include <stdio.h>

void sift(int array[], int left, int right) {
    int father, lf_child, root;
    father = left;
    lf_child = 2 * father + 1;
    root = array[father];

    while (lf_child <= right) {
        if ((lf_child < right) && (array[lf_child] < array[lf_child + 1])) {
            lf_child++;
        }
        if (root < array[lf_child]) {
            array[father] = array[lf_child];
            father = lf_child;
            lf_child = 2 * father + 1;
        } else {
            break;
        }  
    }
    array[father] = root;
}

void heap(int array[], int n) {
    int i, tmp;
    for (i=(n/2 -1); i > -1; i--) {
        sift(array, i, n-1);
    }
    for (i=(n-1); i > -1; i--) {
        tmp = array[0];
        array[0] = array[i];
        array[i] =  tmp;
        sift(array, 0, i-1);
    }
}

int main() {
    int a[10] = {2, 5, 6, 4, 8, 9, 20, 11, 47, 22};
    int i, n;
    char c;

    n = sizeof(a) / sizeof(a[0]);
    heap(a, n);

    for (i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
    scanf("%c", &c);
    return 0;
}
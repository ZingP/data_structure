#include <iostream>

void selectSort(int array[], int n) {
    int i, j, min, p;

    for (i=0; i<(n-1); i++) {
        min = i;
        for (j=i+1; j<n; j++) {
            if (array[j] < array[min])
                min = j;
        }
        p = array[i];
        array[i] = array[min];
        array[min] = p;
    }
}

main(){
    using namespace std;
    int a[10] = {2, 5, 6, 4, 8, 9, 20, 11, 47, 22};
    int i, n;

    n = sizeof(a) / sizeof(a[0]);

    selectSort(a, n);
    
    for (i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    cin.get();
}
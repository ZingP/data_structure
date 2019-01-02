#include<iostream>

void insertSort(int array[], int n) {
    int i, currentRight, currentIndex;

    for (i = 1; i < n; i++) {
        currentRight = array[i];
        currentIndex = i - 1;
        while ((currentIndex >= 0) && array[currentIndex] > currentRight) {
            array[currentIndex+1] = array[currentIndex];
            currentIndex--;
        }
        array[currentIndex+1] = currentRight;
    }
}

main(){
    using namespace std;
    int a[10] = {2, 5, 6, 4, 8, 9, 20, 11, 47, 22};
    int i, n;

    n = sizeof(a) / sizeof(a[0]);

    insertSort(a, n);
    
    for (i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    cin.get();
}
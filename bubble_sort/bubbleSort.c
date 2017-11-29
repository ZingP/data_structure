#include <iostream>

//bubble sort...
int main () {
    using namespace std;
    int a[10] = {2, 5, 6, 4, 8, 9, 20, 11, 47, 22};
    int i,n;

    n = sizeof(a) / sizeof(a[0]);
    for ( i = 0; i < n; i++ ){
         cout << a[i] <<endl;
    }
    cin.get();

    int k,j,p;
    for (k = 0; k < n; k++) {
        for (j =0; j<(n-k-1);j++) {
            if (a[j] > a[j+1]) {
                p = a[j];
                a[j] = a[j+1];
                a[j+1] = p;
            }
        }      
    }
    cout <<"sort----------->"<<endl;
   
    for ( i = 0; i < n; i++ ){
         cout << a[i] <<endl;
    }
    cin.get(); 
    return 0;
}
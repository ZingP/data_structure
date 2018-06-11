#include<stdio.h>


int main() {
    int i,j;
    j=1;

    for (i = 10; i >-1;i--) {
        j++;
        printf("%d-%d\n", i,j);
        

    }
    scanf("%d", &i);
    return 0;
}
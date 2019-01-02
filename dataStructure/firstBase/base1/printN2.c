# include <stdio.h>

void PrintN2(int N){
    if (N) {
        PrintN2(N-1);
        printf("%d\n", N);
    }
    return;
}

int main() {
    int N;
    scanf("%d", &N);
    PrintN2(N);
    return 0;
}
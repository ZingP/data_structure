// 打印正整数1-N
#include <iostream>
using namespace std;


// 顺序打印
void PrintN1(int n) 
{
    int i;
    for (i=1; i<=n; i++) {
        cout << i << " ";
    }
    cout << "\n";
    return;
}


// 递归打印
void PrintN2(int n) 
{
    if (n > 0)
    {
        PrintN2(n-1);
        cout << n << "\n";
    } 
}

int main() {
    int N;
    cout << "Input a int num: " << endl;
    cin >> N;
    PrintN1(N);
    cout << "--------" << endl;
    PrintN2(N);
    return 0;
}
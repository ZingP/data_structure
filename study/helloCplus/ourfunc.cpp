#include <iostream>
using namespace std;   // 允许所有函数访问该库
void simon(int);       // 函数原型

int main()
{
    /* code */
    simon(3);
    cout << "hahah";

    int count;
    cin >> count;

    cout << count << endl;
    return 0;
}

void simon(int n)   // 函数定义
{
    using namespace std;
    cout << "simon says " << n << " time." << endl;
}
#include <iostream>

void simon(int);

int main()
{
    /* code */
    using namespace std;

    simon(3);
    cout << "hahah";

    int count;
    cin >> count;

    cout << count << endl;
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "simon says " << n << " time." << endl;
}
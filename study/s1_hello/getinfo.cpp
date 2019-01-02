#include <iostream>
int main()
{
    /* code */
    using namespace std;

    int apples;
    int n;

    apples = 2;
    cout << "I have " << apples << " apples." << endl;
    cin >> n;
    apples += n;
    cout << "Now I have " << apples << " apples\n";
    return 0;
}

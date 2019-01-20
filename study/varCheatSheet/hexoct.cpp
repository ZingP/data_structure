#include <iostream>

int main()
{
    using namespace std;
    int cheast = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "monsieur cuts a striking figure\n";
    cout << "cheat = " << cheast << " {42 in decimal}\n";
    cout << "waist = " << waist << " {0x42 in ghex}\n";
    cout << "inseam = " << inseam << " {42 in octal}\n";
    return 0;
}
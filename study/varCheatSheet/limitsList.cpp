// limits.cpp 一些整形数限制
#include <iostream>
#include <climits> 

int main()
{
    /* code */
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof n_int << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
    cout << "---------------------" << endl;

    cout << "MAX nums:" << endl;
    cout << "int: " <<  n_int << endl;
    cout << "short: " <<  n_short << endl;
    cout << "long: " <<  n_long << endl;
    cout << "long long: " <<  n_llong << endl;
    return 0;
}   // page 42

#include <bits/stdc++.h>

using namespace std;

int main(){

    // 1 <= N <= 1000

    long int num;
    long double out;

    cin >> num;

    if(num < 1 || num > 1000) return 0;

    num = num - 1;

    out = pow(2, num);

    cout << (int)out << endl;

    return 0;

}
#include <iostream>

using namespace std;

int main(){
    int R, C;
    cin >> R >> C;

    C = R - C;

    long double out = R*R;
    long double in = C * C;

    cout.precision(10);
    cout << in / out * 100<< endl;
}

#include <iostream>

using namespace std;

int main(){
    int H, M;
    cin >> H >> M;

    if (M >= 45){
        cout << H << " " << M - 45 << endl;
    } else{
        cout << (H - 1 + 24)%24 << " ";
        cout << (M - 45 + 60)% 60 << endl;
    }
    return 0;
}

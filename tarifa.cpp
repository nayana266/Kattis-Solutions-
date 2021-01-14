#include <iostream>

using namespace std;

main(){
    int x, y;
    cin >> x >> y;

    int used = 0;

    for(int i = 0; i < y; i++){
        int temp;
        cin >> temp;
        used += temp;
    }
    cout << x * (y+1)-used << endl;
}

#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int d, i = 0;
    cin >> d;
    float array[d];
    for(; i < d; i++){
        cin >> array[i];
    }
    cout << maxArray(array, d);
    return 0;
}

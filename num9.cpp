#include <iostream>
#include <cmath>
using namespace std;

void AddLeftDigit(int *, int);

int main() {
    int a, b;
    cout << "Bitta son va raqam kiriting: "; cin >> a >> b;
    AddLeftDigit(&a, b);
    return 0;
}

void AddLeftDigit(int *a, int b) {
    int ans, temp, sumd = 0;
    temp = *a;
    while(temp > 0){
        temp /= 10;
        sumd ++;
    }
    ans = b * pow(10, sumd) + *a;
    cout << ans << endl;
}

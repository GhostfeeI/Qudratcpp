#include <iostream>
#include <cmath>
using namespace std;

int AddDigitRight(int, int);

int main() {
    int a, b;
    cout << "Bitta son va raqam kiriting: "; cin >> a >> b;
    cout << AddDigitRight(a, b) << endl;
    return 0;
}

int AddDigitRight(int a, int b){
    int ans;
    ans = a * 10 + b;
    return ans;
}

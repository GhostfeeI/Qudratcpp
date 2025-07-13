#include <iostream>
#include <math.h>

using namespace std;

int InvertDigit(int);

int main() {
    int a, b, c;
    cout << "3 ta son kiriting: "; cin >> a >> b >> c;
    cout << InvertDigit(a) << endl;
    cout << InvertDigit(b) << endl;
    cout << InvertDigit(c) << endl;
    return 0;
}

int InvertDigit(int a){
    int result = 0, temp, sumd = 1;
    temp = a;
    while (a >=10){
        a /= 10;
        sumd ++;
    }
    cout << sumd << endl;
    for(int i = pow(10, sumd-1); sumd >=1; i /= 10){
        result += i * (temp%10);
        temp /= 10;
        sumd --;
    }
    return result;
}

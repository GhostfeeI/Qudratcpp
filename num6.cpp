#include <iostream>
#include <math.h>
using namespace std;

void DigitCountSum(int, int *, int *);
void dcs(int);

int main() {
    int a, b, c;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    DigitCountSum(a, &b, &c);
    return 0;
}

void dcs(int a){
    int counter = 1, sum = 0;
    do{
        sum += a % 10;
        a /= 10;
        counter ++;
    } while(a>=10);
    sum += a % 10;
    cout << "Sum of digits: " << sum << endl;
    cout << "Number of digits: " << counter << endl;
}
void DigitCountSum(int a, int * b, int * c){
    dcs(a);
    dcs(*b);
    dcs(*c);
}

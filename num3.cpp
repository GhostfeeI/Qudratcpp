#include <iostream>
#include <math.h>
using namespace std;

void Mean(float, float *, float *, float *);

int main() {
    float a, b, c, d;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    Mean(a, &b, &c, &d);

    return 0;
}

void Mean(float a, float *b, float *c, float *d){

    cout << "a va b sonining o'rta arifmetigi: " << (a + *b) / 2 << endl;
    cout << "a va c sonining o'rta arifmetigi: " << (a + *c) / 2 << endl;
    cout << "a va d sonining o'rta arifmetigi: " << (a + *d) / 2 << endl;

    cout << "a va b sonining o'rta geometrigi: " << sqrt(a * *b) << endl;
    cout << "a va c sonining o'rta geometrigi: " << sqrt(a * *c) << endl;
    cout << "a va d sonining o'rta geometrigi: " << sqrt(a * *d) << endl;

}

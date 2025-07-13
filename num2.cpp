#include <iostream>
#include <math.h>
using namespace std;

void powera234 (float, float *, float *, float *);

int main() {
    float a, b = 2, c = 3, d = 4;
    cin >> a;

    powera234(a, &b, &c, &d);

    return 0;
}

void powera234(float a, float *b, float *c, float *d){
    cout << pow(a, *b) << endl;
    cout << pow(a, *c) << endl;
    cout << pow(a, *d) << endl;
}

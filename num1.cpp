#include <iostream>
#include <math.h>

using namespace std;

void powera3(float);

int main() {
    float a, b, c, d, e;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    cout << "e = "; cin >> e;

    powera3(a);
    powera3(b);
    powera3(c);
    powera3(d);
    powera3(e);

    return 0;
}

void powera3(float a){
    double ans;
    ans = a * a * a;
    cout << "Sonning 3-darajasi: " << ans << endl;
}

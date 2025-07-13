#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

bool IsSquare5(int);

int main() {
    int a, b, c, d, e;
    cout <<"5 ta son kiriting: ";    cin >> a >> b >> c >> d >> e;
    if(IsSquare5(a)){
        cout << "5 ning darajasi\n";
    }
    else{
        cout << "5 ning darajasi emas\n";
    }
    if(IsSquare5(b)){
        cout << "5 ning darajasi\n";
    }
    else{
        cout << "5 ning darajasi emas\n";
    }
    if(IsSquare5(c)){
        cout << "5 ning darajasi\n";
    }
    else{
        cout << "5 ning darajasi emas\n";
    }
    if(IsSquare5(d)){
        cout << "5 ning darajasi\n";
    }
    else{
        cout << "5 ning darajasi emas\n";
    }
    if(IsSquare5(e)){
        cout << "5 ning darajasi\n";
    }
    else{
        cout << "5 ning darajasi emas\n";
    }
    return 0;
}

bool IsSquare5(int a){
    double ans = 0;
    int check = 0;
    ans = pow(a, 1.0/5.0);
    check = pow(a, 1.0/5.0);

    if(ans == check){
        return 1;
    }
    else{
        return 0;
    }
}

#include <iostream>
#include <cmath>

using namespace std;

bool IsSquare(int);

int main() {
    int a, b, c;
    cout << "Give me 3 numbers: " ;     cin >> a >> b >> c;
    if(IsSquare(a)){
        cout << "1st number is a square number\n";
    }
    else{
        cout << "1st number is not a square number\n";
    }
    if(IsSquare(b)){
        cout << "2nd number is a square number\n";
    }
    else{
        cout << "2nd number is a not square number\n";
    }
    if(IsSquare(c)){
        cout << "3rd number is a square number\n";
    }
    else{
        cout << "3rd number is a not square number\n";
    }

    return 0;
}

bool IsSquare(int a){
    float ans;
    int check;
    ans = sqrt(a);
    check = sqrt(a);
    if(ans == check){
        return 1;
    }
    else{
        return 0;
    }
}

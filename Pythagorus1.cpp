#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c;
    cin >> a >> b;
    c = sqrt((a*a)+(b*b));
    cout << fixed << setprecision(6) << c ;
}
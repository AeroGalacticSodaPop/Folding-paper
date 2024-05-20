#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, n, t = 0.0871;
    cout<<"Enter distance (in meters): ";
    cin>>a;
    a *= 1000;
    n = ceil((log10(a) - log10(t))/log10(2));
    cout<<"The number of folds required is "<<n<<endl;
}
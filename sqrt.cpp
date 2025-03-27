#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.precision(15);
    cout << fixed;

    double target = 2;

    double start = 0;
    double end = target;

    double middle = (start+end)/2;

    unsigned int iter = 0;
    
    while (true) {
        middle = (start + end) / 2;

        if (abs((middle * middle) - target) < 1.0E-15) {
            cout << "The square root is " << middle << endl;
            break;
        }
        else if (middle * middle < target) {
            start = middle;
        }
        else if(middle * middle > target){
            end = middle;
        }
        iter++;
    cout << start << " " << middle << " " << end << " " << iter << endl;
    }
}
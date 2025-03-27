#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.precision(20);
    cout << fixed;

    double target;
    double n;

    cout << "Enter the radicand: ";
    cin >> target;
    cout << "Enter the index: ";
    cin >> n;

    double start = 0;
    double end = target;
    double middle = (start+end)/2;

    unsigned int iter = 0;
   
    
    while (true) {
        middle = (start + end) / 2;

        if (abs((pow(middle, n)) - target) < 1.0E-10) {
            cout << "The square root is " << middle << endl;
            break;
        }
        else if (pow(middle, n) < target) {
            start = middle;
        }
        else if(pow(middle, n) > target){
            end = middle;
        }
        iter++;
    cout << start << " " << middle << " " << end << " " << iter << endl;
    }
}
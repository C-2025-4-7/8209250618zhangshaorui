#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
int main() {
    const int TOTAL_PRIMES = 200; 
    const int PER_LINE = 10;    

    int count = 0;                
    int current_num = 2;         

    cout << "Ç°200¸öËØÊý£º" << endl;


    while (count < TOTAL_PRIMES) {
        if (is_prime(current_num)) {
            cout.width(4);
            cout << current_num;

            count++;
            if (count % PER_LINE == 0) {
                cout << endl;
            }
            else {
                cout << " ";  
            }
        }
        current_num++;
    }

    return 0;
}
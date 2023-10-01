#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 5;
    int i = 0;
    int ans = 0;

    while(n != 0){
        int bit = n % 2;
        ans += bit * pow(10, i);

        n = n / 2;
        i++;
    }

    cout << "The binary equivalent is: " << ans << endl;

    return 0;
}

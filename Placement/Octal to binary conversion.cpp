#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 5;
    int i = 0;
    int ans = 0;

    while(n != 0){
        int bit = n % 10;
        ans += bit * pow(2, i);
       i += 3;
        n = n / 10;
       
    }

    cout << "The binary equivalent is: " << ans << endl;

    return 0;
}

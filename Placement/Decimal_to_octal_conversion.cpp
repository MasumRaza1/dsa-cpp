#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 9;
    int i = 0;
    int ans = 0;

    while(n != 0){
        int bit = n % 8;
        ans += bit * pow(10, i);

        n = n / 8;
        i++;
    }

    cout << "The octal equivalent is: " << ans << endl;

    return 0;
}

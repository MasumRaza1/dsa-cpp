#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 71;
    int i = 0;
    int ans = 0;

    while(n != 0){
        int bit = n % 10; // to decima
        ans += bit * pow(8, i); // se octal

        n = n / 10;
        i++;
    }

    cout << "The octal equivalent is: " << ans << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int binary = 1010;
    int octal = 0;
    int i = 0;

    while(binary != 0){
        int bit = binary % 1000; // take 3 bits at a time
        octal += bit * pow(2, i); // convert 3-bit binary to octal

        binary = binary / 1000;
        i++;
    }

    cout << "The octal equivalent of binary " << binary << " is: " << octal << endl;

    return 0;
}

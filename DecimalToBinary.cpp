/*#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1; // Get the last bit of n
        ans = (bit * pow(10, i)) + ans; // Add the bit to the answer at the correct position
        n = n >> 1; // Right shift n to process the next bit
        i++; // Increment the position index
    }
    cout << ans << endl; //final binary representation
    return 0;
}*/

#include<iostream>
using namespace std;

int decimalToBinaryInt(int n) {
    int binary = 0, place = 1;

    while (n > 0) {
        int bit = n % 2;           // or: int bit = n & 1;
        binary += bit * place;
        place *= 10;
        n /= 2;                    // or: n >>= 1;
    }

    return binary;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binary = decimalToBinaryInt(n);
    cout << "Binary (as int): " << binary << endl;

    return 0;
}



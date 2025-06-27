#include<iostream>
#include<vector>
#include<math.h>

using namespace std;


string isPrime(int n){
    for(int i=2; i*i<n; i++){
        return "Non Prime";
    }
}

void printDigits(int n){  //TC=O(logbase10 n)
    while(n != 0){
        int digit = n % 10;  
        cout << digit << endl;

        n = n / 10;
    }
}

void printDigitsCount(int n){
    int count = 0;

    while(n != 0){
        int digit = n % 10;  
        count++;

        n = n / 10;
    }
    cout << count<< endl;
}

void printDigitsSum(int n){
    int sum = 0;

    while(n != 0){
        int digit = n % 10;  
        sum += digit;

        n = n / 10;
    }
    cout << sum<< endl;
}

bool isArmstrong(int n){
    int copyN = n;
    int sumofCubes = 0;

    while( n!=0){
        int dig = n%10;
        sumofCubes += (dig*dig*dig);

        n = n/10;
    }
    return sumofCubes == copyN;
}

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a % b;
        }else{
            b=b % a;
        }
    }
    if (a==0) return b;
    return a;
}

int gcdRec(int a, int b){
    if(b==0) return a;

    return gcdRec(b, a % b);
}

int lcm(int a, int b){
    int gcd = gcdRec(a,b);
    return (a*b) / gcd;
}

int reverse(int n){
    int revNum = 0;

    while(n != 0){
        int dig = n % 10;
        revNum = revNum * 10 + dig;
        n = n/10;
    }
    return revNum;
}

 bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num = x;
        long long rev = 0;
        while(num!= 0){
            int last = num%10;
            rev = rev*10 + last;
            num = num/10;
        }
        if(rev == x){
            return true;
        }
        return false;
  }


int main(){
    //cout<< lcm(20,28) << endl;
    //cout<< reverse(9876) << endl;
    //cout<< gcdRec(20,24) << endl;

    //cout<< gcd(20,28) << endl;

    //int n = 4267;
    //cout<< isPrime(n) << endl;
    //printDigits(n);
    //printDigitsCount(n);
    //printDigitsSum(n);

    /*int n=153;
    if(isArmstrong(n)){
        cout<< "is an armstrong number\n";
    } else {
        cout<< "is NOT an armstrong number\n";
    }*/
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    } 

    return 0;
}


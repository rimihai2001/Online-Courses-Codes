#include <iostream>
using namespace std;

bool isPalindrome(int x) {
   
    int inv = 0;
    int aux = x;
    while(aux)
    {
        inv=inv*10 + aux%10;
        aux /= 10;
    }
    if(inv==x)
        return true;
    return false;
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout << n <<" is a palindrome";
    }
    else {
        cout << n <<" is NOT a palindrome";
    }
    return 0;
}
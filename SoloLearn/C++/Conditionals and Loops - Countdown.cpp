#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=n; i>=1; i--)
    {
        if(i%5==0)
        {
            cout<<i<<'\n';
            cout<<"Beep"<<'\n';
        }
        else
        {
            cout<<i<<'\n';
        }
    }
    
    return 0;
}
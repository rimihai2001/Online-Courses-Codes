#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    
    int min_age=ages[0];
    int sum=0;

    for (int i = 0; i < 5; ++i) 
    {
        min_age=min(min_age,ages[i]);
    }

    float dis=min_age*50.0/100.0;
    double final_price;
    final_price = 50 - dis;
    cout<<final_price;
    
    return 0;
}
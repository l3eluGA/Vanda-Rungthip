#include<iostream>
using namespace std;

int main(){
    int i,b,c;
    cout << "Enter an integer: ";
    cin >> i;
    while(i>0)
    {
        cout << "Enter an integer: ";
        cin >> i;
        if(i%2==0 && i>0)
        {
            b +=i;
        }
        if(i==0)
        {
            break;
        }
        else
        {
            c +=i;
        }
    }
    
    cout << "#Even numbers = "<<b<<"\n";
    cout << "#Odd numbers = "<<c;
    return 0;
}

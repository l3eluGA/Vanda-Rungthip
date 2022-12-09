#include<iostream>
using namespace std;

int main(){
    int i,b=0,c=0;
    cout << "Enter an integer: ";
    cin >> i;
    while(i>0)
    {
        cout << "Enter an integer: ";
        cin >> i;
        if(i==0)
        {
            break;
        }
        
        if(i%2==0)
        {
            b+=1;
        }
        if(i%2!=2)
        {
            c+=1;
        }
        
    }
    
    cout << "#Even numbers = "<<b<<"\n";
    cout << "#Odd numbers = "<<c;
    return 0;
}

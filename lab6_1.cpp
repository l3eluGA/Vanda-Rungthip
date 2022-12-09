#include<iostream>
using namespace std;

int main(){
    int i,b=0,c=0;
    while(true)
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
        else
        {
            c+=1;
        }
        
    }
    
    cout << "#Even numbers = "<<b<<"\n";
    cout << "#Odd numbers = "<<c<<"\n";
    return 0;
}

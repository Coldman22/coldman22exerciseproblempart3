//Convert Binary to Decimal 
#include <iostream>
#include <cmath>

using namespace std;
//boolean prototype
int convert(long long);

int main(){
    long long n;
    cout<<"Enter a binary number ";
    cin>>n;
    cout<<"In Binary = "<<convert(n)<<" in decimal.";
    return 0;
}
//boolean definition
int convert(long long(n)){
    int dec= 0 , i=0, rem;

    while (n != 0)
    {
        rem = n%10;
        n/=10;
        dec=rem*pow(2,i);
        ++i;
    }
    return dec;
}
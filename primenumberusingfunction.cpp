//Check the prime Number using function.
#include <iostream>
using namespace std;

//boolean prototype
bool check_prime(int n);

int main(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;

    if (check_prime(n))
    {
        cout<<n<<" is a prime number.";
    }
    else
    {
        cout<<n<<" is not a prime number.";
    }
    return 0;
}

//boolean definition.
bool check_prime(int n){
    bool is_prime = true;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    else
    {
        for (int i = 2; i <= n/2 ; i++)
        {
            if (n%i==0)
            {
                is_prime = false;
            }
            
        }
        
    }
    return is_prime;
}
//Find the Sum of Number Using a Function.
#include <iostream>
using namespace std;

int sum(int n){
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        temp += i;
    }
    return temp;
}
int main(){
    int num;
    cout<<"Enter a positive integers: ";
    cin>>num;
    cout<<"Sum = "<<sum(num);
    return 0;
}
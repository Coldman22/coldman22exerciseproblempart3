// print a sentence accepting a user as a input as an argument and print it in sentence.
#include <iostream>
using namespace std;

void print_sentence(int age){
    cout<<"My age is "<<age<<".";
}
int main(){
    int age;
    cout<<"Enter the age :";
    cin>>age;
    print_sentence(age);
    return 0;
}
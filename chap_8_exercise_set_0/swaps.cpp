#include <iostream>
using namespace std;

void swap_with_references(char& first_value, char& second_value){
    cout << "Swapping with references --> First Value: " << first_value << " <--> Second Value: " << second_value << endl;
    char temp = first_value;
    first_value = second_value;
    second_value = temp;
}

int main (){
    char a = 'a';
    char b = 'b';
    swap_with_references(a, b);
    cout << "New Values --> first value: " << a << endl <<" Second Value: " << b << endl;
    return 0;
}

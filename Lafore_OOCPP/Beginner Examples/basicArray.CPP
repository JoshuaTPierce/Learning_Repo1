//BasicArray.CPP
//Demonstrates a Simple Array

#include <iostream>
using namespace std;

int main(){
    int age[4]; //array "age" of 4 ints
    
    for(int j = 0; j < 4; j++)
        cout << "Enter an age: ";
        cin >> age[j];

    for(j = 0; j < 4; j++){
        cout << "You entered " << age[j] << endl;
    }
    return 0;
}
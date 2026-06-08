#include<bits/stdc++.h>
using namespace std;
int main () {
    int age;
    cout << "enter your age:";
    cin >> age;
    if (age>=18 && age<=45) {
        cout << "you are an adult and you are eligible to vote";
    }
    else if(age>45) {
        cout << "you are old and you are eligible to vote";
    }
    else if(age<5) {
        cout << "you are a kid and you are not eligible to vote";
    }
    else {
        cout << "you are not eligible to vote";
    }
}
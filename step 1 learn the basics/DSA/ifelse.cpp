#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "enter marks" << endl;
    cin >> number;
    if(number>=90){
        cout << "Grade A" << endl;
    }
    else if(number>=70){
        cout << "Grade B" << endl;
    }
    else if(number>=50){
        cout << "Grade C" << endl;
    }
    else if(number>=35){
        cout << "Grade D" << endl;
    }
    else {
        cout << "Failed or invalid marks entered" << endl;
    }
}
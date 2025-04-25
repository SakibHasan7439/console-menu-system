#include<iostream>
#include<string>
using namespace std;

void showMenu(int menuNumber, int num1, int num2){
    if(menuNumber == 1){
        cout<<num1<< " + "<<num2<< " = "<< num1 + num2;

    }else if(menuNumber == 2){
        cout<<num1<< " - "<<num2<< " = "<< num1 - num2;

    }else if(menuNumber == 3){
        cout<<num1<< " * "<<num2<< " = "<< num1 * num2;

    }else {
        cout<<num1<< " / "<<num2<< " = "<< num1 / num2;
    };
};

int main() {
    int num1, num2;
    int menuNumber;
    bool isExit = false;
    
    string firstItem = "1. Add";
    string secondItem = "2. SubTraction";
    string thirdItem = "3. Multiplication";
    string forthItem = "4. Division";
    cout<<firstItem<<endl<<secondItem<<endl<<thirdItem<<endl<<forthItem<<endl<<"Exit"<<endl;

    cout<<"Choose a menu item number: ";
    cin>>menuNumber;
    cout<<"Enter first Number: ";
    cin>>num1;

    cout<<"Enter second Number: ";
    cin>>num2;
    showMenu(menuNumber, num1, num2);
}
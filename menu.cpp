#include<iostream>
#include<string>
using namespace std;

void showMenu(int menuNumber, int num1, int num2, bool isExit){

    if(menuNumber == 1){
        cout<<num1<< " + "<<num2<< " = "<< num1 + num2<<endl;

    }else if(menuNumber == 2){
        cout<<num1<< " - "<<num2<< " = "<< num1 - num2<<endl;

    }else if(menuNumber == 3){
        cout<<num1<< " * "<<num2<< " = "<< num1 * num2<<endl;

    }else {
        cout<<num1<< " / "<<num2<< " = "<< num1 / num2<<endl;
    };
};

int main() {
    int num1, num2;
    int menuNumber;
    bool isExit = false;

    while(isExit == false){
        string firstItem = "1. Add";
        string secondItem = "2. SubTraction";
        string thirdItem = "3. Multiplication";
        string forthItem = "4. Division";
        string fifthItem = "5. Exit";
        cout<<firstItem<<endl<<secondItem<<endl<<thirdItem<<endl<<forthItem<<endl<<fifthItem<<endl;
    
        cout<<"Choose a menu item for Mathmatical calculation or enter 5 to exit: ";
        cin>>menuNumber;
        if(menuNumber > 5 || menuNumber < 0){
            cout<<"invalid user input! Please try again.."<<endl;

        }else if(menuNumber == 5){
            cout<<"Thank you for using it. GoodBye!";
            break;
        }else {
            cout<<"Enter first Number: ";
            cin>>num1;
        
            cout<<"Enter second Number: ";
            cin>>num2;
            showMenu(menuNumber, num1, num2, isExit);
        };
    };
}
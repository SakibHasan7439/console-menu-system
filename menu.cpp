#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> showHistory(){
    vector<string> history_items = {};
    return history_items;
}

void showMenu(int menuNumber, int num1, int num2){
    int result;
    vector<string> history = showHistory();

    if(menuNumber == 5){
        for(string item : history){
            cout<<item<<endl;
        }
        return;
        
    }else if(menuNumber == 1){
        result = num1 + num2;
        cout<<num1<< " + "<<num2<< " = "<< result<<endl;
        history.push_back(to_string(num1) + " + " + to_string(num2) + " = " + to_string(result));

    }else if(menuNumber == 2){
        result = num1 - num2;
        cout<<num1<< " - "<<num2<< " = "<<result<<endl;
        history.push_back(to_string(num1) + " - " + to_string(num2) + " = " + to_string(result));

    }else if(menuNumber == 3){
        result = num1 * num2;
        cout<<num1<< " * "<<num2<< " = "<< result<<endl;
        history.push_back(to_string(num1) + " * " + to_string(num2) + " = " + to_string(result));

    }else {
        if(num2 == 0){
            cout<<"Invalid user input. Zero cannot be divisible by a number."<<endl;
            return;
        }
        cout<<num1<< " / "<<num2<< " = "<< num1 / num2<<endl;
        result = num1 / num2;
        history.push_back(to_string(num1) + " + " + to_string(num2) + " = " + to_string(result));
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
        string fifthItem = "5. Show History";
        string sixthItem = "6. Exit";
        cout<<firstItem<<endl<<secondItem<<endl<<thirdItem<<endl<<forthItem<<endl<<fifthItem<<endl<<sixthItem<<endl;
    
        cout<<"Choose a menu item for Mathmatical calculation or enter 5 to exit: ";
        cin>>menuNumber;
        if(menuNumber == 6){
            cout<<"Thank you for using it. GoodBye!";
            break;

        }else if(menuNumber > 5 || menuNumber < 0){
            cout<<"invalid user input! Please try again.."<<endl;
            
        }else {
            cout<<"Enter first Number: ";
            cin>>num1;
        
            cout<<"Enter second Number: ";
            cin>>num2;
            showMenu(menuNumber, num1, num2);
        };
    };
}
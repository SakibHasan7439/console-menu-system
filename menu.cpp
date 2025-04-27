#include<iostream>
#include<string>
#include<vector>
using namespace std;

void showHistory(vector<string>& history_items){
    cout<<"Your History is: "<<endl;
    for(string item : history_items){
        cout<<item<<endl;
    };
};

void showMenu(int menuNumber, int num1, int num2, vector<string>& history_items){
    int result;

    if(menuNumber == 1){
        result = num1 + num2;
        cout<<num1<< " + "<<num2<< " = "<< result<<endl;
        history_items.push_back(to_string(num1) + " + " + to_string(num2) + " = " + to_string(result));

    }else if(menuNumber == 2){
        result = num1 - num2;
        cout<<num1<< " - "<<num2<< " = "<<result<<endl;
        history_items.push_back(to_string(num1) + " - " + to_string(num2) + " = " + to_string(result));

    }else if(menuNumber == 3){
        result = num1 * num2;
        cout<<num1<< " * "<<num2<< " = "<< result<<endl;
        history_items.push_back(to_string(num1) + " * " + to_string(num2) + " = " + to_string(result));

    }else {
        if(num2 == 0){
            cout<<"Invalid user input. Zero cannot be divisible by a number."<<endl;
            return;
        }
        cout<<num1<< " / "<<num2<< " = "<< num1 / num2<<endl;
        result = num1 / num2;
        history_items.push_back(to_string(num1) + " / " + to_string(num2) + " = " + to_string(result));
    };
};

int main() {
    vector<string> history_items = {};
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
    
        cout<<"Choose a menu item for Mathmatical calculation or enter 6 to exit: ";
        cin>>menuNumber;
        if(menuNumber == 6){
            cout<<"Thank you for using it. GoodBye!"<<endl;
            break;

        }else if(menuNumber > 5 || menuNumber < 0){
            cout<<"invalid user input! Please try again.."<<endl;
            
        }else if(menuNumber == 5){
            showHistory(history_items);
            cout<<endl;

        }else {
            cout<<"Enter first Number: ";
            cin>>num1;
        
            cout<<"Enter second Number: ";
            cin>>num2;
            showMenu(menuNumber, num1, num2, history_items);
        };
    };
}
#include<iostream>
using namespace std;

template<class myType>
class MyClass {
    public :
        myType first;
        myType second;

        MyClass(myType f, myType s){
            first = f;
            second = s;
        };
};
int main(){
    MyClass<string> stringObj("Hello", "World");
    cout<<stringObj.first<<" "<<stringObj.second<<endl;

    MyClass<int> secondObj(19, 1);
    cout<<secondObj.first<< " + " <<secondObj.second<< " = "<<secondObj.first + secondObj.second<<endl;
};
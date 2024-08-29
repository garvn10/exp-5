//Shrey Raj
//23070123123
//entcb2
#include<iostream>
using namespace std;

int main() {
    int choice;
    cout<<"1) Monday"<<"\n"<<"2) Tuesday"<<"\n"<<"3) Wednesday"<<"\n"<<"4) Thursday"<<"\n"<<"5) Friday"<<"\n"<<"6) Saturday"<<"\n"<<"7) Sunday"<<"\n";
    cout<<"Enter a choice: ";
    cin>>choice;
    switch(choice) {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thrsday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Wrong Input";
    }
}
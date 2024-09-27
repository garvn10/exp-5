# CDS-Experiment--5
Aim -> To study and implement C++ decision making statements.

Software -> Visual Studio Code

Theory -> Decision making statements in C++ are the conditional statements that are used to execute codes based on some given conditions.

The following are certain decsion making statements in C++ :
1. if statement
2.if-else statement
3. switch statement
4. nested if statements
5. nested switch statements

Codes are as follow:
A
```

#include<iostream>
using namespace std;

int main() {
    int  n1;
    cout<<"Enter a positive number: ";   //Output - Enter a positive number: 20
    cin>>n1;
    if(n1==0) {
        cout<<n1<<" is zero."<<endl;
    }
    else if(n1%2!=0){
        cout<<n1<<" is odd."<<endl;
    }
    else {
        cout<<n1<<" is even."<<endl;        //98 is even.
    }
}
```

B
```
#include<iostream>
using namespace std;
int main(){
    int  n1, n2, n3;
    cout<<"Enter number-1: ";
    cin>>n1;
    cout<<"Enter number-2: ";
    cin>>n2;
    cout<<"Enter number-3: ";
    cin>>n3;

    if(n1>n2) {
        if(n1>n3) {
            cout<<n1<<" is the greatest number"<<endl;
        }
        else {
            cout<<n3<<" is the greatest number"<<endl;
        }
    }
    else if(n2>n1) {
        if(n2>n3) {
            cout<<n2<<" is the greatest number"<<endl;
        }
        else {
            cout<<n3<<" is the greatest number"<<endl;
        }
    }
    else {
        cout<<"All three numbers are equal";
    }
}
```
C
```
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
```
D
```
#include<iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    

    cout<<"Enter an operator (+, -, *, /): ";
    cin>>oper;
    cout<<"Enter two numbers: "<<"\n";
    cin>>num1>>num2;
    switch(oper) {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<"\n";
        break;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<"\n";
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<"\n";
        break;
        case '/':
        if (num2!=0)
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<"\n";
        else
        cout<<"Error! Division by zero."<<"\n";
        break;
        default:
        cout<<"Error! The operator is not correct."<<"\n";
        break;
    }
}
```
E
```#include <iostream>
using namespace std;
int main()
 {
int day = 1;
  switch (day) {
    case 6:
cout<< "Today is Saturday";
      break;
    case 7:
cout<< "Today is Sunday";
      break;
    default:
cout<< "Looking forward to the Weekend";
  }
  return 0;
  }
```

OUTPUTs:
## OUTPUT
### 1.
![cds 1](https://github.com/user-attachments/assets/3276cba9-638e-4b7c-b942-12b07813db93)
### 2.
![cds 4](https://github.com/user-attachments/assets/32ce732c-4cf8-4f64-919b-58f7d0ec20d3)
### 3.
![cds 3](https://github.com/user-attachments/assets/383ed45c-78f7-4a7a-97d0-5aa7144efa8f)
### 4.
![cds 2](https://github.com/user-attachments/assets/8132069c-8fb5-4820-a9fb-08f44496aac1)

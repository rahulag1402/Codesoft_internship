#include<iostream>
using namespace std;
int main(){
    float num1,num2,result;
    char op;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    cout<<"Choose a operation (+,-,*,/): "<<endl;
    cin >> op; 
    switch(op){
        case '+': result = num1 + num2;
        break;
        case '-': result = num1 - num2;
        break;
        case '*': result = num1 * num2;
        break;
        case '/': if(num2==0){
                    cout<<"Divide by 0 is not possible"<<endl;
                    return 1;
                } 
                result = num1 / num2;
        break;
        default: cout<<"Invalid Operation"<<endl;
        return 1;
    }

    cout<<num1<<" "<<op<<" "<<num2<<" = "<<result;

    return 0;
}
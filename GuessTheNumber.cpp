#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void check1(int target){
    int n;
    cout << "Guess a number:"<<endl;
    cin>>n;
    do{
        if(n > target){
            cout<<"Your  guess is too high! Guess again: "<<endl;
            cin>>n;
        }
        else if(n < target){
            cout<<"Your guess is too low! Guess again: "<<endl;
            cin>>n;
        }
        if(n== target){
            cout<<"congrats your guess was correct"<<endl;
        }
    }
    while(n != target );
}

int main(){
    srand(time(NULL));
    int target = rand()%100;
    check1(target);
    return 0;
}
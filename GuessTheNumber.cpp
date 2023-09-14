#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void guessNumberGame(int target){
    int n;
    cout << "Guess a number between 1 and 100:"<<endl;
    int attempts=0;
    do{
        cin>>n;
        attempts++;
        if(n > target){
            cout<<"Your  guess is too high! Guess again: "<<endl;
        }
        else if(n < target){
            cout<<"Your guess is too low! Guess again: "<<endl;
        }
        if(n== target){
            cout<<"Congrats! your guess was correct"<<endl;
            cout<<"Total attemps taken to Guess: "<<attempts<<endl;
        }
    }
    while(n != target );
}
int main(){
    //seed the random generator with current time
    srand(time(NULL));
    int target = rand()%100;
    guessNumberGame(target);
    return 0;
}
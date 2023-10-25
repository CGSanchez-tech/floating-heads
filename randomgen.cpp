#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));//using current time as a seed to generate random numbers
    int randNum = rand() % 5 + 1; //+1 to start from 1

    switch(randNum){
        case 1: cout << "A bumper sticker! \n"; 
        break;
        case 2: cout << "A sticker sticker! \n"; 
        break;
        case 3: cout << "A bloody sticker! \n";
        break; 
        case 4: cout << "A smelly sticker! \n";
        break; 
        case 5: cout << "No sticker! \n";
        break; 
        
    }
}
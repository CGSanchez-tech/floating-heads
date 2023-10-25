/*
just prints out a rectangle given a 
number of rows, columns and a symbol
*/

#include<iostream>
using namespace std;


int main(int argc, char **argv){
    if(argc !=4){
        cout << "format:" << argv[0] << "{rows} {columns} {symbol}" << '\n';
        return 0;
    }

    int rows = stoi(argv[1]);
    int columns = stoi(argv[2]);
    char symbol = *argv[3];

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol << ' ';
        }
        cout << '\n';
    }

    cout << "hi" << endl;

}
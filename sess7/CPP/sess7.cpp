#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int factorial(int n){
    if(n == 0){
        return 1;
    }else if(n == 1){
        cout << n;
    }else{
        cout << n << "*";
    }
    return(n * factorial(n-1));
}

int main(){

    int number, res;
    char repeat;

    do{
        system("clear");
        cout << "+++++++++++++++++++++++++++++++" << endl;
        cout << "Welcome to Factorial Program" << endl;
        cout << "+++++++++++++++++++++++++++++++" << endl;
        cout << "\n" << "Enter an Integer number : ";
        cin >> number;
        res = factorial(number);
        cout << "\n\n" << "Factorial of " << number << " is = " << res << endl;
        cout << "\n" << "Press Y to Repeat = ";
        cin >> repeat;
    }while(repeat == 'y' || repeat == 'Y');
    cout << "\n\n" << "Thank you for using this application." << "\n\n";
}

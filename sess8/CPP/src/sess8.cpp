#include "travel.h"

Travel *App = new Travel("soal08.txt");

int main(){
    
    int choice;

    do{    
        do{
            App -> menu();
            cin >> choice;
        }while(choice < 1 or choice > 5);

        switch(choice){
            case 1:
                system("clear");
                cout << "test";
                App -> load_data();
                break;
            case 2:
                system("clear");
                App -> edit_data();
                break;
            case 3:
                system("clear");
                App -> insert_data();
                break;
            case 4:
                system("clear");
                App -> save_data();
                break;
        }
    }while(choice != 5);

}

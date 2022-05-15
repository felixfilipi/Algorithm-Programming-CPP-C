#include<iostream>
#include<string>
#include<iomanip>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::setw;

class Store{
    public:
        struct Database{
            int price;
            int stock;
            string product;
            string code;
        };

        struct Database data[4] = {
            {7500, 140, "Pencil", "SA001"},
            {5000, 90, "Eraser","SA002"},
            {8000, 120, "Pen", "SA003"},
            {9500, 80, "Notes", "SA004"}
        };

        int search_data(string &code){
            for(int i = 0; i <= 4; i++){
                if(data[i].code == code){
                    return i;
                }
            }

            return -1;
        }

        void menu(){
                cout << "-------------------------------------" << endl;
                cout << "               STORE                 " << endl;
                cout << "-------------------------------------" << endl;
             
                cout << endl << "---------------------------------------------------------------------" << endl;
                cout << "| " << setw(5) << "No" 
                     << " | " << setw(8) << "Code" 
                     << " | " << setw(10) << "Product" 
                     << " | " << setw(15) << "Available" 
                     << " | " << setw(15) << "Price" << " |";
                cout << endl << "---------------------------------------------------------------------" << endl;
                         
                for(int i = 0; i < 4; i++){
                     cout << "| " << setw(5) << i + 1 
                         << " | " << setw(8) << data[i].code
                         << " | " << setw(10) << data[i].product 
                         << " | " << setw(15) << data[i].stock
                         << " | " << setw(15) << data[i].price
                         << " | " << endl;
                }
                cout << "---------------------------------------------------------------------" << endl;
        }


        void sell(){
            int total, datarow;
            string code;
            char again;
            bool state;

            do{
                system("clear");
                menu();
                do{
                    cout << endl << "Input Stationery Code [5 Char] = ";
                    cin >> code;
                }while(code.length() != 5);

                datarow = search_data(code);
                if(datarow != -1){
                  do{
                      cout << "How much do you want to buy (0 - 120) = ";
                      cin >> total;
                  }while(total < 0 | total > 120);

                  cout << endl << "Total price is = Rp " << data[datarow].price 
                      << " x " << total << " = Rp " << 
                      data[datarow].price * total << endl;
                  data[datarow].stock = data[datarow].stock - total;
                  state = true;

                }else{
                    state = false;
                    cout << "The Stationary ID Not found!!" << endl;
                    system("clear");
                }

            }while(state != true);
        }


        void add(){
            int total, datarow;
            string code;
            char again;
            bool state;

            do{
                system("clear");
                menu();
                do{
                    cout << endl << "Input Stationery Code [5 Char] = ";
                    cin >> code;
                }while(code.length() != 5);

                datarow = search_data(code);
                if(datarow != -1){
                  do{
                      cout << "How much do you want to sell (1 - 10) = ";
                      cin >> total;
                  }while(total < 1 | total > 10);

                  data[datarow].stock = data[datarow].stock + total;
                  state = true;

                }else{
                    state = false;
                    cout << "The Stationary ID Not found!!" << endl;
                    system("clear");
                }

            }while(state != true);
        }
};


int main(){
    int choice;

    Store *App = new Store();
    
    do{
        system("clear");
        App -> menu();
        cout << endl << "Menu = " << endl << endl;
        cout << "1. Sell" << endl;
        cout << "2. Add Stock" << endl;
        cout << "3. Exit" << endl;

        cout << endl << "Your choice = ";
        cin >> choice;    
                 
        switch(choice){
            case 1:
                App -> sell();
                break;

            case 2:
                App -> add();
                break;
        }

    }while(choice != 3);
    
    return 0;
}


#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int first_menu(int w, int h){
    char symbol;
    cout << "\n" << "Masukkan simbol : ";
    cin >> symbol;
    cout << "\n" << "Hasil Gambar : " << "\n\n";
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i == 1 || i == h){
                cout << symbol << " ";
            }else if(j == 1){
                cout << symbol;
            }else if(j == w){
                cout << " " << symbol;
            }else{
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}

int second_menu(int w, int h){
    cout << "\n" << "Hasil Gambar : " << "\n\n";
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i == 1 || i == h){
                cout << i << " ";
            }else if(j == 1){
                cout << i;
            }else if(j == w){
                cout << " " << i;
            }else{
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}

int main(){
    
    int w, h, choice;
    char repeat;

    do{
        do{
            system("clear");
            cout << "Selamat Datang di Program Gambar SegiEmpat" << endl;
            cout << "Menu Tampilan : " << endl;
            cout << "1. Segiempat Dengan Simbol" << endl;
            cout << "2. Segiempat Dengan Angka";

            cout << "\n\n" << "Pilihan Anda [1/2] : ";
            cin >> choice;
        }while(choice <= 0 || choice > 2);

        if(choice == 1){
            cout << "\n" << "Masukkan Panjang : ";
            cin >> w;
            cout << "Masukkan Lebar : ";
            cin >> h;
            first_menu(w, h);
        }else if(choice == 2){
            cout << "\n" << "Masukkan Panjang : ";
            cin >> w;
            cout << "Masukkan Lebar : ";
            cin >> h;
            second_menu(w, h);
        }
        cout << "\n\n" << "Anda Ingin Mengulang [Y/T]? = ";
        cin >> repeat;
    }while(repeat == 'Y' || repeat == 'y');

    cout << "\n\n" << "Thank you for using this application." << "\n\n";

    return 0;
}

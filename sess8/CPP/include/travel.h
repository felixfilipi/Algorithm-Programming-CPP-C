#ifndef TRAVEL_H
#define TRAVEL_H

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<stdlib.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::setw;

class Travel{
    public:
        std::vector<string>names, departures, destinations, codes; 
    
        struct data{
            string name;
            string departure;
            string destination;
            string code;
        };

        string file;
         
        data travel_data;
        
        Travel(string filename){
            file = filename;
            std::ifstream inFile;
            inFile.open(filename);
            if(inFile.is_open()){
                while(inFile >> travel_data.name >> travel_data.departure >> travel_data.destination >> travel_data.code){
                    names.push_back(travel_data.name);
                    departures.push_back(travel_data.departure);
                    destinations.push_back(travel_data.destination);
                    codes.push_back(travel_data.code);
                }
            }

            inFile.close();
        
        }
        
        void load_data(){
            
            int index = 1;
        
                cout << "---------------------------------------------------------------------------" << endl;
                cout << "|" << setw(5) << "No" << " | " << setw(15) << "Nama Kereta"
                    << " | " << setw(15) << "Asal" << " | " << setw(15) << "Tujuan"
                    << " | " << setw(10) << "Loko" << " | " << endl;
                cout << "---------------------------------------------------------------------------" << endl;
               
                for(int i=0, n = names.size(); i <= n - 1; i ++){
                    cout << "|" << setw(5) << index << " | " << setw(15) << names[i] 
                        << " | " << setw(15) << departures[i] << " | " << setw(15) << 
                        destinations[i] << " | " << setw(10) << codes[i] << " | " << endl;
                    index++;
                }
        
                cout << "---------------------------------------------------------------------------" << endl;
        }
        
        void edit_data(){
            
            int data_number;
        
            cout << "Data yang ingin diedit: ";
            cin >> data_number;
            cout << endl << endl << setw(15) << "Nama Kereta = " << names[data_number - 1] << endl;
            cout << setw(15) << "Asal = " << departures[data_number - 1] << endl;
            cout << setw(15) << "Tujuan = " << destinations[data_number - 1] << endl;
            cout << setw(15) << "Lokomotif = " << codes[data_number - 1] << endl << endl;
            
            cout << "--------------------------------------------------------" << endl;
            cout << "Data kereta yang ingin diperbaharui : " << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << endl << "Nama Kereta = ";
            cin >> travel_data.name;
            cout << "Asal = ";
            cin >> travel_data.departure;
            cout << "Tujuan = ";
            cin >> travel_data.destination;
            cout << "Lokomotif = ";
            cin >> travel_data.code;
        
            names[data_number - 1] = travel_data.name;
            departures[data_number - 1] = travel_data.departure;
            destinations[data_number - 1] = travel_data.destination;
            codes[data_number - 1] = travel_data.code;
        
            system("clear");
            load_data();
            cout << endl << "--------------------------------------------------------" << endl;
            cout << "Data Successfully Updated" << endl;
            cout << "--------------------------------------------------------" << endl
                << endl;
        }
        
        void insert_data(){
            
            cout << "Data Kereta yang ingin ditambah :" << endl;
            cout << endl << "Nama Kereta " << " = "; 
            cin >> travel_data.name;
            cout << "Asal " << " = ";
            cin >> travel_data.departure;
            cout << "Tujuan " << " = ";
            cin >> travel_data.destination;
            cout << "Lokomotif " << " = ";
            cin >> travel_data.code; 
            cout << endl;
        
            names.push_back(travel_data.name);
            departures.push_back(travel_data.departure);
            destinations.push_back(travel_data.destination);
            codes.push_back(travel_data.code);
        
            system("clear");
            
            load_data();
            cout << endl << " Insert data successfull!!" << endl << endl;
        }
        
        void save_data(){
            std::ofstream outFile;
            outFile.open(file);
            if(outFile.is_open()){
                for(int i = 0, n = names.size(); i <= n; i++){
                    outFile << names[i] << " " << departures[i] << " " << destinations[i]
                        << " " << codes[i] << endl;
                }
        
                outFile.close();
                
                cout << " Save data successfull!!" << endl << endl;

            }else{
                cout << "Unable to open the file!!" << endl << endl;
            } 
        }

        void menu();
};

void Travel::menu(){
        
    cout << "=========================================" << endl;
    cout << "      SELAMAT DATANG DI TRAVEL OKE       " << endl;
    cout << "=========================================" << endl << endl;
    cout << "1. Tampilkan Kereta" << endl;
    cout << "2. Edit Kereta" << endl;
    cout << "3. Tambah Kereta" << endl;
    cout << "4. Save" << endl;
    cout << "5. Exit" << endl << endl;
    cout << "Masukkan Pilihan [1-5] = ";
    
};

# endif

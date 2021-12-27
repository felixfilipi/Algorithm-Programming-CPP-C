#include<iostream>
#include<cstdlib>

using std::cout;
using std::cin;

int matrix[5][5], x, y, w, h, res, result, score = 0;
char next;

int main(){
    do{
        system("clear");
        cout << "Score = " << score << "\n\n";
        cout << "Guess Multiplication Random Matrix" << "\n\n";
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                matrix[i][j] = rand()%100;
                printf("[%d] [%d] %d \t", i,j, matrix[i][j]);
            }
            cout << "\n";
        }

        x = rand()%5;
        y = rand()%5;
        w = rand()%5;
        h = rand()%5;

        printf("\nWhat is the result of angka [%d][%d]"
                " times angka [%d][%d] ? = ", x, y, w, h);
        cin >> res;
        result = matrix[x][y] * matrix[w][h];
        if(res == result){
            cout << "\n" << "You Are Brilliant" << "\n\n";
            score++;
        }else{
            cout << "\n" << "You Are Wrong" << "\n\n";
        }
        cout << "Press Y for the next round = ";
        cin >> next;

    }while(next == 'Y' || next == 'y');

    cout << "\n" << "Thank you for using this application. "
        << "Your last score is " << score << "\n\n";
}

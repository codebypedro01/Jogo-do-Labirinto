#include <iostream>
using namespace std;

void ExibirLabirinto(int labirinto[7][7]){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            cout << labirinto[i][j] << " ";
        }
        
        cout << endl;
    }
}
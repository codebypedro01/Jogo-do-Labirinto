#include <iostream>
using namespace std;

void ExibirLabirinto(int labirinto[7][7]){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if (labirinto[i][j] == 0)
                cout << ". ";
            else if (labirinto[i][j] == 1)
                cout << "# ";
            else if (labirinto[i][j] == 2)
                cout << "J ";
            else if (labirinto[i][j] == 3)
                cout << "S ";
        }
        cout << endl;
    }
}

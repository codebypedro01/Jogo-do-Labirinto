#include <iostream>
#include "ExibirLabirinto.h"
#include "MoverPersonagem.h"

using namespace std;

int main(){
    int labirinto [7][7] = {
        {1,1,1,1,1,0,3},
        {1,0,0,0,0,0,1},
        {1,0,1,1,1,0,1},
        {1,0,1,1,1,0,1},
        {1,0,1,0,0,0,1},
        {1,0,0,0,1,0,1},
        {2,0,1,1,1,1,1} 
    };
    while (true){
        ExibirLabirinto(labirinto);
        char direcao;
        cout << "Digite a direcao para mover o personagem (w/a/s/d) ou 'q' para sair: ";
        cin >> direcao;
        if(direcao == 'q'){
            cout << "Saindo do jogo." << endl;
            break;
        }
        int posX, posY;
        // Encontra a posição atual do personagem
        for(int i = 0; i < 7; i++){
            for(int j = 0; j < 7; j++){
                if(labirinto[i][j] == 2){
                    posX = i;
                    posY = j;
                }
            }
        }
        MoverPersonagem(labirinto, direcao, posX, posY);
        // Verifica se o personagem alcançou a saída
        if(labirinto[0][6] == 2){
            cout << "Parabéns! Você alcançou a saída!" << endl;
            break;
        }
    }

    ExibirLabirinto(labirinto);
    return 0;
}
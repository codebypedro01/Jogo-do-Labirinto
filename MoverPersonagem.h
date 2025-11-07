#include <iostream>

using namespace std;

void MoverPersonagem(int labirinto[7][7], char direcao, int &posX, int &posY){
    int novaX = posX;
    int novaY = posY;

    if(direcao == 'w') // cima
        novaX--;
    else if(direcao == 's') // baixo
        novaX++;
    else if(direcao == 'a') // esquerda
        novaY--;
    else if(direcao == 'd') // direita
        novaY++;

    // Verifica se a nova posição é válida (dentro dos limites e não é uma parede)
    if(novaX >= 0 && novaX < 7 && novaY >= 0 && novaY < 7 && labirinto[novaX][novaY] != 1){
        // Atualiza a posição do personagem no labirinto
        labirinto[posX][posY] = 0; // Marca a posição antiga como vazia
        posX = novaX;
        posY = novaY;
        labirinto[posX][posY] = 2; // Marca a nova posição com o personagem
    } else {
        cout << "Movimento inválido!" << endl;
    }
}
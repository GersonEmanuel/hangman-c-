#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    char palavra[20], letra, secreta[20];
    int tamanho_palavra=0, i=0 , chances=6, acertos=0;
    bool acerto = false;
    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    
    while(palavra[i] != '\0'){
        i++;
        tamanho_palavra++;
    }

    for (i = 0; i<tamanho_palavra; i++){
        secreta[i] = '_';
    }
    
    cout << "Comecando o jogo...\n";
    system("cls");

    //loop principal
    while((chances>0) && (acertos < tamanho_palavra) ){
        cout << "Chances restantes: " << chances <<"\n";
        cout << "Palavra: " ;
        for(i=0; i<tamanho_palavra; i++){
            cout << secreta[i];
        }
        cout << "Digite uma letra: ";
        cin >> letra;
        acerto = false;
        for(i=0; i<tamanho_palavra; i++){
            if(palavra[i] == letra){
                secreta[i] = palavra[i];
                acertos ++;
                acerto = true;
            }

        }
        if(!acerto){
            cout << "nao contem essa letra na palavra " << "\n";
            chances --;
        }
        acerto = false;

        
    }
    if (tamanho_palavra == acertos){
        cout << "parabens voce ganhou";
        return 0;
    }
    cout << "voce perdeu, que pena";
    return 0;
}
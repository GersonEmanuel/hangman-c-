#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    char palavra[20], letra[1], secreta[20];
    int tamanho_palavra, i , chances=6, acertos;
    bool acerto = false;
    cout << "Digite a palavra secreta: ";
    cin >> palavra;
    
    while(palavra[i] != '\0'){
        i++;
        tamanho_palavra++;
    }

    for (i = 0; i<30; i++){
        secreta[i] = '_';
    }
    system("cls");

    //loop principal
    while((chances>0) && (acertos < tamanho_palavra) ){
        cout << "Chances restantes: " << chances <<"\n";
        cout << "Palavra: " ;
        for(i=0; i<tamanho_palavra; i++){
            cout << secreta[i];
        }
        cout << "Digite uma letra: ";
        cin >> letra[0];
        for(i=0; i<tamanho_palavra; i++){
            if(palavra[i] == letra[0]){
                secreta[i] = palavra[i];
                acertos ++;
            }
            else{
                cout << "Voce errou a letra";
            }
        }

    }
    if (tamanho_palavra == acertos){
        cout << "parabens voce ganhou";
        return 0;
    }

    cout << "voce perdeu, que pena";
    return 0;
}
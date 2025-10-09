// ex09_tic_tac_toe.cpp
#include <iostream>
#include <vector>
using namespace std;
void show(const vector<char>& b){
    for(int i=0;i<9;i++){ cout<<(b[i]==' '?char('1'+i):b[i])<<(i%3==2?'\n':' '); }
}
bool win(const vector<char>& b, char p){
    int W[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    for(auto &w:W) if(b[w[0]]==p && b[w[1]]==p && b[w[2]]==p) return true;
    return false;
}
int main(){
    vector<char> b(9,' ');
    int moves=0;
    char player='X';
    while(true){
        show(b);
        int pos; cout<<"Jugador "<<player<<" ingrese posicion (1-9): "; cin>>pos; pos--;
        if(pos<0||pos>8||b[pos]!=' ') { cout<<"Movimiento invalido\n"; continue; }
        b[pos]=player; moves++;
        if(win(b,player)){ show(b); cout<<"Gana "<<player<<"\n"; break; }
        if(moves==9){ show(b); cout<<"Empate\n"; break; }
        player = (player=='X'?'O':'X');
    }
}

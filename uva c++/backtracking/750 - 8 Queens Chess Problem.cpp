#include<bits/stdc++.h>
using namespace std;

int fila[8], casos, a, b, cont;

bool place(int f, int c) {
  for (int i = 0; i < c; i++)    // comprobar reinas ya colocadas
    if (fila[i] == f || (abs(fila[i] - f) == abs(i - c)))
      return false;        // comparten misma fila o diagonal
return true;
}
void backtrack(int c) {
  if (c == 8 && fila[b] == a) {         // solucion candidata (a,b) tiene una reina
    printf("%2d      %d", ++cont, fila[0] + 1);
    for (int j = 1; j < 8; j++) printf(" %d", fila[j] + 1);
    printf("\n");
    }else{
       for (int r = 0; r < 8; r++){                       // comprobar en todas las filas posibles
            if (place(r, c)) {          // si se puede colocar una reina en esta fila y columna
                fila[c] = r;
                backtrack(c + 1);      // colocar esta reina y seguir la recursion
            }
       }
   }
}

int main() {
  cin>>casos;
  cin.ignore();
  while (casos--) {
   cin>>a>>b; a--; b--;         // cambio a 0 indexion
    memset(fila, 0, sizeof fila); cont = 0;
    cout<<"SOLN       COLUMN\n";
    cout<<" #      1 2 3 4 5 6 7 8\n\n";
    backtrack(0);           //generar todas las 8! posibles soluciones
    if (casos) cout<<("\n");
} } // return 0;

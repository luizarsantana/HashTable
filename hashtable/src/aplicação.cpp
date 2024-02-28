#include <iostream>
#include "mercadoria.h"
#include "hash.h"

using namespace std;

int main() {
   Hash mercadoriasHash(10);
     int   ras[5]   = {
       1234, 88088, 4567,
       92467, 37696};
    string produtos[5] = {
      "canetaBIC", "clips", "sulfite",
      "garrafa", "quadro"}; 

    for (int i = 0; i < 5; i++) {
      Mercadoria mercadoria = Mercadoria(ras[i], produtos[i]);
      mercadoriasHash.insertItem(mercadoria);
    }
    mercadoriasHash.print();  
    cout << "------------------------------" <<  endl;

    Mercadoria mercadoria(92467,"");  
    bool     found = false;
    mercadoriasHash.retrieveItem(mercadoria, found);
    cout << mercadoria.getProduto() << " -> " << found << endl;

    cout << "------------------------------" <<  endl;

    mercadoriasHash.deleteItem(mercadoria);
    mercadoriasHash.print();
    cout << "Fim" << endl;  
}


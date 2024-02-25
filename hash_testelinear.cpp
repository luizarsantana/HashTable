#include "hash.h"
#include <iostream>
using namespace std;

Hash::Hash(int max) {
  length = 0;
  max_items = max;
  structure = new Mercadoria[max_items];
}

Hash::~Hash() { delete[] structure; }

bool Hash::isFull() const { return (length == max_items); }

int Hash::getLength() const { return length; }

void Hash::retrieveItem(Mercadoria &mercadoria, bool &found) {
  int startLoc = getHash(mercadoria);
  bool moreToSearch = true;
  int location = startLoc;
  do {
    if (structure[location].getId() == mercadoria.getId() ||
        structure[location].getId() == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);

  found = (structure[location].getId() == mercadoria.getId());
  if (found) {
    mercadoria = structure[location];
  }
}

void Hash::insertItem(Mercadoria mercadoria) {
  int location;
  location = getHash(mercadoria);
  while (structure[location].getId() > 0)
    location = (location + 1) % max_items;
  structure[location] = mercadoria;
  length++;
}

void Hash::deleteItem(Mercadoria mercadoria) {
  int startLoc = getHash(mercadoria);
  bool moreToSearch = true;
  int location = startLoc;
  do {
    if (structure[location].getId() == mercadoria.getId() ||
        structure[location].getId() == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);

  if (structure[location].getId() == mercadoria.getId()) {
    structure[location] = Mercadoria(-2, "");
    length--;
  }
}

void Hash::print() {
  for (int i = 0; i < max_items; i++) {
    cout << i << ":" << structure[i].getId() << ", "
         << structure[i].getProduto() << endl;
  }
}

int Hash::getHash(Mercadoria mercadoria) {
  return mercadoria.getId() % max_items;
}

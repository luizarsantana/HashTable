#include "mercadoria.h"

class Hash {
public:
  Hash(int max_items = 100);
  ~Hash();
  bool isFull() const;
  int getLength() const;

  void retrieveItem(Mercadoria &mercadoria, bool &found);
  void insertItem(Mercadoria mercadoria);
  void deleteItem(Mercadoria mercadoria);
  void print();

private:
  int getHash(Mercadoria mercadoria);
  int max_items;
  int length;
  Mercadoria *structure;
};
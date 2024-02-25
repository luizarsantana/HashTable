#ifndef MERCADORIA_H
#define MERCADORIA_H

#include <string>

class Mercadoria {
private:
  int id;
  std::string produto;

public:
  Mercadoria();
  Mercadoria(int id, std::string produto);
  std::string getProduto() const;
  int getId() const;
};

#endif
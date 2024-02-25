#include "mercadoria.h"

Mercadoria::Mercadoria() {
  this->id = -1;
  this->produto = "";
};
Mercadoria::Mercadoria(int id, std::string produto) {
  this->id = id;
  this->produto = produto;
}
std::string Mercadoria::getProduto() const { return produto; }
int Mercadoria::getId() const { return id; }
#include "history.hpp"


int main (int, char*[]){
  document_t document;

  document.emplace_back(1);
  document.emplace_back(2);
  document.emplace_back(3);
  document.emplace_back(4);

  draw(document,std::cout,0);
}



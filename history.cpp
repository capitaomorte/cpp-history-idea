#include "history.hpp"


int main (int, char*[]){
  document_t document;

  document.emplace_back(1);
  document.emplace_back(2);
  document.emplace_back(3);
  document.emplace_back(4);

  document_t document2(document);

  draw(document,std::cout,0);

  std::cout << "\nDrawing the second document\n\n";
  
  draw(document2,std::cout,0);
}



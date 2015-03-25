#include "history.hpp"


int main (int, char*[]){
  document_t document;

  document.emplace_back(1);
  document.emplace_back(2);
  document.emplace_back(3);
  document.emplace_back(4);

  draw(document,std::cout,0);


  document_t document2(document);
  document2.emplace_back(5);
  
  std::cout << "\nDrawing the second document\n\n";
  draw(document2,std::cout,0);

  document=document2;
  
  std::cout << "\nDrawing the original document\n\n";
  draw(document2,std::cout,0);
}



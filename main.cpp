#include <iostream>
#include <string>

int main() {
   std::string nome = "";

   while (nome.empty()) {
      std::cout << "Digite um nome: ";
      std::getline(std::cin, nome);

      if (nome.empty()) {
         std::cout << "Voce nao digitou nenhum nome. Tente novamente." << std::endl;
      } else {
         std::cout << "O nome digitado foi: " << nome << std::endl;
      }
   }
         //removendo a linha que eu tinha add. 
   return 0;
}

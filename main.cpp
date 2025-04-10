#include <iostream>
#include "media.h"
#include <iomanip>


int main(int argc, char *argv[]){
    
    if(argc != 4){
        {
            std::cout << "Uso: " << argv[0] << " <num1> <num2> <num3>" << std::endl;
            return 1; // Retorna erro se não houver exatamente 3 argumentos
        }
    }
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    int c = std::atoi(argv[3]);
    
    float resultado;

    resultado = media(a, b, c);
    

    std::cout << "A media é: ";
    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
    
    
    
    return 0;
}
#include <iostream>
#include "media.h"
#include <iomanip>


int main(){
    
    int a ;
    int b ;
    int c;
    
    std::cout<< "Insira o primeiro numero: ";
    std:: cin >> a;
    std::cout<< "Insira o segundo numero: ";
    std:: cin >> b;
    std::cout<< "Insira o terceiro numero: ";
    std:: cin >> c;

    float resultado;
    
    resultado = media(a, b, c);

    std::cout << "A media e ";
    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
    
    
    
    return 0;
}
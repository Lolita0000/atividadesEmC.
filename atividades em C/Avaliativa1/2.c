#include <stdio.h>

int main() {
    // Altura inicial deles
    double chico = 1.50;
    double ze = 1.10;   
    int anos = 0;       

    while (ze <= chico) {
        // Aumenta a altura do Chico em 0,02 
        chico += 0.02;  
        // Aumenta a altura do Zé em 0,03 
        ze += 0.03;    
        anos++;
    }
  
    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}

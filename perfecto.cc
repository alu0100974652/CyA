#include <iostream>

int main(int argc, int *argv[])  {

    int number = argv[1];

    int aux_number_rango = number;
    int number_solv;

    for(int i = 1; i < aux_number_rango; i++){
        if(i % 2 == 0) { 
            for(int j = (i / 2); j >= 1 ; j--) {
                if( i % j == 0) {
                    number_solv = number_solv + j;
                }
            }
            if(number_solv == i)
                std::cout << "Número Perfecto "<< number_solv << std::endl;
        }
    }
    return 0;
}
               
#include "Functions.h"

int main()
{
    //Chemarea functiei pentru a transforma minute in secunde
    size_t min; 
    std::cout << "Introduce-ti numarul de minute: "; 
    std::cin >> min; 
    std::cout << min << " minute in secunde va fi " << min_to_sec(min) << " secunde." << std::endl;
    std::cout << std::endl;

    //Chemarea functiei pentru a calcula restul impartirii a doua numere
    int deimpartit, impartitor; 
    std::cout << "Introduce-ti numarul deimpartit: "; 
    std::cin >> deimpartit; 
    std::cout << "Introduce-ti numarul impartitor: "; 
    std::cin >> impartitor; 
    std::cout << "Restul impartirii " << deimpartit << " la " << impartitor << " este " <<
                 rest(deimpartit, impartitor) << std::endl;

    return 0;
}



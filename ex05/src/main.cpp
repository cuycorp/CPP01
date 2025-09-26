#include "Harl.hpp"
#include <iostream>


int main ()
{
    Harl instanceHarl;
    std::cout << "DEBUG: ---------------------------------- " << std::endl;
    instanceHarl.complain("DEBUG");
    std::cout << std::endl;
    std::cout << "INFO: ----------------------------------- "<< std::endl;
    instanceHarl.complain("INFO");
        std::cout << std::endl;
    std::cout << "WARNING: ---------------------------------"<< std::endl;
    instanceHarl.complain("WARNING");
        std::cout << std::endl;
    std::cout << "ERROR: -----------------------------------"<< std::endl;
    instanceHarl.complain("ERROR");
        std::cout << std::endl;
    std::cout << "INVALID: ---------------------------------"<< std::endl;
    instanceHarl.complain("bla bla");
        std::cout << std::endl;
}
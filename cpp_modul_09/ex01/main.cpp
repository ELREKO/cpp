#include "include/RPN.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << getColorCode(RED) << "Error: Wrong Input from Argument" << getColorCode(RESET) << std::endl;
        return 1;
    }
    
    RPN rpn;
    return(rpn.Calculate(argv[1]));
}
#include <iostream>
using std::cout;
using std::endl;

#include "indovinello.h"
#include "anfora.h"

int main()
{
    Anfora anfora_cinque_lt{5};
    Anfora anfora_tre_lt{3};
    Indovinello indovinello_anfora{anfora_cinque_lt, anfora_tre_lt};

    indovinello_anfora.risolvi();
    
    return 0;
}
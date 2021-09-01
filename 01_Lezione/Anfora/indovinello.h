#ifndef _INDOVINELLO_H_
#define _INDOVINELLO_H_

#include "anfora.h"

class Indovinello
{
    private:
        Anfora anfora_cinque_lt;
        Anfora anfora_tre_lt;
    public:
        void risolvi();
        Indovinello(Anfora, Anfora);
};

#endif
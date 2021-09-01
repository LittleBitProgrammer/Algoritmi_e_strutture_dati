#ifndef _ANFORA_H_
#define _ANFORA_H_

#include "contenitore.h"

class Anfora : public Contenitore
{
    private:
        int capacita; /* Capacità dell'anfora */
    public:
        int getCapacita(); /* Ritorna la capacità dell'anfora */
        bool isVuota(); /* Verifica se l'anfora è vuota */
        bool isPiena(); /* Verifica se l'anfora è piena */
        void riempi(); /* Riempe tutta l'anfora */
        void svuota(); /* Svuota tutta l'anfora */
        void spostaContenuto(Anfora&); /* Sposta il contenuto dell'anfora attuale in un altra */

        Anfora(); /* Costruttore di default */
        Anfora(int); /* Costruttore che accetta la capacità dell'anfora */
};

#endif
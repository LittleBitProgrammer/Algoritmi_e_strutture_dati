#ifndef _CONTENITORE_H_
#define _CONTENITORE_H_

class Contenitore
{
    private:
        int qt; /* Quantità attuale nell'anfora */

    public:
        Contenitore(); /* Costruttore default */
        Contenitore(int); /* Costruttore che accetta una quantità iniziale */
        void versa(int);/* Versa la quantità passata in input */
        void togli(int);; /* Rimuove la quantità passata in input */
        int getQt(); /* Ritorna la quantità presente nel contenitore */
};

#endif
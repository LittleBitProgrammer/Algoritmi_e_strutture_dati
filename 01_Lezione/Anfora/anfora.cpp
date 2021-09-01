#include <iostream>
using std::cout;

#include "anfora.h"

Anfora::Anfora(int capacita):capacita{capacita}{}
Anfora::Anfora():Anfora{5}{};

int Anfora::getCapacita()
{
    return this->capacita;
}

bool Anfora::isPiena()
{
    return this->capacita == this->getQt();
}

bool Anfora::isVuota()
{
    return this->getQt() == 0;
}

void Anfora::riempi()
{
    this->versa(this->capacita - this->getQt());
}

void Anfora::svuota()
{
    this->togli(this->getQt());
}

void Anfora::spostaContenuto(Anfora &anfora)
{
    if(!this->isVuota() && !anfora.isPiena())
    {
        int quantita_da_aggiungere =this->getQt() + anfora.getQt() > anfora.capacita?
         anfora.getCapacita() - anfora.getQt() : this->getQt();
        this->togli(quantita_da_aggiungere);
        anfora.versa(quantita_da_aggiungere);
    }
    else
    {
        cout << "Impossibile versare, controllare il contenuto delle tue anfore";
    }
}
#include "contenitore.h"

Contenitore::Contenitore(int qt):qt{qt}{}

Contenitore::Contenitore():Contenitore{0}{}

int Contenitore::getQt()
{
    return this->qt;
}

void Contenitore::togli(int lt)
{
    this->qt -= lt;
}

void Contenitore::versa(int lt)
{
    this->qt += lt;
}
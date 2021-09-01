#include <iostream>
using std::cout;
using std::endl;

#include "indovinello.h"
#include "anfora.h"

Indovinello::Indovinello(Anfora anfora_cinque_lt, Anfora anfora_tre_lt)
: anfora_cinque_lt{anfora_cinque_lt}, anfora_tre_lt{anfora_tre_lt}{}

void Indovinello::risolvi()
{
    cout << "L'anfora da 5 litri contiene " << this->anfora_cinque_lt.getQt() << endl;
    cout << "L'anfora da 3 litri contiene " << this->anfora_tre_lt.getQt() << endl;

    /* Passo 1 - Riempire anfora da 5 litri*/
    anfora_cinque_lt.riempi();

    cout << "\n** Passo 1 **" << endl;
    cout << "Riempio la tanica da 5 litri" << endl;
    cout << "L'anfora da 5 litri contiene " << this->anfora_cinque_lt.getQt() << endl;
    cout << "L'anfora da 3 litri contiene " << this->anfora_tre_lt.getQt() << endl;

    /* Passo 2 - Versare acqua della 5 litri in quella da 3 */
    anfora_cinque_lt.spostaContenuto(anfora_tre_lt);

    cout << "\n** Passo 2 **" << endl;
    cout << "Verso l'acqua della 5 litri nella tanica da 3 litri" << endl;
    cout << "L'anfora da 5 litri contiene " << this->anfora_cinque_lt.getQt() << endl;
    cout << "L'anfora da 3 litri contiene " << this->anfora_tre_lt.getQt() << endl;

    /* Passo 3 - Svuota la tanica da 3 litri */
    anfora_tre_lt.svuota();

    cout << "\n** Passo 3 Svuoto la tanica da 3 litri**" << endl;
    cout << "L'anfora da 5 litri contiene " << this->anfora_cinque_lt.getQt() << endl;
    cout << "L'anfora da 3 litri contiene " << this->anfora_tre_lt.getQt() << endl;

    /* Passo 4 - Versare acqua della 5 litri in quella da 3 */
    anfora_cinque_lt.spostaContenuto(anfora_tre_lt);

    cout << "\n** Passo 4 **" << endl;
    cout << "Verso l'acqua della 5 litri nella tanica da 3 litri" << endl;
    cout << "L'anfora da 5 litri contiene " << this->anfora_cinque_lt.getQt() << endl;
    cout << "L'anfora da 3 litri contiene " << this->anfora_tre_lt.getQt() << endl;

    /* Passo 5 - Riempire anfora da 5 litri*/
    anfora_cinque_lt.riempi();

    cout << "\n** Passo 5 **" << endl;
    cout << "Riempio la tanica da 5 litri" << endl;
    cout << "L'anfora da 5 litri contiene " << this->anfora_cinque_lt.getQt() << endl;
    cout << "L'anfora da 3 litri contiene " << this->anfora_tre_lt.getQt() << endl;

    /* Passo 6 - Versare acqua della 5 litri in quella da 3 */
    anfora_cinque_lt.spostaContenuto(anfora_tre_lt);

    cout << "\n** Passo 6 **" << endl;
    cout << "Verso l'acqua della 5 litri nella tanica da 3 litri" << endl;
    cout << "L'anfora da 5 litri contiene " << this->anfora_cinque_lt.getQt() << endl;
    cout << "L'anfora da 3 litri contiene " << this->anfora_tre_lt.getQt() << endl;
}
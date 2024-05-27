#include "include/demi.h"

int main()
{
    Demi *engine = new Demi(1024,720,"Hello DemiEngine");
    engine->Init();
    delete engine;
}
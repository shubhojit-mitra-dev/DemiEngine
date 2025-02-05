#include "include/demi.h"

int main()
{
    printf("Hello!");
    Demi *engine = new Demi(1024,720,"Hello DemiEngine");
    engine->Init();
    delete engine;
}

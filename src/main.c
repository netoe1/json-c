#include "../include/attribute.h"
#include "../include/jsonfile.h"
#include <stdlib.h>
int main(void)
{
    JSON_ATTR attribute1 = {"carro", "focus", NULL};
    JSON_ATTR attribute = {"carro", "focus", &attribute1};
    JSON_showAttribute(&attribute);

    return 0;
}
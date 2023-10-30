#include "../include/attribute.h"
#include <stdlib.h>
#include <stdio.h>

void JSON_showAttribute(JSON_ATTR *attr)
{
    if (attr != NULL)
    {

        if (attr->label != NULL)
        {
            if (attr->attr_inside != NULL)
            {
                JSON_showAttribute(attr->attr_inside);
            }
            printf("{\n%s:%s\n}\n", attr->label, attr->value);
            return;
        }
    }
}

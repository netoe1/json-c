#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

struct attr
{
    char *label;
    char *value;
    struct attr *attr_inside;
};
typedef struct attr JSON_ATTR;

void JSON_showAttribute(JSON_ATTR *attr);

#endif
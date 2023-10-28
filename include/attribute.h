#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

struct attr
{
    char *label;
    char *value;
    struct attr *attr_inside;
};
typedef attr JSON_ATTR;

#endif
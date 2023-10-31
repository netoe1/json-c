#ifndef JSON_FILE_H
#define JSON_FILE_H
#include "./attribute.h"
enum EXT
{
    JSON_EXT
};
struct JSON_FILE
{
    char *file;
    JSON_ATTR *atributes[];
};


void readJsonFile(JSON_FILE *json);

#endif
#include <iostream>
#include <string> // for string class
#include "site.h"
using namespace std;

Site::Site()
{
}

Site::~Site()
{
}

void Site::setId(int id)
{
    this->id = id;
}

int Site::getId()
{
    return this->id;
}

void Site::setName(string name)
{
    this->name = name;
}

string Site::getName()
{
    return this->name;
}

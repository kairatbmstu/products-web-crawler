#ifndef SITE_H
#define SITE_H

#include <iostream>
#include <string> 
using namespace std;

class Site
{
private:
    int id;
    string name;
    string url;

public:
    Site();
    ~Site();
    void setId(int id);
    int getId();
    void setName(string id);
    string getName();
};

#endif
#include <iostream>
#include <string> // for string class
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

#include <iostream>
#include <string> // for string class
using namespace std;

class WebPage
{
private:
    /* data */
    int id;
    string name;
    string url;

public:
    WebPage(/* args */);
    ~WebPage();
    int getId();
};

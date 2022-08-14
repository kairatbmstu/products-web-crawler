#include <iostream>
#include <string> // for string class
using namespace std;
#include "webpage.h"


namespace WebCrawler
{
    namespace Model
    {
        WebPage::WebPage(/* args */)
        {
        }

        WebPage::~WebPage()
        {
        }

        int WebPage::getId(){
            return id;
        }
    }

}
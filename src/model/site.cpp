#include <iostream>
#include <string> // for string class
#include "site.h"
using namespace std;

namespace WebCrawler
{
    namespace Model
    {
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
    }
}
#include <iostream>
#include <string> // for string class
using namespace std;

namespace WebCrawler
{
    namespace Model
    {

        class Site
        {
        private:
            int id;
            int name;
            int url;
        public:
            Site();
            ~Site();
            void setId(int id);
            int getId();
        };

       
    }
}
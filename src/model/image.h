#include <iostream>
#include <string> // for string class
using namespace std;

namespace WebCrawler
{
    namespace Model
    {
        class Image
        {
        private:
            int id;
            string url;
            string html;
            string textBody;
            string createdTime;
            string lastUpdateTime;
            WebCrawler::Model::Link link;

        public:
            Image(/* args */);
            ~Image();
        };

        Image::Image(/* args */)
        {
        }

        Image::~Image()
        {
        }
    }
}
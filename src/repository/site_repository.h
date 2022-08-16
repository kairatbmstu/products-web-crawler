#include <iostream>
#include <string> 
#include "../model/site.h"
#include <vector>

using namespace std;

namespace WebCrawler
{
    namespace Repository
    {

        SiteRepository siteRepository;

        class SiteRepository
        {
        private:
            vector<WebCrawler::Model::Site> sites;

        public:
            SiteRepository();
            ~SiteRepository();

            void addSite(WebCrawler::Model::Site site);
            vector<WebCrawler::Model::Site> getSites();
        };
    }
}
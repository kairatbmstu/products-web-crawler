#include <iostream>
#include <string> 
#include "../model/site.h"
#include "site_repository.h"

using namespace std;

namespace WebCrawler
{
    namespace Repository
    {
        SiteRepository::SiteRepository()
        {
            WebCrawler::Model::Site site1;
            sites.push_back(site1);
        }

        SiteRepository::~SiteRepository()
        {
        }

    }
}
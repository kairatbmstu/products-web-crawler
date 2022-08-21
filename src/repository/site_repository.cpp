#include <iostream>
#include <string>
#include "../model/site.h"
#include "site_repository.h"

using namespace std;

SiteRepository::SiteRepository()
{
    Site site1;
    sites.push_back(site1);
}

SiteRepository::~SiteRepository()
{
}

void SiteRepository::addSite(Site site)
{
    return this->sites.push_back(site);
}

vector<Site> SiteRepository::getSites()
{
    return this->sites;
}
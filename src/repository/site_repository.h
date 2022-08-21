#ifndef SITE_REPOSITORY_H
#define SITE_REPOSITORY_H


#include <iostream>
#include <string>
#include "../model/site.h"
#include <vector>

using namespace std;

class SiteRepository
{
private:
    vector<Site> sites;

public:
    SiteRepository();
    ~SiteRepository();

    void addSite(Site site);
    vector<Site> getSites();
};


#endif
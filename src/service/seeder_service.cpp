#include <iostream>
#include <string> // for string class
#include "../repository/site_repository.h"
#include "service.h"
#include <chrono>
#include <thread>
using namespace std;

SeederService::SeederService()
{
}

SeederService::~SeederService()
{
}

void SeederService::seed()
{
}

void RunSeeder()
{
    while (true)
    {
        cout << "Run seeder" << endl;
        SiteRepository repo;
        vector<Site> sites = repo.getSites();
        for (size_t i = 0; i < sites.size(); i++)
        {
            std::cout << sites.at(i).getName() << endl;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    }
}
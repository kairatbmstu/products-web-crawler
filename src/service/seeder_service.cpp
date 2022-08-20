#include <iostream>
#include <string> // for string class
#include "../repository/site_repository.h"
#include "service.h"

using namespace std;

namespace WebCrawler
{
    namespace Service {
        SeederService::SeederService()
        {
        }
        
        SeederService::~SeederService()
        {
        }

        void SeederService::seed(){
            WebCrawler::Repository::siteRepository.getSites();   
        }

        void RunSeeder() {
             vector<WebCrawler::Model::Site> sites = WebCrawler::Repository::siteRepository.getSites();   
            for (size_t i = 0; i < sites.size(); i++)
            {
                std::cout << sites.at(i).getName() << endl;
            }
        }
    }
}
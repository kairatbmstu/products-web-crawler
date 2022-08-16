#include <iostream>
#include <string> // for string class
#include "../repository/site_repository.h"

using namespace std;

namespace WebCrawler
{
    namespace Service {
        
        SeederService seederService;

        class SeederService 
        {
        private:
        public:
            SeederService();
            ~SeederService();
            void seed();
        };
        
        SeederService::SeederService()
        {
        }
        
        SeederService::~SeederService()
        {
        }

        void SeederService::seed(){
            WebCrawler::Repository::siteRepository.getSites();   
        }
    }
}
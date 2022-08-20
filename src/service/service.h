#include <iostream>
#include <string> // for string class
#include "../repository/site_repository.h"

using namespace std;

        class SeederService 
        {
        private:
        public:
            SeederService();
            ~SeederService();
            void seed();
        };
        
        void RunSeeder();
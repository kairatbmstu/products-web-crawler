#include <iostream>
#include "httplib.h"
#include <thread>
#include "service/service.h"

using WebCrawler::Service::RunSeeder;

void runner(){
    RunSeeder();
}

int main(int argc, char **argv)
{
    // HTTP
    httplib::Server svr;

    std::thread t(runner);

    svr.Get("/hi", [](const httplib::Request &, httplib::Response &res)
            { res.set_content("Hello World!", "text/plain"); });

    svr.listen("0.0.0.0", 8080);
    return 1;
}
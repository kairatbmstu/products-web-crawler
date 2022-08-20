#include <iostream>
#include "httplib.h"
#include <thread>
#include "service/service.h"

int main(int argc, char **argv)
{
    // HTTP
    httplib::Server svr;

    std::thread t(WebCrawler::Service::RunSeeder);

    svr.Get("/hi", [](const httplib::Request &, httplib::Response &res)
            { res.set_content("Hello World!", "text/plain"); });

    svr.listen("0.0.0.0", 8080);
    return 1;
}
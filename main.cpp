//add this to support https request
#define CPPHTTPLIB_OPENSSL_SUPPORT

//link http lib
#include "cpp-httplib/httplib.h"

#include <iostream>
using namespace std;

int main()
{
    // defined http client
    httplib::Client cli("https://dog-api.kinduff.com");

    //do request and block utill has response
    auto res = cli.Get("/api/facts?number=1");
    //print status code
    cout << res->status<<endl;
    //print request body
    cout << res->body<<endl;
}
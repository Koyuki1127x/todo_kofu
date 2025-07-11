#include <boost/version.hpp>
#include <iostream>
#include <crow/app.h>

int main() {
    std::cout << "Boost version: " << BOOST_LIB_VERSION << std::endl;
    return 0;
}
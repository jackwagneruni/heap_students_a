#include "address.h"

Address:: Address() : street(""), city(""), state(""), zipCode("") {}

void Address::init(const std::string& str, const std::string& c, const std::string& st, const std::string& z) {
    street = str;
    city = c;
    state = st;
    zipCode = z;
}

void Address::printAddress() const {
    std::cout << street << "\n" << city << " " << state << ", " << zipCode << std::endl;
}
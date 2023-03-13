#include <iostream>
#include <string>
#include <gd.h>
int main()
{
    std::cout <<"enter image path";

    std::string imagePath{};

    std::cin >> imagePath;

    auto  image = gdImageCreateFromFile(imagePath.c_str());

    if(!image)
    {
        std::cout <<"error while opening the image";
        return 0;
    }



    return 0;
}
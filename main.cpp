#include "brightnes_controller.h"

#include <gd.h>

#include <iostream>
#include <string>
#include <memory>

int main()
{
    std::cout <<"enter image path\n";

    std::string imagePath{};

    std::cin >> imagePath;

    auto image = gdImageCreateFromFile(imagePath.c_str());

    std::cout<< gdSupportsFileType(imagePath.c_str(), false)<<std::endl;


    if(!image)
    {
        std::cout <<"error while opening the image\n";
        return 0;
    }

    auto controller = std::make_shared<BrightnessController>(image);
    controller->ChangeBrightness(40);
    image = controller->GetImage();
    gdImageFile(image, "test.jpg");





    return 0;
}
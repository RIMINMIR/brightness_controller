#include "brightnes_controller.h"
#include "image_file_manager.h"

#include <gd.h>

#include <iostream>
#include <string>
#include <memory>
#include <cstdint>
int main()
{
    std::cout <<"enter image path\n";

    std::string imagePath{};

    std::cin >> imagePath;
    ImageFileManager fileManager = {};
    std::shared_ptr<ImageWrapper> wrapper;
    try
    {
        wrapper = fileManager.LoadImage(imagePath);
    }
    catch(std::logic_error err)
    {
        std::cout << err.what();
        return 0;
    }

    BrightnessController controller = {wrapper};

    std::cout <<"enter the brightness\n";

    int32_t brightness;

    std::cin >> brightness;

    controller.ChangeBrightness(40);

    std::cout <<"enter the new file name\n";

    std::string newFilePath;

    std::cin >> newFilePath;

    try
    {
        fileManager.SaveImage(newFilePath, wrapper);
    }
    catch(std::logic_error err)
    {
        std::cout << err.what();
        return 0;
    }

    return 0;
}
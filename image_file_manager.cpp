#include "image_file_manager.h"

#include <stdexcept>

std::shared_ptr<ImageWrapper> ImageFileManager::LoadImage (std::string path)
{
    auto image = gdImageCreateFromFile(path.c_str());

    if(!image)
    {
        throw std::logic_error("error while opening the image\n");
    }

    return std::make_shared<ImageWrapper>(image);
}

void ImageFileManager::SaveImage(std::string path, std::shared_ptr<ImageWrapper> image)
{
    if(gdImageFile(image->Get(), path.c_str()))
    {
        throw std::logic_error("error while saving the image\n");
    }
}
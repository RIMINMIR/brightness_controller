#include "image_file_manager.h"

#include <cstdio>
#include <stdexcept>

std::shared_ptr<ImageWrapper> ImageFileManager::LoadImage (std::string path)
{
    FILE *in = fopen(path.c_str(),"rb");
    if(!in)
    {
        throw std::logic_error("error while opening the image\n");
    }
    auto image = gdImageCreateFromPng(in);
    
    if(!image)
    {
        fclose(in);
        throw std::logic_error("error while loading the image\n");
    }
    fclose(in);
    return std::make_shared<ImageWrapper>(image);
}

void ImageFileManager::SaveImage(std::string path, std::shared_ptr<ImageWrapper> image)
{

    FILE *out = fopen(path.c_str(),"wb");
    
    if(!out)
    {
        throw std::logic_error("error while saving the image\n");
    }
    gdImagePng(image->Get(), out);

    fclose(out);
}
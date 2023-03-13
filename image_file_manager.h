#include "image_wrapper.h"

#include<string>
#include <memory>
class ImageFileManager
{
public:

std::shared_ptr<ImageWrapper> LoadImage (std::string path);

void SaveImage(std::string path, std::shared_ptr<ImageWrapper> image);

};


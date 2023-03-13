
#include "image_wrapper.h"

ImageWrapper::ImageWrapper(gdImagePtr image)
{
    image_ = image;
}

ImageWrapper::~ImageWrapper()
{
    gdImageDestroy(image_);
}

gdImagePtr ImageWrapper::Get()
{
    return image_;
}
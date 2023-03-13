#pragma once

#include <gd.h>

class ImageWrapper
{
public:

    ImageWrapper(gdImagePtr image);

    ~ImageWrapper();

    gdImagePtr Get();

private:

gdImagePtr image_;

};

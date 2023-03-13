#include <brightnes_controller.h>

BrightnessController::BrightnessController(gdImagePtr image)
{
    image_ = image;
}

void BrightnessController::ChangeBrightness(int32_t brightness)
{
    gdImageBrightness(image_, brightness);
}


gdImagePtr BrightnessController::GetImage()
{
    return image_;
}
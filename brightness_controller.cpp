#include "brightnes_controller.h"

BrightnessController::BrightnessController(std::shared_ptr<ImageWrapper> image)
{
    image_ = image;
}

void BrightnessController::ChangeBrightness(int32_t brightness)
{
    gdImageBrightness(image_->Get(), brightness);
}

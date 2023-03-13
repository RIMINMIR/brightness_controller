
#pragma once

#include "image_wrapper.h"

#include<stdint.h>
#include <memory>

// \brief класс отвечающий за поднятие яркости
class BrightnessController
{
public:
    // \param image указатель на изображение
    BrightnessController(std::shared_ptr<ImageWrapper> image);
    // \brief увеличить яркость
    // \param brightness значение на которое будет увеличина яркость
    void ChangeBrightness(int32_t brightness);
    
private:
    std::shared_ptr<ImageWrapper> image_;
};
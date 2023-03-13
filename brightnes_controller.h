
#pragma once

#include<stdint.h>

// \brief класс отвечающий за поднятие яркости
class BrightnessController
{
    // \brief увеличить яркость
    // \param brightness значение на которое будет увеличина яркость
    void IncreaseBrightness(uint32_t brightness);
};
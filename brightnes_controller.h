
#pragma once

#include <gd.h>

#include<stdint.h>

// \brief класс отвечающий за поднятие яркости
class BrightnessController
{
public:
    // \param image указатель на изображение
    BrightnessController(gdImagePtr image);
    // \brief увеличить яркость
    // \param brightness значение на которое будет увеличина яркость
    void ChangeBrightness(int32_t brightness);

    // \param получение готового изображения
    gdImagePtr GetImage();
    
private:
    gdImagePtr image_;
};
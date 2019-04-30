/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.10.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
  


#ifndef EASINGEQUATIONSENUM_HPP
#define EASINGEQUATIONSENUM_HPP

#include <touchgfx/EasingEquations.hpp>

using namespace touchgfx;

struct EasingEquationSelection
{
    EasingEquation in;
    EasingEquation out;
    EasingEquation inOut;

    TypedTextId EasingEquationName;
    TypedTextId EasingEquationShortName;
};

typedef enum
{
    EASING_EQUATION_IN,
    EASING_EQUATION_OUT,
    EASING_EQUATION_IN_OUT
} EasingEquationsInOrOut;

#endif /* EASINGEQUATIONSENUM_HPP */

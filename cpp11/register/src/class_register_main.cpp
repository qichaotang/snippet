/*!
 * Copyright (c) 2018 by Contributors
 * \file class_register_main.cpp
 * \brief test class register.
 * \author Qichao Tang(qichaotang97@163.com)
 */

#include <iostream>
#include "mapper.h"

int main(int argc, char** argv) {
    auto mapper = CREATE_MAPPER("HelloMapper");
    std::cout << "mapper_name--->" << mapper->GetMapperName() << std::endl;
    auto mapper_hi = CREATE_MAPPER("HiMapper");
    std::cout << "mapper_name--->" << mapper_hi->GetMapperName() << std::endl;
    return 0;
}
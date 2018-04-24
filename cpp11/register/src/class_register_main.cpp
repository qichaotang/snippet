// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>

#include <iostream>

#include "base_mapper.h"

namespace class_register {

BaseMapper* create_mapper(const std::string& mapper_name) {
    BaseMapper* p_base_mapper{nullptr};
    p_base_mapper = CREATE_MAPPER(mapper_name.c_str());
    if (p_base_mapper == nullptr) {
        std::cout << "cannot create mapper--->" << mapper_name << std::endl;
    }
    return p_base_mapper;
}

}  // namespace class_register

int main(int argc, char** argv) {
    // test HelloMapper
    {
        std::string mapper_name = "HelloMapper";
        auto p_base_mapper = class_register::create_mapper(mapper_name);
        std::cout << "mapper_name--->" << p_base_mapper->GetMapperName() << std::endl;
    }
    // test HiMapper
    {
        std::string mapper_name = "HiMapper";
        auto p_base_mapper = class_register::create_mapper(mapper_name);
        std::cout << "mapper_name--->" << p_base_mapper->GetMapperName() << std::endl;
    }

    return 0;
}
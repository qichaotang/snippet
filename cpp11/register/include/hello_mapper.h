// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>

#ifndef HELLO_MAPPER_H_
#define HELLO_MAPPER_H_

#include "base_mapper.h"

namespace class_register {

class HelloMapper : public BaseMapper {
    virtual std::string GetMapperName() override {
        return "HelloMapper";
    }
};

}  // namespace class_register

#endif  // HELLO_MAPPER_H_
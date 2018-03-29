/*!
 * Copyright (c) 2018 by Contributors
 * \file class_register_main.cpp
 * \brief test class register.
 * \author Qichao Tang(qichaotang97@163.com)
 */

#ifndef HELLO_MAPPER_H_
#define HELLO_MAPPER_H_

#include "mapper.h"

class HelloMapper : public Mapper {
    virtual std::string GetMapperName() const {
        return "HelloMapper";
    }
};



#endif  // HELLO_MAPPER_H_
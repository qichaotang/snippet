/*!
 * Copyright (c) 2018 by Contributors
 * \file class_register_main.cpp
 * \brief test class register.
 * \author Qichao Tang(qichaotang97@163.com)
 */

#ifndef HI_MAPPER_H_
#define HI_MAPPER_H_

#include "mapper.h"

class HiMapper : public Mapper {
    virtual std::string GetMapperName() const {
        return "HiMapper";
    }
};


#endif  // HI_MAPPER_H_
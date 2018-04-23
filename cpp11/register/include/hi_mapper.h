// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>

#ifndef HI_MAPPER_H_
#define HI_MAPPER_H_

#include "base_mapper.h"

namespace class_register_rf {

class HiMapper : public BaseMapper {
    virtual std::string GetMapperName() override {
        return "HiMapper";
    }
};

}  //  namespace class_register_rf

#endif  // HI_MAPPER_H_
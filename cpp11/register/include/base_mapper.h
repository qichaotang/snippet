// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>

#ifndef BASE_MAPPER_H_
#define BASE_MAPPER_H_

#include "class_register.h"

namespace class_register {

class BaseMapper {
public:
    BaseMapper() {}
    virtual ~BaseMapper() {}
    virtual std::string GetMapperName() = 0;
};

CLASS_REGISTER_DEFINE_REGISTRY(base_mapper_register, BaseMapper);

#define REGISTER_MAPPER(mapper_name)                            \
  CLASS_REGISTER_OBJECT_CREATOR(                                \
      base_mapper_register, BaseMapper, #mapper_name, mapper_name)

#define CREATE_MAPPER(mapper_name_as_string)                            \
  CLASS_REGISTER_CREATE_OBJECT(base_mapper_register, mapper_name_as_string)

}  // namespace class_register

#endif  // BASE_MAPPER_H_
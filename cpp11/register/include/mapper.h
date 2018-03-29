/*!
 * Copyright (c) 2018 by Contributors
 * \file class_register_main.cpp
 * \brief test class register.
 * \author Qichao Tang(qichaotang97@163.com)
 */

#ifndef MAPPER_H_
#define MAPPER_H_

#include "class_register.h"

class Mapper {
public:
    Mapper() {}
    virtual ~Mapper() {}
    virtual std::string GetMapperName() const = 0;
};

CLASS_REGISTER_DEFINE_REGISTRY(mapper_register, Mapper);

#define REGISTER_MAPPER(mapper_name)                            \
  CLASS_REGISTER_OBJECT_CREATOR(                                \
      mapper_register, Mapper, #mapper_name, mapper_name)

#define CREATE_MAPPER(mapper_name_as_string)                            \
  CLASS_REGISTER_CREATE_OBJECT(mapper_register, mapper_name_as_string)


#endif  // MAPPER_H_
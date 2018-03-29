/*!
 * Copyright (c) 2018 by Contributors
 * \file class_register_main.cpp
 * \brief test class register.
 * \author Qichao Tang(qichaotang97@163.com)
 */
#include "mapper.h"
#include "hello_mapper.h"
#include "hi_mapper.h"

CLASS_REGISTER_IMPLEMENT_REGISTRY(mapper_register, Mapper);
REGISTER_MAPPER(HelloMapper);
REGISTER_MAPPER(HiMapper);
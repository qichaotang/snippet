// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>

#include "base_mapper.h"
#include "hello_mapper.h"
#include "hi_mapper.h"

namespace class_register_rf {

CLASS_REGISTER_IMPLEMENT_REGISTRY(base_mapper_register, BaseMapper);
REGISTER_MAPPER(HelloMapper);
REGISTER_MAPPER(HiMapper);

}  // namespace class_register_rf
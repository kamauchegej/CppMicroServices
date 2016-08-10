/*=============================================================================

  Library: CppMicroServices

  Copyright (c) German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/

#ifndef CPPMICROSERVICES_SERVLETCONFIG_P_H
#define CPPMICROSERVICES_SERVLETCONFIG_P_H

#include "cppmicroservices/SharedData.h"

#include <memory>
#include <string>

namespace cppmicroservices {

class ServletContext;

struct ServletConfigPrivate : public SharedData
{
  ServletConfigPrivate()
  {}

  std::string m_Name;
  std::shared_ptr<ServletContext> m_Context;
};

}

#endif // CPPMICROSERVICES_SERVLETCONFIG_P_H
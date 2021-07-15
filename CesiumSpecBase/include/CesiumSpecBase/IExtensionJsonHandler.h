#pragma once

#include "CesiumSpecBase/Library.h"
#include "CesiumJsonReader/IJsonHandler.h"
#include <any>
#include <string_view>

namespace CesiumSpec {

struct ExtensibleObject;

class IExtensionJsonHandler : public CesiumJsonReader::IJsonHandler {
public:
  virtual void reset(
      IJsonHandler* pParentHandler,
      ExtensibleObject& o,
      const std::string_view& extensionName) = 0;
};

} // namespace CesiumSpec

#pragma once

#include "CesiumJsonReader/StringJsonHandler.h"
#include "CesiumSpecBase/ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
struct NamedObject;

class NamedObjectJsonHandler : public CesiumSpec::ExtensibleObjectJsonHandler {
protected:
  NamedObjectJsonHandler(const CesiumSpec::ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentReader, NamedObject* pObject);
  IJsonHandler* readObjectKeyNamedObject(
      const std::string& objectType,
      const std::string_view& str,
      NamedObject& o);

private:
  CesiumJsonReader::StringJsonHandler _name;
};
} // namespace CesiumGltf

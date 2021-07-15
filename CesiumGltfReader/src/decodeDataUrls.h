#pragma once

#include "CesiumGltf/GltfReader.h"

namespace CesiumGltf {

struct ModelReaderResult;

void decodeDataUrls(
    const GltfReader& reader,
    ModelReaderResult& readModel,
    bool clearDecodedDataUrls);
} // namespace CesiumGltf

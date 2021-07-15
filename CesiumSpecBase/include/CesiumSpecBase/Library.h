#pragma once

/**
 * @brief Classes for working with specs like [glTF](https://www.khronos.org/gltf/) and [3D Tiles](https://github.com/CesiumGS/3d-tiles).
 */
namespace CesiumSpec {}

#if defined(_WIN32) && defined(CESIUM_SHARED)
#ifdef CESIUMSPEC_BUILDING
#define CESIUMSPEC_API __declspec(dllexport)
#else
#define CESIUMSPEC_API __declspec(dllimport)
#endif
#else
#define CESIUMSPEC_API
#endif

add_library(CesiumSpecBase "")
configure_cesium_library(CesiumSpecBase)

cesium_glob_files(CESIUM_SPEC_BASE_SOURCES src/*.cpp)
cesium_glob_files(CESIUM_SPEC_BASE_HEADERS src/*.h src/*.hpp)
cesium_glob_files(CESIUM_SPEC_BASE_PUBLIC_HEADERS include/CesiumSpecBase/*.h)
cesium_glob_files(CESIUM_SPEC_BASE_TEST_SOURCES test/*.cpp)
cesium_glob_files(CESIUM_SPEC_BASE_TEST_HEADERS test/*.h)

set_target_properties(CesiumSpecBase
    PROPERTIES
        TEST_SOURCES "${CESIUM_SPEC_BASE_TEST_SOURCES}"
        TEST_HEADERS "${CESIUM_SPEC_BASE_TEST_HEADERS}"
)

set_target_properties(CesiumSpecBase
    PROPERTIES
    PUBLIC_HEADER "${CESIUM_SPEC_BASE_PUBLIC_HEADERS}"
)

target_sources(
    CesiumSpecBase
    PRIVATE
        ${CESIUM_SPEC_BASE_SOURCES}
        ${CESIUM_SPEC_BASE_HEADERS}
    PUBLIC
        ${CESIUM_SPEC_BASE_PUBLIC_HEADERS}
)

target_include_directories(
    CesiumSpecBase
    SYSTEM PUBLIC
        ${CESIUM_NATIVE_RAPIDJSON_INCLUDE_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/include/
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/src
)

target_link_libraries(CesiumSpecBase
    PUBLIC
        CesiumJsonReader
        CesiumUtility
        GSL
)

install(TARGETS CesiumSpecBase
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/CesiumSpecBase
)


esrocos_asn1_types_package(asn_local_types
OUTDIR asn1
IMPORT types/base types/sensor_samples)


rock_library(envire_asn1
    SOURCES RegisterItems.cpp
    HEADERS RegisterItems.hpp
    DEPS_PKGCONFIG envire_core)

add_dependencies(envire_asn1 asn_local_types_generate_c)
target_include_directories(envire_asn1 PUBLIC ${CMAKE_BINARY_DIR})


install_plugin_info(envire_asn1)
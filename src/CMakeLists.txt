

rock_library(envire_asn1
    SOURCES RegisterDepthMap.cpp
            RegisterLaserScan.cpp
            RegisterPointcloud.cpp
            RegisterRigidBodyState.cpp
            RegisterVector3d.cpp
    HEADERS RegisterItems.hpp
    DEPS_PKGCONFIG envire_core asn1)

install_plugin_info(envire_asn1)
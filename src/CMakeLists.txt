rock_library(envire_asn1
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(envire_asn1_bin Main.cpp
    DEPS envire_asn1)


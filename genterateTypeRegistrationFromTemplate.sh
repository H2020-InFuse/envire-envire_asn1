#!/bin/sh

TYPENAME=$1

cat src/Register.cpp.template | sed -e "s/TYPENAME/${TYPENAME}/g" > src/Register${TYPENAME}.cpp
git add src/Register${TYPENAME}.cpp


echo "to finish, please add Register${TYPENAME}.cpp to the SOURCED in the srs/CMakeLists.txt"

#!/bin/sh

TYPENAME=$1

cat src/Register.cpp.template | sed -e "s/TYPENAME/${TYPENAME}/g" > src/Register${TYPENAME}.cpp
git add src/Register${TYPENAME}.cpp


echo "\nto finish, please add Register${TYPENAME}.cpp to the SOURCES in the srs/CMakeLists.txt and envire_ans1.xml\n"

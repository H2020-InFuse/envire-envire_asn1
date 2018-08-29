#ifndef _ENVIRE_ASN1_REGISTER_ITEMS_HPP_
#define _ENVIRE_ASN1_REGISTER_ITEMS_HPP_

#include <envire_core/plugin/Plugin.hpp>
#include<asn1/asn1crt.h>

namespace envire_asn{

static BitStream initBitStream(byte* data,size_t size){
    BitStream asnbitstream;
    asnbitstream.buf=data;
    asnbitstream.count = size;
    asnbitstream.currentByte = 0;
    asnbitstream.currentBit = 0;
    return asnbitstream;
}

}


#endif // _DUMMYPROJECT_DUMMY_HPP_

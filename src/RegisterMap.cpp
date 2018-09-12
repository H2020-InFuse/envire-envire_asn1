#include "RegisterItems.hpp"

#include <asn1/Map.h>
#include <boost/serialization/binary_object.hpp>

BOOST_SERIALIZATION_SPLIT_FREE(asn1SccMap)
template<class Archive> inline void save(Archive & ar, const asn1SccMap & value, const unsigned int file_version){
    
    byte data[asn1SccMap_REQUIRED_BYTES_FOR_ENCODING];
    
    int pErrCode;
    BitStream asnbitstream = envire_asn::initBitStream(data,asn1SccMap_REQUIRED_BYTES_FOR_ENCODING);
    asn1SccMap_Encode(&value, &asnbitstream, &pErrCode, false);

    ar << boost::serialization::make_binary_object(data, asn1SccMap_REQUIRED_BYTES_FOR_ENCODING);
}
template<class Archive> inline void load(Archive & ar, asn1SccMap & value, const unsigned int file_version){
    
    byte data[asn1SccMap_REQUIRED_BYTES_FOR_ENCODING];
    ar >> boost::serialization::make_binary_object(data, asn1SccMap_REQUIRED_BYTES_FOR_ENCODING);

    int pErrCode;
    BitStream asnbitstream = envire_asn::initBitStream(data,asn1SccMap_REQUIRED_BYTES_FOR_ENCODING);
    asn1SccMap_Decode(&value, &asnbitstream, &pErrCode);
}
ENVIRE_REGISTER_ITEM(asn1SccMap)





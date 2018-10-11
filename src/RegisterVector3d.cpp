
#include <envire_core/plugin/Plugin.hpp>
#include <asn1/asn1crt.h>

#include <asn1/Eigen.h>
#include <boost/serialization/binary_object.hpp>

BOOST_SERIALIZATION_SPLIT_FREE(asn1SccVector3d)
template<class Archive> inline void save(Archive & ar, const asn1SccVector3d & value, const unsigned int file_version){
    
    int pErrCode;
    byte data[asn1SccVector3d_REQUIRED_BYTES_FOR_ENCODING];
    BitStream asnbitstream;
    BitStream_Init(&asnbitstream,data,asn1SccVector3d_REQUIRED_BYTES_FOR_ENCODING);

    asn1SccVector3d_Encode(&value, &asnbitstream, &pErrCode, false);
    ar << boost::serialization::make_binary_object(data, asn1SccVector3d_REQUIRED_BYTES_FOR_ENCODING);
}
template<class Archive> inline void load(Archive & ar, asn1SccVector3d & value, const unsigned int file_version){
    
    int pErrCode;
    byte data[asn1SccVector3d_REQUIRED_BYTES_FOR_ENCODING];
    BitStream asnbitstream;
    BitStream_Init(&asnbitstream,data,asn1SccVector3d_REQUIRED_BYTES_FOR_ENCODING);

    ar >> boost::serialization::make_binary_object(data, asn1SccVector3d_REQUIRED_BYTES_FOR_ENCODING);
    asn1SccVector3d_Decode(&value, &asnbitstream, &pErrCode);
}
ENVIRE_REGISTER_ITEM(asn1SccVector3d)





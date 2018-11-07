
#include <envire_core/plugin/Plugin.hpp>
#include <asn1/asn1crt.h>

#include <asn1/TransformWithCovariance.h>
#include <boost/serialization/binary_object.hpp>

BOOST_SERIALIZATION_SPLIT_FREE(asn1SccTransformWithCovariance)
template<class Archive> inline void save(Archive & ar, const asn1SccTransformWithCovariance & value, const unsigned int file_version){
    
    int pErrCode;
    std::vector<byte> buffer;
    buffer.resize(asn1SccTransformWithCovariance_REQUIRED_BYTES_FOR_ENCODING);
    
    BitStream asnbitstream;
    BitStream_Init(&asnbitstream,buffer.data(),asn1SccTransformWithCovariance_REQUIRED_BYTES_FOR_ENCODING);

    asn1SccTransformWithCovariance_Encode(&value, &asnbitstream, &pErrCode, false);
    ar << boost::serialization::make_binary_object(buffer.data(), asn1SccTransformWithCovariance_REQUIRED_BYTES_FOR_ENCODING);
}
template<class Archive> inline void load(Archive & ar, asn1SccTransformWithCovariance & value, const unsigned int file_version){
    
    int pErrCode;
    std::vector<byte> buffer;
    buffer.resize(asn1SccTransformWithCovariance_REQUIRED_BYTES_FOR_ENCODING);

    BitStream asnbitstream;
    BitStream_Init(&asnbitstream,buffer.data(),asn1SccTransformWithCovariance_REQUIRED_BYTES_FOR_ENCODING);

    ar >> boost::serialization::make_binary_object(buffer.data(), asn1SccTransformWithCovariance_REQUIRED_BYTES_FOR_ENCODING);
    asn1SccTransformWithCovariance_Decode(&value, &asnbitstream, &pErrCode);
}
ENVIRE_REGISTER_ITEM(asn1SccTransformWithCovariance)





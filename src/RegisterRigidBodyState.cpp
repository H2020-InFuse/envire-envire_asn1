#include "RegisterItems.hpp"

#include <boost/serialization/binary_object.hpp>


#include <asn1/RigidBodyState.h>
BOOST_SERIALIZATION_SPLIT_FREE(asn1SccRigidBodyState)
template<class Archive> inline void save(Archive & ar, const asn1SccRigidBodyState & value, const unsigned int file_version){
    
    byte data[asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING];
    
    int pErrCode;
    BitStream asnbitstream = envire_asn::initBitStream(data,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
    asn1SccRigidBodyState_Encode(&value, &asnbitstream, &pErrCode, false);

    ar << boost::serialization::make_binary_object(data, asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
}
template<class Archive> inline void load(Archive & ar, asn1SccRigidBodyState & value, const unsigned int file_version){
    
    byte data[asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING];
    ar >> boost::serialization::make_binary_object(data, asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);

    int pErrCode;
    BitStream asnbitstream = envire_asn::initBitStream(data,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
    asn1SccRigidBodyState_Decode(&value, &asnbitstream, &pErrCode);
}
ENVIRE_REGISTER_ITEM(asn1SccRigidBodyState)


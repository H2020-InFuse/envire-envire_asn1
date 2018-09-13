#include "RegisterItems.hpp"

#include <boost/serialization/binary_object.hpp>


#include <asn1/RigidBodyState.h>
BOOST_SERIALIZATION_SPLIT_FREE(asn1SccRigidBodyState)
template<class Archive> inline void save(Archive & ar, const asn1SccRigidBodyState & value, const unsigned int file_version){
    
    int pErrCode;
    byte data[asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING];
    BitStream asnbitstream;//     = envire_asn::initBitStream(data,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
    BitStream_Init(&asnbitstream,data,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);

    asn1SccRigidBodyState_Encode(&value, &asnbitstream, &pErrCode, false);

    // for (int i =0;i<3;++i){
    //     printf("%.2f ",value.pos.arr[i]);
    // }

    // asn1SccRigidBodyState teststate;
    // teststate.pos.arr[0] = 0;
    // teststate.pos.arr[1] = 0;
    // teststate.pos.arr[2] = 0;
    // byte data2[asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING];
    // BitStream asnbitstream2 ;//= envire_asn::initBitStream(data2,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
    // BitStream_Init(&asnbitstream2,data2,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);

    // memcpy(data2,data,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
    // asn1SccRigidBodyState_Decode(&teststate, &asnbitstream2, &pErrCode);



    // for (int i =0;i<3;++i){
    //     printf("%.2f ",teststate.pos.arr[i]);
    // }
    
    // printf("\n");

    ar << boost::serialization::make_binary_object(data, asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);

}
template<class Archive> inline void load(Archive & ar, asn1SccRigidBodyState & value, const unsigned int file_version){

    int pErrCode;
    byte data[asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING];
    BitStream asnbitstream;// = envire_asn::initBitStream(data,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
    BitStream_Init(&asnbitstream,data,asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);

    ar >> boost::serialization::make_binary_object(data, asn1SccRigidBodyState_REQUIRED_BYTES_FOR_ENCODING);
    asn1SccRigidBodyState_Decode(&value, &asnbitstream, &pErrCode);
}
ENVIRE_REGISTER_ITEM(asn1SccRigidBodyState)


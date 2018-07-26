#include "RegisterItems.hpp"

#include <asn1/LaserScan.h>
//ENVIRE_REGISTER_ITEM(asn1SccLaserScan)
ENVIRE_REGISTER_MULTI_ITEM_WITHOUT_SERIALIZATION(asn1SccLaserScan,10)

#include <asn1/RigidBodyState.h>
ENVIRE_REGISTER_MULTI_ITEM_WITHOUT_SERIALIZATION(asn1SccRigidBodyState,11)

#include <asn1/Pointcloud.h>
ENVIRE_REGISTER_MULTI_ITEM_WITHOUT_SERIALIZATION(asn1SccPointcloud,12)

#include <asn1/DepthMap.h>
ENVIRE_REGISTER_MULTI_ITEM_WITHOUT_SERIALIZATION(asn1SccDepthMap,13)

#ifndef _ENVIRE_ASN1_REGISTER_ITEMS_HPP_
#define _ENVIRE_ASN1_REGISTER_ITEMS_HPP_


#include <envire_core/plugin/Plugin.hpp>
//#include <envire_core/items/Item.hpp>




#define ENVIRE_REGISTER_MULTI_METADATA( _classname, _datatype, _variable ) \
static envire::core::MetadataInitializer _metadataInit##_variable(typeid(_classname), #_datatype, #_classname);
#define ENVIRE_REGISTER_MULTI_ITEM_WITHOUT_SERIALIZATION( _datatype, _variable ) \
CLASS_LOADER_REGISTER_CLASS(envire::core::Item<_datatype>, envire::core::ItemBase) \
ENVIRE_REGISTER_MULTI_METADATA(envire::core::Item<_datatype>, _datatype, _variable)

//#include <asn1/LaserScan.h>
//ENVIRE_REGISTER_ITEM(asn1SccLaserScan)
//ENVIRE_REGISTER_MULTI_ITEM_WITHOUT_SERIALIZATION(asn1SccLaserScan,1)



#endif // _DUMMYPROJECT_DUMMY_HPP_

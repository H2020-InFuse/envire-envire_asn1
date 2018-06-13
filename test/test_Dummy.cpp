#include <boost/test/unit_test.hpp>
#include <envire_asn1/Dummy.hpp>

using namespace envire_asn1;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    envire_asn1::DummyClass dummy;
    dummy.welcome();
}

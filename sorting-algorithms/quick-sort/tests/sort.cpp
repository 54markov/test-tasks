#include <quick-sort.hpp>

#define BOOST_TEST_MODULE Test quick-sort
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(sort)

BOOST_AUTO_TEST_CASE(sort)
{
    std::vector<int> v{-5, -45, 5, 0, 9, 33};
    quick_sort(v);
    BOOST_CHECK_EQUAL(v[0], -45);
    BOOST_CHECK_EQUAL(v[1], -5);
    BOOST_CHECK_EQUAL(v[2], 0);
    BOOST_CHECK_EQUAL(v[3], 5);
    BOOST_CHECK_EQUAL(v[4], 9);
    BOOST_CHECK_EQUAL(v[5], 33);
}

BOOST_AUTO_TEST_SUITE_END()

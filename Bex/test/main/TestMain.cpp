#include "TestPCH.h"
#include <boost/thread.hpp>
#include <Bex/auto_link.h>
#include <stdio.h>

void pause()
{
#ifdef __MSVC
    system("pause");
#else //__MSVC
    Dump("Press any key to continue!");
    std::cin.get();
#endif //__MSVC
}

class TestMain
{
public:
    TestMain()
    {
        Dump("Bex Test Start...");
        atexit(pause);
    }

    ~TestMain()
    {
        //pause();
    }
};

BOOST_GLOBAL_FIXTURE(TestMain);

BOOST_AUTO_TEST_SUITE(s_main)

BOOST_AUTO_TEST_CASE(t_main)
{

}

BOOST_AUTO_TEST_SUITE_END()

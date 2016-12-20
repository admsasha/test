#include <gtest/gtest.h>
#include "SimpleMath.h"

TEST( testMath, myCubeTest ) {
    EXPECT_EQ( 1000, cubic( 10 ) );
}

TEST( testMath, myCubeTest2 ) {
    EXPECT_EQ( 1000, cubic( 10 ) );
}

TEST( testMath, myCubeTest3 ) {
//	int *a = new int(10);

    EXPECT_EQ( 1000, cubic( 10 ) );
}

int main( int argc, char **argv ) {
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}

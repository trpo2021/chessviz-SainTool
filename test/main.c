
#define CTEST_MAIN

#include "ctest.h"
#include "libchessviz/defining_a_moving_shape.h"
#include "libchessviz/dont_eat_my_shape.h"
#include "libchessviz/draw_chessboard.h"
#include "libchessviz/game_start.h"
#include "libchessviz/move_Bb.h"
#include "libchessviz/move_Kk.h"
#include "libchessviz/move_Nn.h"
#include "libchessviz/move_Pp.h"
#include "libchessviz/move_Qq.h"
#include "libchessviz/move_Rr.h"
#include "libchessviz/move_shape.h"
#include "libchessviz/perevod_8to0_0to8.h"
#include "libchessviz/placing_pieces_on_the_board.h"a

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

// defining_a_moving_shape

CTEST_SKIP(defining_a_moving_shape, test_skip)
{
    ASSERT_FAIL();
}

// dont_eat_my_shape

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//draw_chessboard

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//game_start

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//move_Bb

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//move_Kk

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//move_Nn

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//move_Pp

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//move_Qq

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//move_Rr

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//move_shape

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}

//perevod_8to0_0to8

CTEST(perevod_8to0_0to8, test1)
{
    // Given
    const int pos = 1;
    const bool result = blackOrWhite(pos);

    // Then
    ASSERT_FALSE(result);
    
}

CTEST(perevod_8to0_0to8, test1)
{
    // Given
    const int pos = 1;
    const bool result = blackOrWhite(pos);

    // Then
    ASSERT_FALSE(result);
    
}

CTEST(perevod_8to0_0to8, test2)
{
    // Given
    const int pos = 5;
    const bool result = blackOrWhite(pos);

    // Then
    ASSERT_FALSE(result);
    
}

CTEST(perevod_8to0_0to8, test3)
{
    // Given
    const int pos = 10;
    const bool result = blackOrWhite(pos);

    // Then
    ASSERT_FALSE(result);
    
}

CTEST(perevod_8to0_0to8, test4)
{
    // Given
    const int pos = -5;
    const bool result = blackOrWhite(pos);

    // Then
    ASSERT_FALSE(result);
    
}

CTEST(perevod_8to0_0to8, test5)
{
    // Given
    const int pos = 100;
    const bool result = blackOrWhite(pos);

    // Then
    ASSERT_FALSE(result);
    
}
//placing_pieces_on_the_board

CTEST_SKIP(dont_eat_my_shape, test_skip)
{
    ASSERT_FAIL();
}



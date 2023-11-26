
cmake_minimum_required(VERSION 3.14.0)
project(WarCardGame VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()


# Our Project
set(SOURCE_FILES
    main.cpp Card.cpp Card.hpp Deck.cpp Deck.hpp Player.cpp Player.hpp humanPlayer.cpp humanPlayer.hpp computerPlayer.cpp computerPlayer.hpp Game.cpp Game.hpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
        


cmake_minimum_required(VERSION 3.14)

project(testPrj LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

set(testlib_DIR /usr/local/lib/cmake/testlib/)

include_directories(
    /usr/local/include/testlib/
    )

find_package( testLib 1.1.1 CONFIG REQUIRED )
SET (SOURCE
    main.cpp
    test_class.cpp
    )
SET (HEADER
    test_class.h
    )
add_executable(testPrj
  ${SOURCE}
  ${HEADER}
)
target_link_libraries(testPrj Qt${QT_VERSION_MAJOR}::Core
    testLib)

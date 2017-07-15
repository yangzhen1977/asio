cmake_minimum_required (VERSION 3.0)

set(CMAKE_CL_64 TRUE)
set(ADDRESS_MODEL 64)
set(NODE_TARGET x64)

project (test1)

set(HEADERS
    tcp_server.h
    engine.h
    )

set(SRCS
    tcp_server.cpp
    engine.cpp
    main.cpp
    )

#add_definitions(-DBOOST_ALL_DYN_LINK)
set(Boost_USE_STATIC_LIBS ON) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
set(Boost_USE_DEBUG_RUNTIME ON)

set(BOOST_ROOT "c:/local/boost_1_64_0")
set(BOOST_LIBRARYDIR "${BOOST_ROOT}/lib64-msvc-12.0")

find_package(Boost  REQUIRED COMPONENTS system  date_time regex) 

set(SRC_LIST ${HEADERS} ${SRCS})

include_directories(${Boost_INCLUDE_DIRS}) 

add_executable(Tutorial ${SRC_LIST})

message(" ${Boost_LIBRARIES}")

target_link_libraries(Tutorial ${Boost_LIBRARIES})

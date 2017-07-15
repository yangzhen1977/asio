cmake_minimum_required (VERSION 2.6)
project (test1)

set(HEADERS
    tcp_server.h
    )

set(SRCS
    tcp_server.cpp
    main.cpp
    )


set(SRC_LIST ${HEADERS} ${SRCS})
add_executable(Tutorial ${SRC_LIST})
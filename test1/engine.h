#ifndef ASIO_TEST1_ENGINE_H_INCLUDED
#define ASIO_TEST1_ENGINE_H_INCLUDED

#include <cstdint>

#include <boost/asio.hpp>

class CEngine
{
public:
    CEngine();
    virtual ~CEngine();
public:
    int32_t startup();
protected:
    boost::asio::io_service     m_io_service;
};

#endif // ASIO_TEST1_ENGINE_H_INCLUDED

cmake_minimum_required(VERSION 3.8)
project(Weather-Forecast)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Werror=return-type")

add_executable(Weather-Forecast main.cpp temperature.cpp temperature.h Weather.h weatherForecast.h weatherForecast.cpp)
cmake_minimum_required(VERSION 3.22)
project(k01)

set(CMAKE_CXX_STANDARD 14)

include_directories(app)

add_executable(k01
        app/app.cpp
        app/app.h
        app/app.vcxproj
        app/app.vcxproj.filters
        app/main.cpp
        test/test.cpp
        test/test.vcxproj
        test/test.vcxproj.filters
        README.md
        solution.sln)

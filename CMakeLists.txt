cmake_minimum_required(VERSION 3.5)

project(ChannelMap LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets  REQUIRED)

set(TS_FILES ChannelMap_ru_RU.ts)
file(GLOB HEADERS ${PROJECT_SOURCE_DIR}/include/*.h)
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB UIS ${PROJECT_SOURCE_DIR}/src/*.ui)



if(ANDROID)
  add_library(ChannelMap SHARED
    main.cpp
    # mainwindow.cpp
    # mainwindow.h
    # mainwindow.ui
    ${TS_FILES}
  )
else()
  add_executable(ChannelMap
    main.cpp
    # mainwindow.cpp
    # mainwindow.h
    # mainwindow.ui
    ${TS_FILES}
    ${HEADERS}
    ${SOURCES}
    ${UIS}
  )
endif()

target_link_libraries(ChannelMap PUBLIC Qt5::Widgets)
target_include_directories(ChannelMap PUBLIC ${PROJECT_SOURCE_DIR}/include)
# qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

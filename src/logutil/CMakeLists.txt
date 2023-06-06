set(LOGUTIL_SRCS
    logutil.cpp
    logutil.h
)

# qt_add_library(logutil SHARED ${LOGUTIL_SRCS})
add_library(logutil SHARED ${LOGUTIL_SRCS})
# target_link_libraries(logutil PRIVATE Qt6::Core)
target_include_directories(logutil INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
# target_include_directories(logutil INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

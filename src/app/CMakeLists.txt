
set(SRCS main.cpp
        mainwindow.cpp
        mainwindow.h)


add_executable(graver-creator ${SRCS})

target_link_libraries(graver-creator PRIVATE Qt6::Widgets)

set_target_properties(graver-creator PROPERTIES
    WIN32_EXECUTABLE TRUE
)

install(TARGETS graver-creator
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt_finalize_executable(graver-creator)

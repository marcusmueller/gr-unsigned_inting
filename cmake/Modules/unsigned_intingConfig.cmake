INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_UNSIGNED_INTING unsigned_inting)

FIND_PATH(
    UNSIGNED_INTING_INCLUDE_DIRS
    NAMES unsigned_inting/api.h
    HINTS $ENV{UNSIGNED_INTING_DIR}/include
        ${PC_UNSIGNED_INTING_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    UNSIGNED_INTING_LIBRARIES
    NAMES gnuradio-unsigned_inting
    HINTS $ENV{UNSIGNED_INTING_DIR}/lib
        ${PC_UNSIGNED_INTING_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(UNSIGNED_INTING DEFAULT_MSG UNSIGNED_INTING_LIBRARIES UNSIGNED_INTING_INCLUDE_DIRS)
MARK_AS_ADVANCED(UNSIGNED_INTING_LIBRARIES UNSIGNED_INTING_INCLUDE_DIRS)

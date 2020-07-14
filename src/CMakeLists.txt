project(fortyp LANGUAGES CXX)

set(LIBRARY_OUTPUT_PATH ../lib)

add_library(fortyp SHARED
${CMAKE_CURRENT_LIST_DIR}/stocking_values.cpp
${CMAKE_CURRENT_LIST_DIR}/forest_type.cpp
)

target_compile_options(fortyp PRIVATE -Werror -Wall -Wextra -pedantic -O3)

install(TARGETS fortyp DESTINATION lib)
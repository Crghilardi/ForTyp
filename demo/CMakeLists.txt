set(EXECUTABLE_OUTPUT_PATH ../bin)

add_executable(demo_stocking 
demo_stocking.cpp
read_txt.cpp
../src/stocking_values.cpp
../src/forest_type.cpp
../src/stocking_values.hpp
../src/forest_type.hpp
../src/tree.hpp)

target_compile_options(demo_stocking PRIVATE -Werror -Wall -Wextra -pedantic -O3)
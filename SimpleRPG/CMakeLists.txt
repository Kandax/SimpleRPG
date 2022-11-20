# CMakeList.txt : CMake project for SimpleRPG, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


find_package(SFML COMPONENTS system window graphics CONFIG REQUIRED)
# Add source to this project's executable.
add_executable (SimpleRPG "SimpleRPG.cpp"   "def.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SimpleRPG PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
target_link_libraries(SimpleRPG PRIVATE "sfml-system" "sfml-network" "sfml-graphics" "sfml-window")
cmake_minimum_required(VERSION 3.26.3)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

project(SimCityzen)

add_subdirectory(src)

# GLFW lib
add_subdirectory(externals)

install(TARGETS SimCityzen
		RUNTIME DESTINATION ${CMAKE_CURRENT_LIST_DIR}/bin)
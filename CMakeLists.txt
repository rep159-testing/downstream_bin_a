cmake_minimum_required(VERSION 3.22)
project(downstream_bin_a VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rcl REQUIRED)

add_library(downstream_bin_a SHARED src/downstream_bin_a.cpp)
target_include_directories(downstream_bin_a PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_link_libraries(downstream_bin_a PUBLIC rcl::rcl)

install(TARGETS downstream_bin_a EXPORT export_downstream_bin_a
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin)
install(DIRECTORY include/ DESTINATION include/${PROJECT_NAME})

ament_export_targets(export_downstream_bin_a HAS_LIBRARY_TARGET)
ament_export_dependencies(rcl)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(test_downstream_bin_a test/test_downstream_bin_a.cpp)
  target_link_libraries(test_downstream_bin_a downstream_bin_a)
endif()

ament_package()

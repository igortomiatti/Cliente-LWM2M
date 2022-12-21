cmake_minimum_required(VERSION 3.1)
project(client-lwm2m C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra)

find_package(anjay REQUIRED)

add_executable(${PROJECT_NAME} src/main.c
		src/config_wisun.c
		src/diagnostico_wisun.c
		src/device.c
		src/time_object.c)
target_include_directories(${PROJECT_NAME} PRIVATE
  src
  include
)

target_link_libraries(${PROJECT_NAME} PRIVATE anjay)

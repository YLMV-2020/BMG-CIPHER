cmake_minimum_required(VERSION 3.10)
project(BAMTANG VERSION 1.0)

option(USE_CIPHER "Use CIPHER implementation" ON)

if(USE_CIPHER)
  add_subdirectory(CIPHER)
  list(APPEND EXTRA_LIBS CIPHER)
  list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Cipher")
endif()

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${EXTRA_LIBS})
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" ${EXTRA_INCLUDES})

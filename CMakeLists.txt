cmake_minimum_required(VERSION 3.11)

include(FetchContent)

project("FetchContentXercesC")

add_executable(${PROJECT_NAME}
	main.cpp
)

FetchContent_Declare(XercesC
	GIT_REPOSITORY https://github.com/apache/xerces-c.git
	GIT_TAG v3.3.0
)

FetchContent_MakeAvailable(XercesC)

target_link_libraries(${PROJECT_NAME} PUBLIC xerces-c)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR} )
set_target_properties(xerces-c PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR} )

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

cmake_minimum_required(VERSION 3.11)

include(FetchContent)

project("FetchContentXercesC")

add_executable(${PROJECT_NAME}
	main.cpp
)

FetchContent_Declare(XercesC
	GIT_REPOSITORY https://github.com/apache/xerces-c.git
	GIT_TAG v3.2.4
)

FetchContent_MakeAvailable(XercesC)

target_link_libraries(${PROJECT_NAME} PUBLIC XercesC::XercesC)

cmake_minimum_required(VERSION 3.21)
project(untitled C)

set(CMAKE_C_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
        libprog-Atividades
#        GIT_REPOSITORY https://github.com/emersonmello/libprg.git
#        GIT_TAG origin/main
        # or GIT_TAG 0.0.1

        # You can reference a local directory instead
         URL file:///${CMAKE_CURRENT_SOURCE_DIR}/../libprog-Atividades
)
FetchContent_MakeAvailable(libprg)

add_executable(untitled main.c)

# linking libprg
target_link_libraries(untitled PUBLIC libprog-Atividades)
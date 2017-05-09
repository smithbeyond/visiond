cmake_minimum_required(VERSION 3.6)
project(visiond)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES CRB.h CRB_dev.h MEM.h DBG.h memory/memory.h debug/debug.h memory/storage.c memory/memory.c main.c crowbar.h debug/debug.c create.c execute.c eval.c string_pool.c util.c native.c string.c interface.c error.c error_message.c error_message_not_gcc.c heap.c)
add_executable(visiond ${SOURCE_FILES})
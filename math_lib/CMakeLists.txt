aux_source_directory(. LIB_DIR_SRCS)

add_library(MATH ${LIB_DIR_SRCS})

# 设置可执行文件 MATH 需要包含的库路径
target_include_directories(MATH PUBLIC ${CMAKE_SOURCE_DIR}/math_lib)
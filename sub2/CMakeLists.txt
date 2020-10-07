project(sub2)

############################################################
# Create a library
############################################################

# Generate the static library from the library sources
add_library(${PROJECT_NAME} STATIC
        source/sub2.c
        )

add_library(sub::sub2 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/source
        )
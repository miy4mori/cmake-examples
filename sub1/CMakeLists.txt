project(sub1)

############################################################
# Create a library
############################################################

# Generate the static library from the library sources
add_library(${PROJECT_NAME} STATIC
        source/sub1.c
        )

add_library(sub::sub1 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/source
        )
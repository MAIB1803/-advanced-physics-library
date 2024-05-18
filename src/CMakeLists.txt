file(GLOB_RECURSE SOURCES "particles/*.cpp" "forces/*.cpp" "quantum/*.cpp" "relativity/*.cpp")
add_library(AdvancedPhysicsLib STATIC ${SOURCES})
target_include_directories(AdvancedPhysicsLib PUBLIC ../include)

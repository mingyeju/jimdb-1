include_directories(${PROJECT_SOURCE_DIR}/client)
include_directories(${PROJECT_SOURCE_DIR}/client/kv)

set(bs_SOURCES
    batch_stress.c
    bs_common.c
    bs_hash.c
    bs_hyper_log_log.c
    bs_keys.c
    bs_list.c
    bs_set.c
    bs_sorted_set.c
    bs_string.c
)

set(jdb_SORCES jimkv_test.c)

set(bench_SOURCES jimkv_sdk_benchmark.c)

set(cdb_pipe_SORCES jim_pipeline.c)

set(bs_DEPS
    jim-sdk
    jim-base
    jim-common
    jim-proto
    jim-net
    ${PROTOBUF_LIBRARY}
    ${CPR_LIBRARY}
#    ${JEMALLOC_LIBRARY}
    pthread
    curl
    dl
)

foreach(f IN LISTS bs_SOURCES)
    set_source_files_properties(${f} PROPERTIES
        COMPILE_DEFINITIONS "__FNAME__=\"${f}\"")
endforeach()

foreach(f IN LISTS jdb_SOURCES)
    set_source_files_properties(${f} PROPERTIES
        COMPILE_DEFINITIONS "__FNAME__=\"${f}\"")
endforeach()

foreach(f IN LISTS bench_SOURCES)
    set_source_files_properties(${f} PROPERTIES
        COMPILE_DEFINITIONS "__FNAME__=\"${f}\"")
endforeach()

foreach(f IN LISTS cdb_pipe_SORCES)
    set_source_files_properties(${f} PROPERTIES
        COMPILE_DEFINITIONS "__FNAME__=\"${f}\"")
endforeach()

add_executable(jimkv_test jimdb_test.c)
target_link_libraries(jimkv_test ${bs_DEPS})
set_source_files_properties(jimdb_test.c PROPERTIES
        COMPILE_DEFINITIONS "__FNAME__=\"jimdb_test.c\"")

add_executable(jim_sdk_benchmark jim_sdk_benchmark.c)
target_link_libraries(jim_sdk_benchmark ${bs_DEPS})
set_source_files_properties(jim_sdk_benchmark.c PROPERTIES
        COMPILE_DEFINITIONS "__FNAME__=\"jim_sdk_benchmark.c\"")

add_executable(batch_stress ${bs_SOURCES})
target_link_libraries(batch_stress ${bs_DEPS})

add_executable(jim_pipeline ${cdb_pipe_SORCES})
target_link_libraries(jim_pipeline ${bs_DEPS})

# The following four lines of boilerplate have to be in your project's CMakeLists
# in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

set(HOME "/home/jonata")
set(ENV{IDF_PATH} "${HOME}/esp/esp-idf")
set(ENV{IDF_PYTHON_ENV_PATH} "${HOME}/.espressif/python_env/idf5.2_py3.11_env")
set(ENV{PYTHON} "$ENV{IDF_PYTHON_ENV_PATH}/bin/python3")
set(ENV{PATH} "$ENV{PATH}:/home/jonata/esp/esp-idf/components/espcoredump:/home/jonata/esp/esp-idf/components/partition_table:/home/jonata/esp/esp-idf/components/app_update:/home/jonata/.espressif/tools/xtensa-esp-elf-gdb/12.1_20221002/xtensa-esp-elf-gdb/bin:/home/jonata/.espressif/tools/xtensa-esp32-elf/esp-12.2.0_20230208/xtensa-esp32-elf/bin:/home/jonata/.espressif/tools/esp32ulp-elf/2.35_20220830/esp32ulp-elf/bin:/home/jonata/.espressif/tools/openocd-esp32/v0.12.0-esp32-20230419/openocd-esp32/bin:/home/jonata/.espressif/python_env/idf5.2_py3.11_env/bin:/home/jonata/esp/esp-idf/tools:/usr/local/bin:/usr/bin:/bin:/usr/local/games:/usr/games")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(example-dht)

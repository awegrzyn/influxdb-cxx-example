project(influxdb-example)
cmake_minimum_required(VERSION 3.5)
find_package(InfluxDB REQUIRED)

add_executable(influxdb-example influxdb-example.cxx)
target_link_libraries(influxdb-example
  PRIVATE
    InfluxData::InfluxDB
)

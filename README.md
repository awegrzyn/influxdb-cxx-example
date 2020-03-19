# influxdb-cxx-example
Minimal example of `influxdb-cxx` usage.

### MacOS

```
brew install awegrzyn/awegrzyn/influxdb-cxx
git clone https://github.com/awegrzyn/influxdb-cxx-example.git
cd influxdb-cxx-example; mkdir build; cd build
cmake .. -DInfluxDB_DIR=`brew --prefix influxdb-cxx`/lib/cmake/InfluxDB/
make
```

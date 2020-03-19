#include <InfluxDBFactory.h>

int main()
{
  auto influxdb = influxdb::InfluxDBFactory::Get("udp://localhost:8084");
  influxdb->write(influxdb::Point{"test"}
    .addField("value", 10) 
    .addField("value", 20) 
    .addField("value", 100LL)
    .addTag("host", "adampc")
  );
  return 0;
}

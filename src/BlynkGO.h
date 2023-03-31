#ifndef __BLYNKGO_H__
#define __BLYNKGO_H__

#include "esp_idf_version.h"
#if ESP_IDF_VERSION < ESP_IDF_VERSION_VAL(4, 0, 0)
  #include <BlynkGOv2.h>
  #warning "compiled by BlynkGOv2"
#else
  #include <BlynkGOv3.h>
  #warning "compiled by BlynkGOv3"
#endif

#endif

// ESP32 Sine wave Signal generator
#include "driver/dac.h"

void setup() {
  dac_cw_config_t config;
  config.en_ch = DAC_CHANNEL_1;
  config.scale = DAC_CW_SCALE_4;
  config.phase = DAC_CW_PHASE_0;
  config.freq = 1000;
  dac_cw_generator_config(&config);
  dac_cw_generator_enable();
  dac_output_enable(DAC_CHANNEL_1);
}

void loop() {

}

#ifndef ETRC22_ETRC_INFO_H_
#define ETRC22_ETRC_INFO_H_

#include "ev3api.h"
#include "info_type.h"
#include "device_io.h"

class Luminous {
 public:
  Luminous(SensorIo* sensor_io);
  void Update();
  Color color_;
  Rgb rgb_;
  Hsv hsv_;

 private:
  void SetColorReference(Color c, Hsv hsv);
  void UpdateRgb();
  void UpdateHsv();
  void UpdateColor();
  SensorIo* sensor_io_;
  Hsv color_ref_[kColorNum];
};

class Localize {
 public:
  Localize(MotorIo* motor_io);
  void Update();
  // double distance_;

 private:
  MotorIo* motor_io_;
};

#endif  // ETRC22_ETRC_INFO_H_

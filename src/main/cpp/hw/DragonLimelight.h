
///====================================================================================================================================================
/// Copyright 2019 Lake Orion Robobitcs FIRST Team 302
///
/// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
/// to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
/// and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
///
/// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
/// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
/// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
/// OR OTHER DEALINGS IN THE SOFTWARE.
///====================================================================================================================================================


#pragma once

#include "networktables/NetworkTableInstance.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableEntry.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <vector>

using namespace nt;

class DragonLimelight {
 public:
  //Enums
  enum LED_MODE 
  {
    LED_DEFUALT,
    LED_OFF,
    LED_BLINK,
    LED_ON
  };

  enum CAM_MODE
  {
    CAM_VISION,
    CAM_DRIVER
  };

  enum STREAM_MODE
  {
    STREAM_DEFAULT,  // side by side if two cams
    STREAM_MAIN_AND_SECOND, // Second Cam bottom right of Main Cam
    STREAM_SECOND_AND_MAIN // Main Cam bottom right of Second Cam
  };

  enum SNAPSHOT_MODE
  {
    SNAP_OFF,
    SNAP_ON
  };

  // Getters
  double HasTarget();
  double GetTargetHorizontalOffset();
  double GetTargetVerticalOffset();
  double GetTargetArea();
  double GetTargetSkew();
  double GetPipelineLatency();
  std::vector<double> Get3DSolve();

  // Setters
  void SetLEDMode
  (
    DragonLimelight::LED_MODE mode // 0-Default, 1-Off, 2-Blink, 3-On 
  );

  void SetCamMode
  (
    DragonLimelight::CAM_MODE mode // 0-Vision, 1-Driver
  );

  void SetPipeline
  (
    int pipeline // 0-9 
  );

  void SetStreamMode
  (
    DragonLimelight::STREAM_MODE mode // 0-Side By Side, 1-Second cam bottom right of main, 2-Main bottom right second
  );

  void ToggleSnapshot
  (
    DragonLimelight::SNAPSHOT_MODE toggle // 0-No snapshots 1- two snapshots/second: Max of 32 saved
  );

  void PrintValues(); // Prints out all values to ensure everything is working and connected

  static DragonLimelight* GetInstance();
  // static void CreateLimelight();

 private:
  std::shared_ptr<NetworkTable> table;

  DragonLimelight();
  static DragonLimelight* m_instance;
};

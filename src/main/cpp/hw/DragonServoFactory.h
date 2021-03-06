
/*========================================================================================================
 * DragonServoFactory.h
 *========================================================================================================
 *
 * File Description:  Create DragonServos and allow external clients to retrieve created DragonServos
 *
 *========================================================================================================*/


//====================================================================================================================================================
// Copyright 2010 Lake Orion Robobitcs FIRST Team 302
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
// OR OTHER DEALINGS IN THE SOFTWARE.
//====================================================================================================================================================


#pragma once

#include <hw/DragonServo.h>

class DragonServoFactory
{
    public:
        static DragonServoFactory* GetInstance();

        //=======================================================================================
        // Method:          CreateDragonServo
        // Description:     Create a DragonServo from the inputs
        // Returns:         DragonServo*    - could be nullptr if invalid inputs are supplied
        //=======================================================================================
        DragonServo* CreateDragonServo
        (
            DragonServo::SERVO_USAGE    deviceUsage,        // <I> - Usage of the servo
            int                         deviceID,           // <I> - PWM ID
            double                      minAngle,           // <I> - Minimun desired angle
            double                      maxAngle            // <I> - Maximum desired angle
        );

        //=======================================================================================
        // Method:          GetDragonServo
        // Description:     return DragonServo for a particular usage
        // Returns:         DragonServo*                may be nullptr if there isn't a servo with
        //                                              with this usage.
        //=======================================================================================
        DragonServo* GetDragonServo
        (
            DragonServo::SERVO_USAGE    deviceUsage         // <I> - Usage of the servo
        );

    private:
        DragonServoFactory();
        ~DragonServoFactory();


        static DragonServoFactory*        m_instance;
        DragonServo*                      m_limelight;
        DragonServo*                      m_tail;


};

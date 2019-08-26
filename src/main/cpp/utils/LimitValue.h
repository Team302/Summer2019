

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

///=============================================================================================
/// LimitValue.h
///=============================================================================================
///
/// File Description:
///
/// This has a static function to limit the range of a value
///=============================================================================================


#pragma once

class LimitValue
{
    public:

        ///----------------------------------------------------------------------------------
        /// Method:      ForceInRange
        /// Description: This will compare a value to a range.  If the value is outside of the
        ///              range, the nearest bounding value will be returned.
        /// Returns:     double value to use which is in range
        ///----------------------------------------------------------------------------------
        static double ForceInRange
        (
            const double value,         /// <I> - value to check
            const double lowerBound, 	/// <I> - lower bound to check against
            const double upperBound 	/// <I> - upper bound to check against
        );

        ///----------------------------------------------------------------------------------
        /// Method:      GetTrimmedValue
        /// Description: This will compare a value to a range and return the portion that is
        ///				out of range (e.g. if -1.5 is passed in and the range is -1.0 to 1.0,
        ///				it will return -0.5).
        /// Returns:     double 	if value is out of range, this is the value trimmed off to put
        ///       				it into range.
        ///----------------------------------------------------------------------------------
        static double GetTrimmedValue
        (
            const double value,         /// <I> - value to check
            const double lowerBound, 	/// <I> - lower bound to check against
            const double upperBound 	/// <I> - upper bound to check against
        );

        /// Static functions, so no creator or destructor
        LimitValue() = delete;
        virtual ~LimitValue() = delete;
};


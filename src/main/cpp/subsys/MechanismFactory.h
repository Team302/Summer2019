
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

///========================================================================================================
/// MechanismFactory.h
///========================================================================================================
///
/// File Description:
///     This controls the creation of mechanisms/subsystems
///
///========================================================================================================

#pragma once

// C++ Includes


// FRC includes

// Team 302 includes
#include <subsys/IMechanism.h>


// Third Party Includes


class MechanismFactory
{
	public:

		static MechanismFactory* GetMechanismFactory();


		///=====================================================================================
		/// Method:         GetIMechanism
		/// Description:    Find or create the requested mechanism
		/// Returns:        IMechanism*     pointer to the mechanism or nullptr if mechanism 
		///                                 doesn't exist and cannot be created.
		///=====================================================================================
		IMechanism* GetIMechanism
		(
			IMechanism::MECHANISM_TYPE			type		// <I> - manipulator type
		);


	private:
		MechanismFactory();
		virtual ~MechanismFactory();

		static MechanismFactory*	m_mechanismFactory;

		IMechanism* m_wrist;
		IMechanism* m_arm;
		IMechanism* m_extender;
		IMechanism* m_climber;
		IMechanism* m_beak;
		IMechanism* m_tail;
			
};
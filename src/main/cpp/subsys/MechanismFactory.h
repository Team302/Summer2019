/*
 * MechanismFactory.h
 */

#pragma once

#include <subsys/IMechanism.h>
#include <vector>

#include <hw/DragonAnalogInput.h>
#include <hw/DragonDigitalInput.h>
#include <hw/DragonServo.h>
#include <hw/DragonTalon.h>


#include <subsys/IMechanism.h>
#include <subsys/MechParamData.h>

#include <xmlhw/PIDData.h>


class MechanismFactory
{
	public:

		static MechanismFactory* GetMechanismFactory();


		IMechanism* GetIMechanism
		(
			IMechanism::MECHANISM_TYPE			type		// <I> - manipulator type
		);

		//=======================================================================================
		// Method:  		CreateManipulator
		// Description:		Create a manipulator from the inputs
		// Returns:         Void
		//=======================================================================================
		IMechanism* CreateMechanism
		(
			IMechanism::MECHANISM_TYPE		        type,				// <I> - manipulator Type
			const IDragonMotorControllerVector&	    motorControllers,	// <I> - Motor Controllers
			const DragonDigitalInputVector&         digitalInputs,      // <I> - Digital Inputs
			const DragonAnalogInputVector&          analogInputs,       // <I> - Analog Inputs
			const DragonServoVector&                servos,             // <I> - servos
		    const mechParameters&               	parameters,         // <I> - parameters
    		const std::vector<PIDData*>         	pid                 // <I> - PID control info
		);




	private:
		MechanismFactory();
		virtual ~MechanismFactory();


		static MechanismFactory*	m_mechanismFactory;
		
};
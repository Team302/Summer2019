#include <subsys/MechanismFactory.h>
#include <subsys/IMechanism.h>
#include <subsys/MechParamData.h>
#include <vector>

#include <hw/DragonAnalogInput.h>
#include <hw/DragonDigitalInput.h>
#include <hw/DragonServo.h>
#include <hw/DragonTalon.h>

#include <xmlhw/PIDData.h>

MechanismFactory* MechanismFactory::m_mechanismFactory = nullptr;

MechanismFactory* MechanismFactory::GetMechanismFactory()
{
	if ( MechanismFactory::m_mechanismFactory == nullptr )
	{
		MechanismFactory::m_mechanismFactory = new MechanismFactory();
	}
	return MechanismFactory::m_mechanismFactory;
}

IMechanism* MechanismFactory::GetIMechanism
(
	IMechanism::MECHANISM_TYPE			type		// <I> - manipulator type
)
{
	IMechanism* subsys = nullptr;


	return subsys;
}

//=======================================================================================
// Method:  		CreateMechanism
// Description:		Create a mechanism from the inputs
// Returns:         Void
//=======================================================================================
IMechanism* MechanismFactory::CreateMechanism
(
    IMechanism::MECHANISM_TYPE           type,               // <I> - manipulator Type
    const IDragonMotorControllerVector&  motorControllers,   // <I> - Motor Controllers
    const DragonDigitalInputVector&      digitalInputs,      // <I> - Digital Inputs
    const DragonAnalogInputVector&       analogInputs,       // <I> - Analog Inputs
    const DragonServoVector&             servos,             // <I> - servos
    const mechParameters&                parameters,         // <I> - parameters
    const std::vector<PIDData*>          pid                 // <I> - PID control info
)
{
    IMechanism* subsys = nullptr;
    int index = type;

    printf("MechanismFactory index: %d\n", index);

    return subsys;
}

MechanismFactory::MechanismFactory() 
{
}

MechanismFactory::~MechanismFactory()
{
 
}


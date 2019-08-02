
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

///========================================================================================================
/// MechansimDefn.h
///========================================================================================================
///
/// Description: Create a mechaism from an XML definition
///
///     <!ELEMENT mechanism (motor*, analogInput*, digitalInput*, servo*, mechanismData*, PID*)>
///     <!ATTLIST mechanism
///               type          CDATA #REQUIRED
///     >
///
/// type is the name of the mechanism that is the string in the enum in MechanismFactory.h
///
///========================================================================================================


// Third Party Includes
#include <pugixml/pugixml.hpp>


class MechanismDefn
{
    public:
        MechanismDefn() = delete;
        virtual ~MechanismDefn() = delete;


    	///================================================================================================
    	/// Method:      ParseXML
    	/// Description: Parse the mechanism element (and it children).  When this is done
		//				 the mechanism exists that can be retrieved from the factory.
    	/// Returns:     void
    	///================================================================================================
        static void ParseXML
        (
            pugi::xml_node      mechanismNode
        );
};


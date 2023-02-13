/****************************************************************************** 
 * @file		Converter.h        
 * @brief
 *****************************************************************************/
#ifndef CONVERTER_H
#define CONVERTER_H

/******************************************************************************
 *   includes:
 *    - system includes
 *    - application includes
 *****************************************************************************/
#include <CommonDefs.h>
#include <MFramework.h>

/******************************************************************************
 *   definitions:
 *    - macro definitions
 *    - type definitions
 *    - struct definitions
 *****************************************************************************/

/******************************************************************************
 *   constants & variables:
 *    - constants
 *    - external variables
 *    - global variables
 *    - static variables
 *****************************************************************************/

/******************************************************************************
 *   function prototypes:
 *****************************************************************************/

/******************************************************************************
 *  class declaration:
 *****************************************************************************/
namespace MSYS
{
    /*********
    * @class		Converter
    * @brief		Inheriting from MFramework class
    *********/
    class Converter : public MFramework
    {
    public:
        /*********
        * @fn           Converter
        * @brief        Constructor
        * @param        None
        *********/
        Converter() { };

        /*********
        * @fn           ~Converter
        * @brief        Destructor
        *********/
        ~Converter() { };
	};
}
#endif //CONVERTER_H


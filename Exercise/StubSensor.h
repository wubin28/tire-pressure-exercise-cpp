/* 
 * File:   StubSensor.h
 * Author: benwu
 *
 * Created on July 11, 2014, 9:59 PM
 */

#ifndef STUBSENSOR_H
#define	STUBSENSOR_H

#include "Transducer.h"

class StubSensor : public Transducer {
public:
    void arrangeReturnPressureValue(double);
private:
    double returnPressureValue;

};

#endif	/* STUBSENSOR_H */


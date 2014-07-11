#include "Alarm.h"

void Alarm::check() {
	double psiPressureValue = sensor->popNextPressurePsiValue();

	if (psiPressureValue < LOW_PRESSURE_THRESHOLD || HIGH_PRESSURE_THRESHOLD < psiPressureValue) {
		alarmOn = true;
	}
}

bool Alarm::isAlarmOn() {
	return alarmOn;
}

Alarm::Alarm() {
	// TODO: Depending on a concrete Sensor violates the Dependency Inversion Principle and Open-Closed Principle    
	sensor = new Sensor;
	alarmOn = false;
}

const double Alarm::LOW_PRESSURE_THRESHOLD = 17;
const double Alarm::HIGH_PRESSURE_THRESHOLD = 21;
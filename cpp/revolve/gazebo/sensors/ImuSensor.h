/*
 * ImuSensor.h
 *
 *  Created on: Mar 24, 2015
 *      Author: elte
 */

#ifndef REVOLVE_GAZEBO_SENSORS_IMUSENSOR_H_
#define REVOLVE_GAZEBO_SENSORS_IMUSENSOR_H_

#include <revolve/gazebo/sensors/Sensor.h>

namespace revolve {
namespace gazebo {

class ImuSensor: public Sensor {
public:
	ImuSensor(::gazebo::physics::ModelPtr model, sdf::ElementPtr sensor,
			std::string partId);
	virtual ~ImuSensor();

	/**
	 * Read the value of this IMU sensor into the
	 * input array.
	 */
	virtual void read(double * input);

private:
	/**
	 * Sensor dynamically casted to correct type,
	 * so it needs to happen only once.
	 */
	::gazebo::sensors::ImuSensorPtr castSensor_;
};

} /* namespace gazebo */
} /* namespace revolve */

#endif /* REVOLVE_GAZEBO_SENSORS_IMUSENSOR_H_ */

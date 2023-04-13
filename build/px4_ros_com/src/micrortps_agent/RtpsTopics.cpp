/****************************************************************************
 *
 * Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
 * Copyright (c) 2018-2021 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#include "RtpsTopics.h"

bool RtpsTopics::init(std::condition_variable *t_send_queue_cv, std::mutex *t_send_queue_mutex,
		      std::queue<uint8_t> *t_send_queue, const std::string &ns)
{
	// Initialise subscribers
	std::cout << "\033[0;36m---   Subscribers   ---\033[0m" << std::endl;

	if (_DebugArray_sub.init(1, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- DebugArray subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting DebugArray subscriber" << std::endl;
		return false;
	}


	if (_DebugKeyValue_sub.init(2, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- DebugKeyValue subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting DebugKeyValue subscriber" << std::endl;
		return false;
	}


	if (_DebugValue_sub.init(3, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- DebugValue subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting DebugValue subscriber" << std::endl;
		return false;
	}


	if (_DebugVect_sub.init(4, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- DebugVect subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting DebugVect subscriber" << std::endl;
		return false;
	}


	if (_OffboardControlMode_sub.init(5, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- OffboardControlMode subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting OffboardControlMode subscriber" << std::endl;
		return false;
	}


	if (_OpticalFlow_sub.init(6, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- OpticalFlow subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting OpticalFlow subscriber" << std::endl;
		return false;
	}


	if (_PositionSetpoint_sub.init(7, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- PositionSetpoint subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting PositionSetpoint subscriber" << std::endl;
		return false;
	}


	if (_PositionSetpointTriplet_sub.init(8, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- PositionSetpointTriplet subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting PositionSetpointTriplet subscriber" << std::endl;
		return false;
	}


	if (_TelemetryStatus_sub.init(9, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- TelemetryStatus subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting TelemetryStatus subscriber" << std::endl;
		return false;
	}


	if (_Timesync_sub.init(10, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- Timesync subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting Timesync subscriber" << std::endl;
		return false;
	}


	if (_VehicleCommand_sub.init(12, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- VehicleCommand subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting VehicleCommand subscriber" << std::endl;
		return false;
	}


	if (_VehicleLocalPositionSetpoint_sub.init(14, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- VehicleLocalPositionSetpoint subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting VehicleLocalPositionSetpoint subscriber" << std::endl;
		return false;
	}


	if (_VehicleTrajectoryWaypoint_sub.init(20, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- VehicleTrajectoryWaypoint subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting VehicleTrajectoryWaypoint subscriber" << std::endl;
		return false;
	}


	if (_OnboardComputerStatus_sub.init(23, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- OnboardComputerStatus subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting OnboardComputerStatus subscriber" << std::endl;
		return false;
	}


	if (_TrajectoryBezier_sub.init(24, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- TrajectoryBezier subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting TrajectoryBezier subscriber" << std::endl;
		return false;
	}


	if (_VehicleTrajectoryBezier_sub.init(25, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- VehicleTrajectoryBezier subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting VehicleTrajectoryBezier subscriber" << std::endl;
		return false;
	}


	if (_TrajectorySetpoint_sub.init(15, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- TrajectorySetpoint subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting TrajectorySetpoint subscriber" << std::endl;
		return false;
	}


	if (_VehicleMocapOdometry_sub.init(17, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- VehicleMocapOdometry subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting VehicleMocapOdometry subscriber" << std::endl;
		return false;
	}


	if (_VehicleVisualOdometry_sub.init(18, t_send_queue_cv, t_send_queue_mutex, t_send_queue, ns)) {
		std::cout << "- VehicleVisualOdometry subscriber started" << std::endl;

	} else {
		std::cerr << "Failed starting VehicleVisualOdometry subscriber" << std::endl;
		return false;
	}

	std::cout << "\033[0;36m-----------------------\033[0m" << std::endl << std::endl;

	// Initialise publishers
	std::cout << "\033[0;36m----   Publishers  ----\033[0m" << std::endl;

	if (_Timesync_pub.init(ns)) {
		if (_Timesync_fmu_in_pub.init(ns, std::string("fmu/timesync/in"))) {
			_timesync->start(&_Timesync_fmu_in_pub);
			std::cout << "- Timesync publishers started" << std::endl;
		}

	} else {
		std::cerr << "ERROR starting Timesync publisher" << std::endl;
		return false;
	}


	if (_TrajectoryWaypoint_pub.init(ns)) {
		std::cout << "- TrajectoryWaypoint publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting TrajectoryWaypoint publisher" << std::endl;
		return false;
	}


	if (_VehicleControlMode_pub.init(ns)) {
		std::cout << "- VehicleControlMode publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting VehicleControlMode publisher" << std::endl;
		return false;
	}


	if (_VehicleOdometry_pub.init(ns)) {
		std::cout << "- VehicleOdometry publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting VehicleOdometry publisher" << std::endl;
		return false;
	}


	if (_VehicleStatus_pub.init(ns)) {
		std::cout << "- VehicleStatus publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting VehicleStatus publisher" << std::endl;
		return false;
	}


	if (_CollisionConstraints_pub.init(ns)) {
		std::cout << "- CollisionConstraints publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting CollisionConstraints publisher" << std::endl;
		return false;
	}


	if (_TimesyncStatus_pub.init(ns, std::string("timesync_status"))) {
		_timesync->init_status_pub(&_TimesyncStatus_pub);
		std::cout << "- TimesyncStatus publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting TimesyncStatus publisher" << std::endl;
		return false;
	}


	if (_SensorCombined_pub.init(ns)) {
		std::cout << "- SensorCombined publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting SensorCombined publisher" << std::endl;
		return false;
	}


	if (_VehicleTrajectoryWaypointDesired_pub.init(ns)) {
		std::cout << "- VehicleTrajectoryWaypointDesired publisher started" << std::endl;

	} else {
		std::cerr << "ERROR starting VehicleTrajectoryWaypointDesired publisher" << std::endl;
		return false;
	}

	std::cout << "\033[0;36m-----------------------\033[0m" << std::endl;
	return true;
}

template <typename T>
void RtpsTopics::sync_timestamp_of_incoming_data(T &msg) {
	uint64_t timestamp = getMsgTimestamp(&msg);
	uint64_t timestamp_sample = getMsgTimestampSample(&msg);
	_timesync->subtractOffset(timestamp);
	setMsgTimestamp(&msg, timestamp);
	_timesync->subtractOffset(timestamp_sample);
	setMsgTimestampSample(&msg, timestamp_sample);
}

void RtpsTopics::publish(const uint8_t topic_ID, char data_buffer[], size_t len)
{
	switch (topic_ID) {

	case 10: { // Timesync publisher
		Timesync_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);
		_timesync->processTimesyncMsg(&st, &_Timesync_pub);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_Timesync_pub.publish(&st);
	}
	break;

	case 11: { // TrajectoryWaypoint publisher
		TrajectoryWaypoint_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_TrajectoryWaypoint_pub.publish(&st);
	}
	break;

	case 13: { // VehicleControlMode publisher
		VehicleControlMode_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_VehicleControlMode_pub.publish(&st);
	}
	break;

	case 16: { // VehicleOdometry publisher
		VehicleOdometry_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_VehicleOdometry_pub.publish(&st);
	}
	break;

	case 19: { // VehicleStatus publisher
		VehicleStatus_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_VehicleStatus_pub.publish(&st);
	}
	break;

	case 22: { // CollisionConstraints publisher
		CollisionConstraints_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_CollisionConstraints_pub.publish(&st);
	}
	break;

	case 26: { // TimesyncStatus publisher
		TimesyncStatus_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_TimesyncStatus_pub.publish(&st);
	}
	break;

	case 27: { // SensorCombined publisher
		SensorCombined_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_SensorCombined_pub.publish(&st);
	}
	break;

	case 21: { // VehicleTrajectoryWaypointDesired publisher
		VehicleTrajectoryWaypointDesired_msg_t st;
		eprosima::fastcdr::FastBuffer cdrbuffer(data_buffer, len);
		eprosima::fastcdr::Cdr cdr_des(cdrbuffer);
		st.deserialize(cdr_des);

		// apply timestamp offset
		sync_timestamp_of_incoming_data(st);

		_VehicleTrajectoryWaypointDesired_pub.publish(&st);
	}
	break;

	default:
		printf("\033[1;33m[   micrortps_agent   ]\tUnexpected topic ID '%hhu' to publish. Please make sure the agent is capable of parsing the message associated to the topic ID '%hhu'\033[0m\n",
		       topic_ID, topic_ID);
		break;
	}
}
template <typename T>
void RtpsTopics::sync_timestamp_of_outgoing_data(T &msg) {
	uint64_t timestamp = getMsgTimestamp(&msg);
	uint64_t timestamp_sample = getMsgTimestampSample(&msg);
	_timesync->addOffset(timestamp);
	setMsgTimestamp(&msg, timestamp);
	_timesync->addOffset(timestamp_sample);
	setMsgTimestampSample(&msg, timestamp_sample);
}

bool RtpsTopics::getMsg(const uint8_t topic_ID, eprosima::fastcdr::Cdr &scdr)
{
	bool ret = false;

	switch (topic_ID) {

	case 1: // DebugArray subscriber
		if (_DebugArray_sub.hasMsg()) {
			DebugArray_msg_t msg = _DebugArray_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_DebugArray_sub.unlockMsg();
		}

		break;

	case 2: // DebugKeyValue subscriber
		if (_DebugKeyValue_sub.hasMsg()) {
			DebugKeyValue_msg_t msg = _DebugKeyValue_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_DebugKeyValue_sub.unlockMsg();
		}

		break;

	case 3: // DebugValue subscriber
		if (_DebugValue_sub.hasMsg()) {
			DebugValue_msg_t msg = _DebugValue_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_DebugValue_sub.unlockMsg();
		}

		break;

	case 4: // DebugVect subscriber
		if (_DebugVect_sub.hasMsg()) {
			DebugVect_msg_t msg = _DebugVect_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_DebugVect_sub.unlockMsg();
		}

		break;

	case 5: // OffboardControlMode subscriber
		if (_OffboardControlMode_sub.hasMsg()) {
			OffboardControlMode_msg_t msg = _OffboardControlMode_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_OffboardControlMode_sub.unlockMsg();
		}

		break;

	case 6: // OpticalFlow subscriber
		if (_OpticalFlow_sub.hasMsg()) {
			OpticalFlow_msg_t msg = _OpticalFlow_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_OpticalFlow_sub.unlockMsg();
		}

		break;

	case 7: // PositionSetpoint subscriber
		if (_PositionSetpoint_sub.hasMsg()) {
			PositionSetpoint_msg_t msg = _PositionSetpoint_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_PositionSetpoint_sub.unlockMsg();
		}

		break;

	case 8: // PositionSetpointTriplet subscriber
		if (_PositionSetpointTriplet_sub.hasMsg()) {
			PositionSetpointTriplet_msg_t msg = _PositionSetpointTriplet_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_PositionSetpointTriplet_sub.unlockMsg();
		}

		break;

	case 9: // TelemetryStatus subscriber
		if (_TelemetryStatus_sub.hasMsg()) {
			TelemetryStatus_msg_t msg = _TelemetryStatus_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_TelemetryStatus_sub.unlockMsg();
		}

		break;

	case 10: // Timesync subscriber
		if (_Timesync_sub.hasMsg()) {
			Timesync_msg_t msg = _Timesync_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_Timesync_sub.unlockMsg();
		}

		break;

	case 12: // VehicleCommand subscriber
		if (_VehicleCommand_sub.hasMsg()) {
			VehicleCommand_msg_t msg = _VehicleCommand_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_VehicleCommand_sub.unlockMsg();
		}

		break;

	case 14: // VehicleLocalPositionSetpoint subscriber
		if (_VehicleLocalPositionSetpoint_sub.hasMsg()) {
			VehicleLocalPositionSetpoint_msg_t msg = _VehicleLocalPositionSetpoint_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_VehicleLocalPositionSetpoint_sub.unlockMsg();
		}

		break;

	case 20: // VehicleTrajectoryWaypoint subscriber
		if (_VehicleTrajectoryWaypoint_sub.hasMsg()) {
			VehicleTrajectoryWaypoint_msg_t msg = _VehicleTrajectoryWaypoint_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_VehicleTrajectoryWaypoint_sub.unlockMsg();
		}

		break;

	case 23: // OnboardComputerStatus subscriber
		if (_OnboardComputerStatus_sub.hasMsg()) {
			OnboardComputerStatus_msg_t msg = _OnboardComputerStatus_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_OnboardComputerStatus_sub.unlockMsg();
		}

		break;

	case 24: // TrajectoryBezier subscriber
		if (_TrajectoryBezier_sub.hasMsg()) {
			TrajectoryBezier_msg_t msg = _TrajectoryBezier_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_TrajectoryBezier_sub.unlockMsg();
		}

		break;

	case 25: // VehicleTrajectoryBezier subscriber
		if (_VehicleTrajectoryBezier_sub.hasMsg()) {
			VehicleTrajectoryBezier_msg_t msg = _VehicleTrajectoryBezier_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_VehicleTrajectoryBezier_sub.unlockMsg();
		}

		break;

	case 15: // TrajectorySetpoint subscriber
		if (_TrajectorySetpoint_sub.hasMsg()) {
			TrajectorySetpoint_msg_t msg = _TrajectorySetpoint_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_TrajectorySetpoint_sub.unlockMsg();
		}

		break;

	case 17: // VehicleMocapOdometry subscriber
		if (_VehicleMocapOdometry_sub.hasMsg()) {
			VehicleMocapOdometry_msg_t msg = _VehicleMocapOdometry_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_VehicleMocapOdometry_sub.unlockMsg();
		}

		break;

	case 18: // VehicleVisualOdometry subscriber
		if (_VehicleVisualOdometry_sub.hasMsg()) {
			VehicleVisualOdometry_msg_t msg = _VehicleVisualOdometry_sub.getMsg();

			// apply timestamp offset
			sync_timestamp_of_outgoing_data(msg);

			msg.serialize(scdr);
			ret = true;

			_VehicleVisualOdometry_sub.unlockMsg();
		}

		break;

	default:
		printf("\033[1;33m[   micrortps_agent   ]\tUnexpected topic ID '%hhu' to getMsg. Please make sure the agent is capable of parsing the message associated to the topic ID '%hhu'\033[0m\n",
		       topic_ID, topic_ID);
		break;
	}

	return ret;
}

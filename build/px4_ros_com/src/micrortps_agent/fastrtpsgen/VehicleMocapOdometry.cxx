// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file VehicleMocapOdometry.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "VehicleMocapOdometry.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>




















px4_msgs::msg::VehicleMocapOdometry::VehicleMocapOdometry()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@55740540
    m_timestamp = 0;
    // m_timestamp_sample com.eprosima.idl.parser.typecode.PrimitiveTypeCode@60015ef5
    m_timestamp_sample = 0;
    // m_local_frame com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2f54a33d
    m_local_frame = 0;
    // m_x com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1018bde2
    m_x = 0.0;
    // m_y com.eprosima.idl.parser.typecode.PrimitiveTypeCode@65b3f4a4
    m_y = 0.0;
    // m_z com.eprosima.idl.parser.typecode.PrimitiveTypeCode@f2ff811
    m_z = 0.0;
    // m_q com.eprosima.idl.parser.typecode.AliasTypeCode@568ff82
    memset(&m_q, 0, (4) * 4);
    // m_q_offset com.eprosima.idl.parser.typecode.AliasTypeCode@568ff82
    memset(&m_q_offset, 0, (4) * 4);
    // m_pose_covariance com.eprosima.idl.parser.typecode.AliasTypeCode@5ab9e72c
    memset(&m_pose_covariance, 0, (21) * 4);
    // m_velocity_frame com.eprosima.idl.parser.typecode.PrimitiveTypeCode@186f8716
    m_velocity_frame = 0;
    // m_vx com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1d8bd0de
    m_vx = 0.0;
    // m_vy com.eprosima.idl.parser.typecode.PrimitiveTypeCode@45ca843
    m_vy = 0.0;
    // m_vz com.eprosima.idl.parser.typecode.PrimitiveTypeCode@11c9af63
    m_vz = 0.0;
    // m_rollspeed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@757acd7b
    m_rollspeed = 0.0;
    // m_pitchspeed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@36b4fe2a
    m_pitchspeed = 0.0;
    // m_yawspeed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@574b560f
    m_yawspeed = 0.0;
    // m_velocity_covariance com.eprosima.idl.parser.typecode.AliasTypeCode@5ab9e72c
    memset(&m_velocity_covariance, 0, (21) * 4);
    // m_reset_counter com.eprosima.idl.parser.typecode.PrimitiveTypeCode@ba54932
    m_reset_counter = 0;

}

px4_msgs::msg::VehicleMocapOdometry::~VehicleMocapOdometry()
{


















}

px4_msgs::msg::VehicleMocapOdometry::VehicleMocapOdometry(const VehicleMocapOdometry &x)
{
    m_timestamp = x.m_timestamp;
    m_timestamp_sample = x.m_timestamp_sample;
    m_local_frame = x.m_local_frame;
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_q = x.m_q;
    m_q_offset = x.m_q_offset;
    m_pose_covariance = x.m_pose_covariance;
    m_velocity_frame = x.m_velocity_frame;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_rollspeed = x.m_rollspeed;
    m_pitchspeed = x.m_pitchspeed;
    m_yawspeed = x.m_yawspeed;
    m_velocity_covariance = x.m_velocity_covariance;
    m_reset_counter = x.m_reset_counter;
}

px4_msgs::msg::VehicleMocapOdometry::VehicleMocapOdometry(VehicleMocapOdometry &&x)
{
    m_timestamp = x.m_timestamp;
    m_timestamp_sample = x.m_timestamp_sample;
    m_local_frame = x.m_local_frame;
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_q = std::move(x.m_q);
    m_q_offset = std::move(x.m_q_offset);
    m_pose_covariance = std::move(x.m_pose_covariance);
    m_velocity_frame = x.m_velocity_frame;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_rollspeed = x.m_rollspeed;
    m_pitchspeed = x.m_pitchspeed;
    m_yawspeed = x.m_yawspeed;
    m_velocity_covariance = std::move(x.m_velocity_covariance);
    m_reset_counter = x.m_reset_counter;
}

px4_msgs::msg::VehicleMocapOdometry& px4_msgs::msg::VehicleMocapOdometry::operator=(const VehicleMocapOdometry &x)
{

    m_timestamp = x.m_timestamp;
    m_timestamp_sample = x.m_timestamp_sample;
    m_local_frame = x.m_local_frame;
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_q = x.m_q;
    m_q_offset = x.m_q_offset;
    m_pose_covariance = x.m_pose_covariance;
    m_velocity_frame = x.m_velocity_frame;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_rollspeed = x.m_rollspeed;
    m_pitchspeed = x.m_pitchspeed;
    m_yawspeed = x.m_yawspeed;
    m_velocity_covariance = x.m_velocity_covariance;
    m_reset_counter = x.m_reset_counter;

    return *this;
}

px4_msgs::msg::VehicleMocapOdometry& px4_msgs::msg::VehicleMocapOdometry::operator=(VehicleMocapOdometry &&x)
{

    m_timestamp = x.m_timestamp;
    m_timestamp_sample = x.m_timestamp_sample;
    m_local_frame = x.m_local_frame;
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_q = std::move(x.m_q);
    m_q_offset = std::move(x.m_q_offset);
    m_pose_covariance = std::move(x.m_pose_covariance);
    m_velocity_frame = x.m_velocity_frame;
    m_vx = x.m_vx;
    m_vy = x.m_vy;
    m_vz = x.m_vz;
    m_rollspeed = x.m_rollspeed;
    m_pitchspeed = x.m_pitchspeed;
    m_yawspeed = x.m_yawspeed;
    m_velocity_covariance = std::move(x.m_velocity_covariance);
    m_reset_counter = x.m_reset_counter;

    return *this;
}

size_t px4_msgs::msg::VehicleMocapOdometry::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::VehicleMocapOdometry::getCdrSerializedSize(const px4_msgs::msg::VehicleMocapOdometry& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    if ((4) > 0)
    {
        current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((4) > 0)
    {
        current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((21) > 0)
    {
        current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    if ((21) > 0)
    {
        current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::VehicleMocapOdometry::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_timestamp_sample;
    scdr << m_local_frame;
    scdr << m_x;
    scdr << m_y;
    scdr << m_z;
    scdr << m_q;

    scdr << m_q_offset;

    scdr << m_pose_covariance;

    scdr << m_velocity_frame;
    scdr << m_vx;
    scdr << m_vy;
    scdr << m_vz;
    scdr << m_rollspeed;
    scdr << m_pitchspeed;
    scdr << m_yawspeed;
    scdr << m_velocity_covariance;

    scdr << m_reset_counter;
}

void px4_msgs::msg::VehicleMocapOdometry::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_timestamp_sample;
    dcdr >> m_local_frame;
    dcdr >> m_x;
    dcdr >> m_y;
    dcdr >> m_z;
    dcdr >> m_q;

    dcdr >> m_q_offset;

    dcdr >> m_pose_covariance;

    dcdr >> m_velocity_frame;
    dcdr >> m_vx;
    dcdr >> m_vy;
    dcdr >> m_vz;
    dcdr >> m_rollspeed;
    dcdr >> m_pitchspeed;
    dcdr >> m_yawspeed;
    dcdr >> m_velocity_covariance;

    dcdr >> m_reset_counter;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::VehicleMocapOdometry::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::VehicleMocapOdometry::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::VehicleMocapOdometry::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member timestamp_sample
 * @param _timestamp_sample New value for member timestamp_sample
 */
void px4_msgs::msg::VehicleMocapOdometry::timestamp_sample(uint64_t _timestamp_sample)
{
m_timestamp_sample = _timestamp_sample;
}

/*!
 * @brief This function returns the value of member timestamp_sample
 * @return Value of member timestamp_sample
 */
uint64_t px4_msgs::msg::VehicleMocapOdometry::timestamp_sample() const
{
    return m_timestamp_sample;
}

/*!
 * @brief This function returns a reference to member timestamp_sample
 * @return Reference to member timestamp_sample
 */
uint64_t& px4_msgs::msg::VehicleMocapOdometry::timestamp_sample()
{
    return m_timestamp_sample;
}

/*!
 * @brief This function sets a value in member local_frame
 * @param _local_frame New value for member local_frame
 */
void px4_msgs::msg::VehicleMocapOdometry::local_frame(uint8_t _local_frame)
{
m_local_frame = _local_frame;
}

/*!
 * @brief This function returns the value of member local_frame
 * @return Value of member local_frame
 */
uint8_t px4_msgs::msg::VehicleMocapOdometry::local_frame() const
{
    return m_local_frame;
}

/*!
 * @brief This function returns a reference to member local_frame
 * @return Reference to member local_frame
 */
uint8_t& px4_msgs::msg::VehicleMocapOdometry::local_frame()
{
    return m_local_frame;
}

/*!
 * @brief This function sets a value in member x
 * @param _x New value for member x
 */
void px4_msgs::msg::VehicleMocapOdometry::x(float _x)
{
m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
float px4_msgs::msg::VehicleMocapOdometry::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
float& px4_msgs::msg::VehicleMocapOdometry::x()
{
    return m_x;
}

/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void px4_msgs::msg::VehicleMocapOdometry::y(float _y)
{
m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
float px4_msgs::msg::VehicleMocapOdometry::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
float& px4_msgs::msg::VehicleMocapOdometry::y()
{
    return m_y;
}

/*!
 * @brief This function sets a value in member z
 * @param _z New value for member z
 */
void px4_msgs::msg::VehicleMocapOdometry::z(float _z)
{
m_z = _z;
}

/*!
 * @brief This function returns the value of member z
 * @return Value of member z
 */
float px4_msgs::msg::VehicleMocapOdometry::z() const
{
    return m_z;
}

/*!
 * @brief This function returns a reference to member z
 * @return Reference to member z
 */
float& px4_msgs::msg::VehicleMocapOdometry::z()
{
    return m_z;
}

/*!
 * @brief This function copies the value in member q
 * @param _q New value to be copied in member q
 */
void px4_msgs::msg::VehicleMocapOdometry::q(const px4_msgs::msg::float__4 &_q)
{
m_q = _q;
}

/*!
 * @brief This function moves the value in member q
 * @param _q New value to be moved in member q
 */
void px4_msgs::msg::VehicleMocapOdometry::q(px4_msgs::msg::float__4 &&_q)
{
m_q = std::move(_q);
}

/*!
 * @brief This function returns a constant reference to member q
 * @return Constant reference to member q
 */
const px4_msgs::msg::float__4& px4_msgs::msg::VehicleMocapOdometry::q() const
{
    return m_q;
}

/*!
 * @brief This function returns a reference to member q
 * @return Reference to member q
 */
px4_msgs::msg::float__4& px4_msgs::msg::VehicleMocapOdometry::q()
{
    return m_q;
}
/*!
 * @brief This function copies the value in member q_offset
 * @param _q_offset New value to be copied in member q_offset
 */
void px4_msgs::msg::VehicleMocapOdometry::q_offset(const px4_msgs::msg::float__4 &_q_offset)
{
m_q_offset = _q_offset;
}

/*!
 * @brief This function moves the value in member q_offset
 * @param _q_offset New value to be moved in member q_offset
 */
void px4_msgs::msg::VehicleMocapOdometry::q_offset(px4_msgs::msg::float__4 &&_q_offset)
{
m_q_offset = std::move(_q_offset);
}

/*!
 * @brief This function returns a constant reference to member q_offset
 * @return Constant reference to member q_offset
 */
const px4_msgs::msg::float__4& px4_msgs::msg::VehicleMocapOdometry::q_offset() const
{
    return m_q_offset;
}

/*!
 * @brief This function returns a reference to member q_offset
 * @return Reference to member q_offset
 */
px4_msgs::msg::float__4& px4_msgs::msg::VehicleMocapOdometry::q_offset()
{
    return m_q_offset;
}
/*!
 * @brief This function copies the value in member pose_covariance
 * @param _pose_covariance New value to be copied in member pose_covariance
 */
void px4_msgs::msg::VehicleMocapOdometry::pose_covariance(const px4_msgs::msg::float__21 &_pose_covariance)
{
m_pose_covariance = _pose_covariance;
}

/*!
 * @brief This function moves the value in member pose_covariance
 * @param _pose_covariance New value to be moved in member pose_covariance
 */
void px4_msgs::msg::VehicleMocapOdometry::pose_covariance(px4_msgs::msg::float__21 &&_pose_covariance)
{
m_pose_covariance = std::move(_pose_covariance);
}

/*!
 * @brief This function returns a constant reference to member pose_covariance
 * @return Constant reference to member pose_covariance
 */
const px4_msgs::msg::float__21& px4_msgs::msg::VehicleMocapOdometry::pose_covariance() const
{
    return m_pose_covariance;
}

/*!
 * @brief This function returns a reference to member pose_covariance
 * @return Reference to member pose_covariance
 */
px4_msgs::msg::float__21& px4_msgs::msg::VehicleMocapOdometry::pose_covariance()
{
    return m_pose_covariance;
}
/*!
 * @brief This function sets a value in member velocity_frame
 * @param _velocity_frame New value for member velocity_frame
 */
void px4_msgs::msg::VehicleMocapOdometry::velocity_frame(uint8_t _velocity_frame)
{
m_velocity_frame = _velocity_frame;
}

/*!
 * @brief This function returns the value of member velocity_frame
 * @return Value of member velocity_frame
 */
uint8_t px4_msgs::msg::VehicleMocapOdometry::velocity_frame() const
{
    return m_velocity_frame;
}

/*!
 * @brief This function returns a reference to member velocity_frame
 * @return Reference to member velocity_frame
 */
uint8_t& px4_msgs::msg::VehicleMocapOdometry::velocity_frame()
{
    return m_velocity_frame;
}

/*!
 * @brief This function sets a value in member vx
 * @param _vx New value for member vx
 */
void px4_msgs::msg::VehicleMocapOdometry::vx(float _vx)
{
m_vx = _vx;
}

/*!
 * @brief This function returns the value of member vx
 * @return Value of member vx
 */
float px4_msgs::msg::VehicleMocapOdometry::vx() const
{
    return m_vx;
}

/*!
 * @brief This function returns a reference to member vx
 * @return Reference to member vx
 */
float& px4_msgs::msg::VehicleMocapOdometry::vx()
{
    return m_vx;
}

/*!
 * @brief This function sets a value in member vy
 * @param _vy New value for member vy
 */
void px4_msgs::msg::VehicleMocapOdometry::vy(float _vy)
{
m_vy = _vy;
}

/*!
 * @brief This function returns the value of member vy
 * @return Value of member vy
 */
float px4_msgs::msg::VehicleMocapOdometry::vy() const
{
    return m_vy;
}

/*!
 * @brief This function returns a reference to member vy
 * @return Reference to member vy
 */
float& px4_msgs::msg::VehicleMocapOdometry::vy()
{
    return m_vy;
}

/*!
 * @brief This function sets a value in member vz
 * @param _vz New value for member vz
 */
void px4_msgs::msg::VehicleMocapOdometry::vz(float _vz)
{
m_vz = _vz;
}

/*!
 * @brief This function returns the value of member vz
 * @return Value of member vz
 */
float px4_msgs::msg::VehicleMocapOdometry::vz() const
{
    return m_vz;
}

/*!
 * @brief This function returns a reference to member vz
 * @return Reference to member vz
 */
float& px4_msgs::msg::VehicleMocapOdometry::vz()
{
    return m_vz;
}

/*!
 * @brief This function sets a value in member rollspeed
 * @param _rollspeed New value for member rollspeed
 */
void px4_msgs::msg::VehicleMocapOdometry::rollspeed(float _rollspeed)
{
m_rollspeed = _rollspeed;
}

/*!
 * @brief This function returns the value of member rollspeed
 * @return Value of member rollspeed
 */
float px4_msgs::msg::VehicleMocapOdometry::rollspeed() const
{
    return m_rollspeed;
}

/*!
 * @brief This function returns a reference to member rollspeed
 * @return Reference to member rollspeed
 */
float& px4_msgs::msg::VehicleMocapOdometry::rollspeed()
{
    return m_rollspeed;
}

/*!
 * @brief This function sets a value in member pitchspeed
 * @param _pitchspeed New value for member pitchspeed
 */
void px4_msgs::msg::VehicleMocapOdometry::pitchspeed(float _pitchspeed)
{
m_pitchspeed = _pitchspeed;
}

/*!
 * @brief This function returns the value of member pitchspeed
 * @return Value of member pitchspeed
 */
float px4_msgs::msg::VehicleMocapOdometry::pitchspeed() const
{
    return m_pitchspeed;
}

/*!
 * @brief This function returns a reference to member pitchspeed
 * @return Reference to member pitchspeed
 */
float& px4_msgs::msg::VehicleMocapOdometry::pitchspeed()
{
    return m_pitchspeed;
}

/*!
 * @brief This function sets a value in member yawspeed
 * @param _yawspeed New value for member yawspeed
 */
void px4_msgs::msg::VehicleMocapOdometry::yawspeed(float _yawspeed)
{
m_yawspeed = _yawspeed;
}

/*!
 * @brief This function returns the value of member yawspeed
 * @return Value of member yawspeed
 */
float px4_msgs::msg::VehicleMocapOdometry::yawspeed() const
{
    return m_yawspeed;
}

/*!
 * @brief This function returns a reference to member yawspeed
 * @return Reference to member yawspeed
 */
float& px4_msgs::msg::VehicleMocapOdometry::yawspeed()
{
    return m_yawspeed;
}

/*!
 * @brief This function copies the value in member velocity_covariance
 * @param _velocity_covariance New value to be copied in member velocity_covariance
 */
void px4_msgs::msg::VehicleMocapOdometry::velocity_covariance(const px4_msgs::msg::float__21 &_velocity_covariance)
{
m_velocity_covariance = _velocity_covariance;
}

/*!
 * @brief This function moves the value in member velocity_covariance
 * @param _velocity_covariance New value to be moved in member velocity_covariance
 */
void px4_msgs::msg::VehicleMocapOdometry::velocity_covariance(px4_msgs::msg::float__21 &&_velocity_covariance)
{
m_velocity_covariance = std::move(_velocity_covariance);
}

/*!
 * @brief This function returns a constant reference to member velocity_covariance
 * @return Constant reference to member velocity_covariance
 */
const px4_msgs::msg::float__21& px4_msgs::msg::VehicleMocapOdometry::velocity_covariance() const
{
    return m_velocity_covariance;
}

/*!
 * @brief This function returns a reference to member velocity_covariance
 * @return Reference to member velocity_covariance
 */
px4_msgs::msg::float__21& px4_msgs::msg::VehicleMocapOdometry::velocity_covariance()
{
    return m_velocity_covariance;
}
/*!
 * @brief This function sets a value in member reset_counter
 * @param _reset_counter New value for member reset_counter
 */
void px4_msgs::msg::VehicleMocapOdometry::reset_counter(uint8_t _reset_counter)
{
m_reset_counter = _reset_counter;
}

/*!
 * @brief This function returns the value of member reset_counter
 * @return Value of member reset_counter
 */
uint8_t px4_msgs::msg::VehicleMocapOdometry::reset_counter() const
{
    return m_reset_counter;
}

/*!
 * @brief This function returns a reference to member reset_counter
 * @return Reference to member reset_counter
 */
uint8_t& px4_msgs::msg::VehicleMocapOdometry::reset_counter()
{
    return m_reset_counter;
}


size_t px4_msgs::msg::VehicleMocapOdometry::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;





















    return current_align;
}

bool px4_msgs::msg::VehicleMocapOdometry::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::VehicleMocapOdometry::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}



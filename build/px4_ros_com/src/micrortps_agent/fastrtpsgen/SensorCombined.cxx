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
 * @file SensorCombined.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "SensorCombined.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>







px4_msgs::msg::SensorCombined::SensorCombined()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@201a4587
    m_timestamp = 0;
    // m_gyro_rad com.eprosima.idl.parser.typecode.AliasTypeCode@61001b64
    memset(&m_gyro_rad, 0, (3) * 4);
    // m_gyro_integral_dt com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4310d43
    m_gyro_integral_dt = 0;
    // m_accelerometer_timestamp_relative com.eprosima.idl.parser.typecode.PrimitiveTypeCode@54a7079e
    m_accelerometer_timestamp_relative = 0;
    // m_accelerometer_m_s2 com.eprosima.idl.parser.typecode.AliasTypeCode@61001b64
    memset(&m_accelerometer_m_s2, 0, (3) * 4);
    // m_accelerometer_integral_dt com.eprosima.idl.parser.typecode.PrimitiveTypeCode@26e356f0
    m_accelerometer_integral_dt = 0;
    // m_accelerometer_clipping com.eprosima.idl.parser.typecode.PrimitiveTypeCode@47d9a273
    m_accelerometer_clipping = 0;
    // m_accel_calibration_count com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4b8ee4de
    m_accel_calibration_count = 0;
    // m_gyro_calibration_count com.eprosima.idl.parser.typecode.PrimitiveTypeCode@27f981c6
    m_gyro_calibration_count = 0;

}

px4_msgs::msg::SensorCombined::~SensorCombined()
{









}

px4_msgs::msg::SensorCombined::SensorCombined(const SensorCombined &x)
{
    m_timestamp = x.m_timestamp;
    m_gyro_rad = x.m_gyro_rad;
    m_gyro_integral_dt = x.m_gyro_integral_dt;
    m_accelerometer_timestamp_relative = x.m_accelerometer_timestamp_relative;
    m_accelerometer_m_s2 = x.m_accelerometer_m_s2;
    m_accelerometer_integral_dt = x.m_accelerometer_integral_dt;
    m_accelerometer_clipping = x.m_accelerometer_clipping;
    m_accel_calibration_count = x.m_accel_calibration_count;
    m_gyro_calibration_count = x.m_gyro_calibration_count;
}

px4_msgs::msg::SensorCombined::SensorCombined(SensorCombined &&x)
{
    m_timestamp = x.m_timestamp;
    m_gyro_rad = std::move(x.m_gyro_rad);
    m_gyro_integral_dt = x.m_gyro_integral_dt;
    m_accelerometer_timestamp_relative = x.m_accelerometer_timestamp_relative;
    m_accelerometer_m_s2 = std::move(x.m_accelerometer_m_s2);
    m_accelerometer_integral_dt = x.m_accelerometer_integral_dt;
    m_accelerometer_clipping = x.m_accelerometer_clipping;
    m_accel_calibration_count = x.m_accel_calibration_count;
    m_gyro_calibration_count = x.m_gyro_calibration_count;
}

px4_msgs::msg::SensorCombined& px4_msgs::msg::SensorCombined::operator=(const SensorCombined &x)
{

    m_timestamp = x.m_timestamp;
    m_gyro_rad = x.m_gyro_rad;
    m_gyro_integral_dt = x.m_gyro_integral_dt;
    m_accelerometer_timestamp_relative = x.m_accelerometer_timestamp_relative;
    m_accelerometer_m_s2 = x.m_accelerometer_m_s2;
    m_accelerometer_integral_dt = x.m_accelerometer_integral_dt;
    m_accelerometer_clipping = x.m_accelerometer_clipping;
    m_accel_calibration_count = x.m_accel_calibration_count;
    m_gyro_calibration_count = x.m_gyro_calibration_count;

    return *this;
}

px4_msgs::msg::SensorCombined& px4_msgs::msg::SensorCombined::operator=(SensorCombined &&x)
{

    m_timestamp = x.m_timestamp;
    m_gyro_rad = std::move(x.m_gyro_rad);
    m_gyro_integral_dt = x.m_gyro_integral_dt;
    m_accelerometer_timestamp_relative = x.m_accelerometer_timestamp_relative;
    m_accelerometer_m_s2 = std::move(x.m_accelerometer_m_s2);
    m_accelerometer_integral_dt = x.m_accelerometer_integral_dt;
    m_accelerometer_clipping = x.m_accelerometer_clipping;
    m_accel_calibration_count = x.m_accel_calibration_count;
    m_gyro_calibration_count = x.m_gyro_calibration_count;

    return *this;
}

size_t px4_msgs::msg::SensorCombined::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::SensorCombined::getCdrSerializedSize(const px4_msgs::msg::SensorCombined& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    if ((3) > 0)
    {
        current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    if ((3) > 0)
    {
        current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::SensorCombined::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_gyro_rad;

    scdr << m_gyro_integral_dt;
    scdr << m_accelerometer_timestamp_relative;
    scdr << m_accelerometer_m_s2;

    scdr << m_accelerometer_integral_dt;
    scdr << m_accelerometer_clipping;
    scdr << m_accel_calibration_count;
    scdr << m_gyro_calibration_count;
}

void px4_msgs::msg::SensorCombined::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_gyro_rad;

    dcdr >> m_gyro_integral_dt;
    dcdr >> m_accelerometer_timestamp_relative;
    dcdr >> m_accelerometer_m_s2;

    dcdr >> m_accelerometer_integral_dt;
    dcdr >> m_accelerometer_clipping;
    dcdr >> m_accel_calibration_count;
    dcdr >> m_gyro_calibration_count;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::SensorCombined::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::SensorCombined::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::SensorCombined::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member gyro_rad
 * @param _gyro_rad New value to be copied in member gyro_rad
 */
void px4_msgs::msg::SensorCombined::gyro_rad(const px4_msgs::msg::float__3 &_gyro_rad)
{
m_gyro_rad = _gyro_rad;
}

/*!
 * @brief This function moves the value in member gyro_rad
 * @param _gyro_rad New value to be moved in member gyro_rad
 */
void px4_msgs::msg::SensorCombined::gyro_rad(px4_msgs::msg::float__3 &&_gyro_rad)
{
m_gyro_rad = std::move(_gyro_rad);
}

/*!
 * @brief This function returns a constant reference to member gyro_rad
 * @return Constant reference to member gyro_rad
 */
const px4_msgs::msg::float__3& px4_msgs::msg::SensorCombined::gyro_rad() const
{
    return m_gyro_rad;
}

/*!
 * @brief This function returns a reference to member gyro_rad
 * @return Reference to member gyro_rad
 */
px4_msgs::msg::float__3& px4_msgs::msg::SensorCombined::gyro_rad()
{
    return m_gyro_rad;
}
/*!
 * @brief This function sets a value in member gyro_integral_dt
 * @param _gyro_integral_dt New value for member gyro_integral_dt
 */
void px4_msgs::msg::SensorCombined::gyro_integral_dt(uint32_t _gyro_integral_dt)
{
m_gyro_integral_dt = _gyro_integral_dt;
}

/*!
 * @brief This function returns the value of member gyro_integral_dt
 * @return Value of member gyro_integral_dt
 */
uint32_t px4_msgs::msg::SensorCombined::gyro_integral_dt() const
{
    return m_gyro_integral_dt;
}

/*!
 * @brief This function returns a reference to member gyro_integral_dt
 * @return Reference to member gyro_integral_dt
 */
uint32_t& px4_msgs::msg::SensorCombined::gyro_integral_dt()
{
    return m_gyro_integral_dt;
}

/*!
 * @brief This function sets a value in member accelerometer_timestamp_relative
 * @param _accelerometer_timestamp_relative New value for member accelerometer_timestamp_relative
 */
void px4_msgs::msg::SensorCombined::accelerometer_timestamp_relative(int32_t _accelerometer_timestamp_relative)
{
m_accelerometer_timestamp_relative = _accelerometer_timestamp_relative;
}

/*!
 * @brief This function returns the value of member accelerometer_timestamp_relative
 * @return Value of member accelerometer_timestamp_relative
 */
int32_t px4_msgs::msg::SensorCombined::accelerometer_timestamp_relative() const
{
    return m_accelerometer_timestamp_relative;
}

/*!
 * @brief This function returns a reference to member accelerometer_timestamp_relative
 * @return Reference to member accelerometer_timestamp_relative
 */
int32_t& px4_msgs::msg::SensorCombined::accelerometer_timestamp_relative()
{
    return m_accelerometer_timestamp_relative;
}

/*!
 * @brief This function copies the value in member accelerometer_m_s2
 * @param _accelerometer_m_s2 New value to be copied in member accelerometer_m_s2
 */
void px4_msgs::msg::SensorCombined::accelerometer_m_s2(const px4_msgs::msg::float__3 &_accelerometer_m_s2)
{
m_accelerometer_m_s2 = _accelerometer_m_s2;
}

/*!
 * @brief This function moves the value in member accelerometer_m_s2
 * @param _accelerometer_m_s2 New value to be moved in member accelerometer_m_s2
 */
void px4_msgs::msg::SensorCombined::accelerometer_m_s2(px4_msgs::msg::float__3 &&_accelerometer_m_s2)
{
m_accelerometer_m_s2 = std::move(_accelerometer_m_s2);
}

/*!
 * @brief This function returns a constant reference to member accelerometer_m_s2
 * @return Constant reference to member accelerometer_m_s2
 */
const px4_msgs::msg::float__3& px4_msgs::msg::SensorCombined::accelerometer_m_s2() const
{
    return m_accelerometer_m_s2;
}

/*!
 * @brief This function returns a reference to member accelerometer_m_s2
 * @return Reference to member accelerometer_m_s2
 */
px4_msgs::msg::float__3& px4_msgs::msg::SensorCombined::accelerometer_m_s2()
{
    return m_accelerometer_m_s2;
}
/*!
 * @brief This function sets a value in member accelerometer_integral_dt
 * @param _accelerometer_integral_dt New value for member accelerometer_integral_dt
 */
void px4_msgs::msg::SensorCombined::accelerometer_integral_dt(uint32_t _accelerometer_integral_dt)
{
m_accelerometer_integral_dt = _accelerometer_integral_dt;
}

/*!
 * @brief This function returns the value of member accelerometer_integral_dt
 * @return Value of member accelerometer_integral_dt
 */
uint32_t px4_msgs::msg::SensorCombined::accelerometer_integral_dt() const
{
    return m_accelerometer_integral_dt;
}

/*!
 * @brief This function returns a reference to member accelerometer_integral_dt
 * @return Reference to member accelerometer_integral_dt
 */
uint32_t& px4_msgs::msg::SensorCombined::accelerometer_integral_dt()
{
    return m_accelerometer_integral_dt;
}

/*!
 * @brief This function sets a value in member accelerometer_clipping
 * @param _accelerometer_clipping New value for member accelerometer_clipping
 */
void px4_msgs::msg::SensorCombined::accelerometer_clipping(uint8_t _accelerometer_clipping)
{
m_accelerometer_clipping = _accelerometer_clipping;
}

/*!
 * @brief This function returns the value of member accelerometer_clipping
 * @return Value of member accelerometer_clipping
 */
uint8_t px4_msgs::msg::SensorCombined::accelerometer_clipping() const
{
    return m_accelerometer_clipping;
}

/*!
 * @brief This function returns a reference to member accelerometer_clipping
 * @return Reference to member accelerometer_clipping
 */
uint8_t& px4_msgs::msg::SensorCombined::accelerometer_clipping()
{
    return m_accelerometer_clipping;
}

/*!
 * @brief This function sets a value in member accel_calibration_count
 * @param _accel_calibration_count New value for member accel_calibration_count
 */
void px4_msgs::msg::SensorCombined::accel_calibration_count(uint8_t _accel_calibration_count)
{
m_accel_calibration_count = _accel_calibration_count;
}

/*!
 * @brief This function returns the value of member accel_calibration_count
 * @return Value of member accel_calibration_count
 */
uint8_t px4_msgs::msg::SensorCombined::accel_calibration_count() const
{
    return m_accel_calibration_count;
}

/*!
 * @brief This function returns a reference to member accel_calibration_count
 * @return Reference to member accel_calibration_count
 */
uint8_t& px4_msgs::msg::SensorCombined::accel_calibration_count()
{
    return m_accel_calibration_count;
}

/*!
 * @brief This function sets a value in member gyro_calibration_count
 * @param _gyro_calibration_count New value for member gyro_calibration_count
 */
void px4_msgs::msg::SensorCombined::gyro_calibration_count(uint8_t _gyro_calibration_count)
{
m_gyro_calibration_count = _gyro_calibration_count;
}

/*!
 * @brief This function returns the value of member gyro_calibration_count
 * @return Value of member gyro_calibration_count
 */
uint8_t px4_msgs::msg::SensorCombined::gyro_calibration_count() const
{
    return m_gyro_calibration_count;
}

/*!
 * @brief This function returns a reference to member gyro_calibration_count
 * @return Reference to member gyro_calibration_count
 */
uint8_t& px4_msgs::msg::SensorCombined::gyro_calibration_count()
{
    return m_gyro_calibration_count;
}


size_t px4_msgs::msg::SensorCombined::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;












    return current_align;
}

bool px4_msgs::msg::SensorCombined::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::SensorCombined::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
}



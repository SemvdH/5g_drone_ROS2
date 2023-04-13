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
 * @file TimesyncStatus.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "TimesyncStatus.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>




px4_msgs::msg::TimesyncStatus::TimesyncStatus()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1649b0e6
    m_timestamp = 0;
    // m_source_protocol com.eprosima.idl.parser.typecode.PrimitiveTypeCode@865dd6
    m_source_protocol = 0;
    // m_remote_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4da4253
    m_remote_timestamp = 0;
    // m_observed_offset com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3972a855
    m_observed_offset = 0;
    // m_estimated_offset com.eprosima.idl.parser.typecode.PrimitiveTypeCode@62e7f11d
    m_estimated_offset = 0;
    // m_round_trip_time com.eprosima.idl.parser.typecode.PrimitiveTypeCode@503d687a
    m_round_trip_time = 0;

}

px4_msgs::msg::TimesyncStatus::~TimesyncStatus()
{






}

px4_msgs::msg::TimesyncStatus::TimesyncStatus(const TimesyncStatus &x)
{
    m_timestamp = x.m_timestamp;
    m_source_protocol = x.m_source_protocol;
    m_remote_timestamp = x.m_remote_timestamp;
    m_observed_offset = x.m_observed_offset;
    m_estimated_offset = x.m_estimated_offset;
    m_round_trip_time = x.m_round_trip_time;
}

px4_msgs::msg::TimesyncStatus::TimesyncStatus(TimesyncStatus &&x)
{
    m_timestamp = x.m_timestamp;
    m_source_protocol = x.m_source_protocol;
    m_remote_timestamp = x.m_remote_timestamp;
    m_observed_offset = x.m_observed_offset;
    m_estimated_offset = x.m_estimated_offset;
    m_round_trip_time = x.m_round_trip_time;
}

px4_msgs::msg::TimesyncStatus& px4_msgs::msg::TimesyncStatus::operator=(const TimesyncStatus &x)
{

    m_timestamp = x.m_timestamp;
    m_source_protocol = x.m_source_protocol;
    m_remote_timestamp = x.m_remote_timestamp;
    m_observed_offset = x.m_observed_offset;
    m_estimated_offset = x.m_estimated_offset;
    m_round_trip_time = x.m_round_trip_time;

    return *this;
}

px4_msgs::msg::TimesyncStatus& px4_msgs::msg::TimesyncStatus::operator=(TimesyncStatus &&x)
{

    m_timestamp = x.m_timestamp;
    m_source_protocol = x.m_source_protocol;
    m_remote_timestamp = x.m_remote_timestamp;
    m_observed_offset = x.m_observed_offset;
    m_estimated_offset = x.m_estimated_offset;
    m_round_trip_time = x.m_round_trip_time;

    return *this;
}

size_t px4_msgs::msg::TimesyncStatus::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::TimesyncStatus::getCdrSerializedSize(const px4_msgs::msg::TimesyncStatus& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::TimesyncStatus::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_source_protocol;
    scdr << m_remote_timestamp;
    scdr << m_observed_offset;
    scdr << m_estimated_offset;
    scdr << m_round_trip_time;
}

void px4_msgs::msg::TimesyncStatus::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_source_protocol;
    dcdr >> m_remote_timestamp;
    dcdr >> m_observed_offset;
    dcdr >> m_estimated_offset;
    dcdr >> m_round_trip_time;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::TimesyncStatus::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::TimesyncStatus::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::TimesyncStatus::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member source_protocol
 * @param _source_protocol New value for member source_protocol
 */
void px4_msgs::msg::TimesyncStatus::source_protocol(uint8_t _source_protocol)
{
m_source_protocol = _source_protocol;
}

/*!
 * @brief This function returns the value of member source_protocol
 * @return Value of member source_protocol
 */
uint8_t px4_msgs::msg::TimesyncStatus::source_protocol() const
{
    return m_source_protocol;
}

/*!
 * @brief This function returns a reference to member source_protocol
 * @return Reference to member source_protocol
 */
uint8_t& px4_msgs::msg::TimesyncStatus::source_protocol()
{
    return m_source_protocol;
}

/*!
 * @brief This function sets a value in member remote_timestamp
 * @param _remote_timestamp New value for member remote_timestamp
 */
void px4_msgs::msg::TimesyncStatus::remote_timestamp(uint64_t _remote_timestamp)
{
m_remote_timestamp = _remote_timestamp;
}

/*!
 * @brief This function returns the value of member remote_timestamp
 * @return Value of member remote_timestamp
 */
uint64_t px4_msgs::msg::TimesyncStatus::remote_timestamp() const
{
    return m_remote_timestamp;
}

/*!
 * @brief This function returns a reference to member remote_timestamp
 * @return Reference to member remote_timestamp
 */
uint64_t& px4_msgs::msg::TimesyncStatus::remote_timestamp()
{
    return m_remote_timestamp;
}

/*!
 * @brief This function sets a value in member observed_offset
 * @param _observed_offset New value for member observed_offset
 */
void px4_msgs::msg::TimesyncStatus::observed_offset(int64_t _observed_offset)
{
m_observed_offset = _observed_offset;
}

/*!
 * @brief This function returns the value of member observed_offset
 * @return Value of member observed_offset
 */
int64_t px4_msgs::msg::TimesyncStatus::observed_offset() const
{
    return m_observed_offset;
}

/*!
 * @brief This function returns a reference to member observed_offset
 * @return Reference to member observed_offset
 */
int64_t& px4_msgs::msg::TimesyncStatus::observed_offset()
{
    return m_observed_offset;
}

/*!
 * @brief This function sets a value in member estimated_offset
 * @param _estimated_offset New value for member estimated_offset
 */
void px4_msgs::msg::TimesyncStatus::estimated_offset(int64_t _estimated_offset)
{
m_estimated_offset = _estimated_offset;
}

/*!
 * @brief This function returns the value of member estimated_offset
 * @return Value of member estimated_offset
 */
int64_t px4_msgs::msg::TimesyncStatus::estimated_offset() const
{
    return m_estimated_offset;
}

/*!
 * @brief This function returns a reference to member estimated_offset
 * @return Reference to member estimated_offset
 */
int64_t& px4_msgs::msg::TimesyncStatus::estimated_offset()
{
    return m_estimated_offset;
}

/*!
 * @brief This function sets a value in member round_trip_time
 * @param _round_trip_time New value for member round_trip_time
 */
void px4_msgs::msg::TimesyncStatus::round_trip_time(uint32_t _round_trip_time)
{
m_round_trip_time = _round_trip_time;
}

/*!
 * @brief This function returns the value of member round_trip_time
 * @return Value of member round_trip_time
 */
uint32_t px4_msgs::msg::TimesyncStatus::round_trip_time() const
{
    return m_round_trip_time;
}

/*!
 * @brief This function returns a reference to member round_trip_time
 * @return Reference to member round_trip_time
 */
uint32_t& px4_msgs::msg::TimesyncStatus::round_trip_time()
{
    return m_round_trip_time;
}


size_t px4_msgs::msg::TimesyncStatus::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;









    return current_align;
}

bool px4_msgs::msg::TimesyncStatus::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::TimesyncStatus::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
}



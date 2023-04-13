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
 * @file PositionSetpointTriplet.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "PositionSetpointTriplet.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

px4_msgs::msg::PositionSetpointTriplet::PositionSetpointTriplet()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@404bbcbd
    m_timestamp = 0;
    // m_previous com.eprosima.fastrtps.idl.parser.typecode.StructTypeCode@1e81f160

    // m_current com.eprosima.fastrtps.idl.parser.typecode.StructTypeCode@1e81f160

    // m_next com.eprosima.fastrtps.idl.parser.typecode.StructTypeCode@1e81f160


}

px4_msgs::msg::PositionSetpointTriplet::~PositionSetpointTriplet()
{




}

px4_msgs::msg::PositionSetpointTriplet::PositionSetpointTriplet(const PositionSetpointTriplet &x)
{
    m_timestamp = x.m_timestamp;
    m_previous = x.m_previous;
    m_current = x.m_current;
    m_next = x.m_next;
}

px4_msgs::msg::PositionSetpointTriplet::PositionSetpointTriplet(PositionSetpointTriplet &&x)
{
    m_timestamp = x.m_timestamp;
    m_previous = std::move(x.m_previous);
    m_current = std::move(x.m_current);
    m_next = std::move(x.m_next);
}

px4_msgs::msg::PositionSetpointTriplet& px4_msgs::msg::PositionSetpointTriplet::operator=(const PositionSetpointTriplet &x)
{

    m_timestamp = x.m_timestamp;
    m_previous = x.m_previous;
    m_current = x.m_current;
    m_next = x.m_next;

    return *this;
}

px4_msgs::msg::PositionSetpointTriplet& px4_msgs::msg::PositionSetpointTriplet::operator=(PositionSetpointTriplet &&x)
{

    m_timestamp = x.m_timestamp;
    m_previous = std::move(x.m_previous);
    m_current = std::move(x.m_current);
    m_next = std::move(x.m_next);

    return *this;
}

size_t px4_msgs::msg::PositionSetpointTriplet::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += px4_msgs::msg::PositionSetpoint::getMaxCdrSerializedSize(current_alignment);
    current_alignment += px4_msgs::msg::PositionSetpoint::getMaxCdrSerializedSize(current_alignment);
    current_alignment += px4_msgs::msg::PositionSetpoint::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::PositionSetpointTriplet::getCdrSerializedSize(const px4_msgs::msg::PositionSetpointTriplet& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += px4_msgs::msg::PositionSetpoint::getCdrSerializedSize(data.previous(), current_alignment);
    current_alignment += px4_msgs::msg::PositionSetpoint::getCdrSerializedSize(data.current(), current_alignment);
    current_alignment += px4_msgs::msg::PositionSetpoint::getCdrSerializedSize(data.next(), current_alignment);

    return current_alignment - initial_alignment;
}

void px4_msgs::msg::PositionSetpointTriplet::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_previous;
    scdr << m_current;
    scdr << m_next;
}

void px4_msgs::msg::PositionSetpointTriplet::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_previous;
    dcdr >> m_current;
    dcdr >> m_next;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::PositionSetpointTriplet::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::PositionSetpointTriplet::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::PositionSetpointTriplet::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member previous
 * @param _previous New value to be copied in member previous
 */
void px4_msgs::msg::PositionSetpointTriplet::previous(const px4_msgs::msg::PositionSetpoint &_previous)
{
m_previous = _previous;
}

/*!
 * @brief This function moves the value in member previous
 * @param _previous New value to be moved in member previous
 */
void px4_msgs::msg::PositionSetpointTriplet::previous(px4_msgs::msg::PositionSetpoint &&_previous)
{
m_previous = std::move(_previous);
}

/*!
 * @brief This function returns a constant reference to member previous
 * @return Constant reference to member previous
 */
const px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpointTriplet::previous() const
{
    return m_previous;
}

/*!
 * @brief This function returns a reference to member previous
 * @return Reference to member previous
 */
px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpointTriplet::previous()
{
    return m_previous;
}
/*!
 * @brief This function copies the value in member current
 * @param _current New value to be copied in member current
 */
void px4_msgs::msg::PositionSetpointTriplet::current(const px4_msgs::msg::PositionSetpoint &_current)
{
m_current = _current;
}

/*!
 * @brief This function moves the value in member current
 * @param _current New value to be moved in member current
 */
void px4_msgs::msg::PositionSetpointTriplet::current(px4_msgs::msg::PositionSetpoint &&_current)
{
m_current = std::move(_current);
}

/*!
 * @brief This function returns a constant reference to member current
 * @return Constant reference to member current
 */
const px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpointTriplet::current() const
{
    return m_current;
}

/*!
 * @brief This function returns a reference to member current
 * @return Reference to member current
 */
px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpointTriplet::current()
{
    return m_current;
}
/*!
 * @brief This function copies the value in member next
 * @param _next New value to be copied in member next
 */
void px4_msgs::msg::PositionSetpointTriplet::next(const px4_msgs::msg::PositionSetpoint &_next)
{
m_next = _next;
}

/*!
 * @brief This function moves the value in member next
 * @param _next New value to be moved in member next
 */
void px4_msgs::msg::PositionSetpointTriplet::next(px4_msgs::msg::PositionSetpoint &&_next)
{
m_next = std::move(_next);
}

/*!
 * @brief This function returns a constant reference to member next
 * @return Constant reference to member next
 */
const px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpointTriplet::next() const
{
    return m_next;
}

/*!
 * @brief This function returns a reference to member next
 * @return Reference to member next
 */
px4_msgs::msg::PositionSetpoint& px4_msgs::msg::PositionSetpointTriplet::next()
{
    return m_next;
}

size_t px4_msgs::msg::PositionSetpointTriplet::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool px4_msgs::msg::PositionSetpointTriplet::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::PositionSetpointTriplet::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
}



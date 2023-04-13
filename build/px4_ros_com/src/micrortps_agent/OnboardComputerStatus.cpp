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
 * @file OnboardComputerStatus.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "OnboardComputerStatus.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>








px4_msgs::msg::OnboardComputerStatus::OnboardComputerStatus()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@57ad2aa7
    m_timestamp = 0;
    // m_uptime com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5b3f61ff
    m_uptime = 0;
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3e2059ae
    m_type = 0;
    // m_cpu_cores com.eprosima.idl.parser.typecode.AliasTypeCode@398dada8
    memset(&m_cpu_cores, 0, (8) * 1);
    // m_cpu_combined com.eprosima.idl.parser.typecode.AliasTypeCode@7cb502c
    memset(&m_cpu_combined, 0, (10) * 1);
    // m_gpu_cores com.eprosima.idl.parser.typecode.AliasTypeCode@275bf9b3
    memset(&m_gpu_cores, 0, (4) * 1);
    // m_gpu_combined com.eprosima.idl.parser.typecode.AliasTypeCode@7cb502c
    memset(&m_gpu_combined, 0, (10) * 1);
    // m_temperature_board com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1b8a29df
    m_temperature_board = 0;
    // m_temperature_core com.eprosima.idl.parser.typecode.AliasTypeCode@4fbe37eb
    memset(&m_temperature_core, 0, (8) * 1);
    // m_fan_speed com.eprosima.idl.parser.typecode.AliasTypeCode@12a94400
    memset(&m_fan_speed, 0, (4) * 2);
    // m_ram_usage com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6a47b187
    m_ram_usage = 0;
    // m_ram_total com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2049a9c1
    m_ram_total = 0;
    // m_storage_type com.eprosima.idl.parser.typecode.AliasTypeCode@1ef6d34c
    memset(&m_storage_type, 0, (4) * 4);
    // m_storage_usage com.eprosima.idl.parser.typecode.AliasTypeCode@1ef6d34c
    memset(&m_storage_usage, 0, (4) * 4);
    // m_storage_total com.eprosima.idl.parser.typecode.AliasTypeCode@1ef6d34c
    memset(&m_storage_total, 0, (4) * 4);
    // m_link_type com.eprosima.idl.parser.typecode.AliasTypeCode@46271dd6
    memset(&m_link_type, 0, (6) * 4);
    // m_link_tx_rate com.eprosima.idl.parser.typecode.AliasTypeCode@46271dd6
    memset(&m_link_tx_rate, 0, (6) * 4);
    // m_link_rx_rate com.eprosima.idl.parser.typecode.AliasTypeCode@46271dd6
    memset(&m_link_rx_rate, 0, (6) * 4);
    // m_link_tx_max com.eprosima.idl.parser.typecode.AliasTypeCode@46271dd6
    memset(&m_link_tx_max, 0, (6) * 4);
    // m_link_rx_max com.eprosima.idl.parser.typecode.AliasTypeCode@46271dd6
    memset(&m_link_rx_max, 0, (6) * 4);

}

px4_msgs::msg::OnboardComputerStatus::~OnboardComputerStatus()
{




















}

px4_msgs::msg::OnboardComputerStatus::OnboardComputerStatus(const OnboardComputerStatus &x)
{
    m_timestamp = x.m_timestamp;
    m_uptime = x.m_uptime;
    m_type = x.m_type;
    m_cpu_cores = x.m_cpu_cores;
    m_cpu_combined = x.m_cpu_combined;
    m_gpu_cores = x.m_gpu_cores;
    m_gpu_combined = x.m_gpu_combined;
    m_temperature_board = x.m_temperature_board;
    m_temperature_core = x.m_temperature_core;
    m_fan_speed = x.m_fan_speed;
    m_ram_usage = x.m_ram_usage;
    m_ram_total = x.m_ram_total;
    m_storage_type = x.m_storage_type;
    m_storage_usage = x.m_storage_usage;
    m_storage_total = x.m_storage_total;
    m_link_type = x.m_link_type;
    m_link_tx_rate = x.m_link_tx_rate;
    m_link_rx_rate = x.m_link_rx_rate;
    m_link_tx_max = x.m_link_tx_max;
    m_link_rx_max = x.m_link_rx_max;
}

px4_msgs::msg::OnboardComputerStatus::OnboardComputerStatus(OnboardComputerStatus &&x)
{
    m_timestamp = x.m_timestamp;
    m_uptime = x.m_uptime;
    m_type = x.m_type;
    m_cpu_cores = std::move(x.m_cpu_cores);
    m_cpu_combined = std::move(x.m_cpu_combined);
    m_gpu_cores = std::move(x.m_gpu_cores);
    m_gpu_combined = std::move(x.m_gpu_combined);
    m_temperature_board = x.m_temperature_board;
    m_temperature_core = std::move(x.m_temperature_core);
    m_fan_speed = std::move(x.m_fan_speed);
    m_ram_usage = x.m_ram_usage;
    m_ram_total = x.m_ram_total;
    m_storage_type = std::move(x.m_storage_type);
    m_storage_usage = std::move(x.m_storage_usage);
    m_storage_total = std::move(x.m_storage_total);
    m_link_type = std::move(x.m_link_type);
    m_link_tx_rate = std::move(x.m_link_tx_rate);
    m_link_rx_rate = std::move(x.m_link_rx_rate);
    m_link_tx_max = std::move(x.m_link_tx_max);
    m_link_rx_max = std::move(x.m_link_rx_max);
}

px4_msgs::msg::OnboardComputerStatus& px4_msgs::msg::OnboardComputerStatus::operator=(const OnboardComputerStatus &x)
{

    m_timestamp = x.m_timestamp;
    m_uptime = x.m_uptime;
    m_type = x.m_type;
    m_cpu_cores = x.m_cpu_cores;
    m_cpu_combined = x.m_cpu_combined;
    m_gpu_cores = x.m_gpu_cores;
    m_gpu_combined = x.m_gpu_combined;
    m_temperature_board = x.m_temperature_board;
    m_temperature_core = x.m_temperature_core;
    m_fan_speed = x.m_fan_speed;
    m_ram_usage = x.m_ram_usage;
    m_ram_total = x.m_ram_total;
    m_storage_type = x.m_storage_type;
    m_storage_usage = x.m_storage_usage;
    m_storage_total = x.m_storage_total;
    m_link_type = x.m_link_type;
    m_link_tx_rate = x.m_link_tx_rate;
    m_link_rx_rate = x.m_link_rx_rate;
    m_link_tx_max = x.m_link_tx_max;
    m_link_rx_max = x.m_link_rx_max;

    return *this;
}

px4_msgs::msg::OnboardComputerStatus& px4_msgs::msg::OnboardComputerStatus::operator=(OnboardComputerStatus &&x)
{

    m_timestamp = x.m_timestamp;
    m_uptime = x.m_uptime;
    m_type = x.m_type;
    m_cpu_cores = std::move(x.m_cpu_cores);
    m_cpu_combined = std::move(x.m_cpu_combined);
    m_gpu_cores = std::move(x.m_gpu_cores);
    m_gpu_combined = std::move(x.m_gpu_combined);
    m_temperature_board = x.m_temperature_board;
    m_temperature_core = std::move(x.m_temperature_core);
    m_fan_speed = std::move(x.m_fan_speed);
    m_ram_usage = x.m_ram_usage;
    m_ram_total = x.m_ram_total;
    m_storage_type = std::move(x.m_storage_type);
    m_storage_usage = std::move(x.m_storage_usage);
    m_storage_total = std::move(x.m_storage_total);
    m_link_type = std::move(x.m_link_type);
    m_link_tx_rate = std::move(x.m_link_tx_rate);
    m_link_rx_rate = std::move(x.m_link_rx_rate);
    m_link_tx_max = std::move(x.m_link_tx_max);
    m_link_rx_max = std::move(x.m_link_rx_max);

    return *this;
}

size_t px4_msgs::msg::OnboardComputerStatus::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((8) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((10) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((4) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((10) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((8) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((4) * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::OnboardComputerStatus::getCdrSerializedSize(const px4_msgs::msg::OnboardComputerStatus& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    if ((8) > 0)
    {
        current_alignment += ((8) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((10) > 0)
    {
        current_alignment += ((10) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((4) > 0)
    {
        current_alignment += ((4) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((10) > 0)
    {
        current_alignment += ((10) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    if ((8) > 0)
    {
        current_alignment += ((8) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((4) > 0)
    {
        current_alignment += ((4) * 2) + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);
    }

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

    if ((4) > 0)
    {
        current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((6) > 0)
    {
        current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((6) > 0)
    {
        current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((6) > 0)
    {
        current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((6) > 0)
    {
        current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((6) > 0)
    {
        current_alignment += ((6) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }


    return current_alignment - initial_alignment;
}

void px4_msgs::msg::OnboardComputerStatus::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_uptime;
    scdr << m_type;
    scdr << m_cpu_cores;

    scdr << m_cpu_combined;

    scdr << m_gpu_cores;

    scdr << m_gpu_combined;

    scdr << m_temperature_board;
    scdr << m_temperature_core;

    scdr << m_fan_speed;

    scdr << m_ram_usage;
    scdr << m_ram_total;
    scdr << m_storage_type;

    scdr << m_storage_usage;

    scdr << m_storage_total;

    scdr << m_link_type;

    scdr << m_link_tx_rate;

    scdr << m_link_rx_rate;

    scdr << m_link_tx_max;

    scdr << m_link_rx_max;

}

void px4_msgs::msg::OnboardComputerStatus::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_uptime;
    dcdr >> m_type;
    dcdr >> m_cpu_cores;

    dcdr >> m_cpu_combined;

    dcdr >> m_gpu_cores;

    dcdr >> m_gpu_combined;

    dcdr >> m_temperature_board;
    dcdr >> m_temperature_core;

    dcdr >> m_fan_speed;

    dcdr >> m_ram_usage;
    dcdr >> m_ram_total;
    dcdr >> m_storage_type;

    dcdr >> m_storage_usage;

    dcdr >> m_storage_total;

    dcdr >> m_link_type;

    dcdr >> m_link_tx_rate;

    dcdr >> m_link_rx_rate;

    dcdr >> m_link_tx_max;

    dcdr >> m_link_rx_max;

}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::OnboardComputerStatus::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::OnboardComputerStatus::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::OnboardComputerStatus::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member uptime
 * @param _uptime New value for member uptime
 */
void px4_msgs::msg::OnboardComputerStatus::uptime(uint32_t _uptime)
{
m_uptime = _uptime;
}

/*!
 * @brief This function returns the value of member uptime
 * @return Value of member uptime
 */
uint32_t px4_msgs::msg::OnboardComputerStatus::uptime() const
{
    return m_uptime;
}

/*!
 * @brief This function returns a reference to member uptime
 * @return Reference to member uptime
 */
uint32_t& px4_msgs::msg::OnboardComputerStatus::uptime()
{
    return m_uptime;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void px4_msgs::msg::OnboardComputerStatus::type(uint8_t _type)
{
m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
uint8_t px4_msgs::msg::OnboardComputerStatus::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
uint8_t& px4_msgs::msg::OnboardComputerStatus::type()
{
    return m_type;
}

/*!
 * @brief This function copies the value in member cpu_cores
 * @param _cpu_cores New value to be copied in member cpu_cores
 */
void px4_msgs::msg::OnboardComputerStatus::cpu_cores(const px4_msgs::msg::uint8__8 &_cpu_cores)
{
m_cpu_cores = _cpu_cores;
}

/*!
 * @brief This function moves the value in member cpu_cores
 * @param _cpu_cores New value to be moved in member cpu_cores
 */
void px4_msgs::msg::OnboardComputerStatus::cpu_cores(px4_msgs::msg::uint8__8 &&_cpu_cores)
{
m_cpu_cores = std::move(_cpu_cores);
}

/*!
 * @brief This function returns a constant reference to member cpu_cores
 * @return Constant reference to member cpu_cores
 */
const px4_msgs::msg::uint8__8& px4_msgs::msg::OnboardComputerStatus::cpu_cores() const
{
    return m_cpu_cores;
}

/*!
 * @brief This function returns a reference to member cpu_cores
 * @return Reference to member cpu_cores
 */
px4_msgs::msg::uint8__8& px4_msgs::msg::OnboardComputerStatus::cpu_cores()
{
    return m_cpu_cores;
}
/*!
 * @brief This function copies the value in member cpu_combined
 * @param _cpu_combined New value to be copied in member cpu_combined
 */
void px4_msgs::msg::OnboardComputerStatus::cpu_combined(const px4_msgs::msg::uint8__10 &_cpu_combined)
{
m_cpu_combined = _cpu_combined;
}

/*!
 * @brief This function moves the value in member cpu_combined
 * @param _cpu_combined New value to be moved in member cpu_combined
 */
void px4_msgs::msg::OnboardComputerStatus::cpu_combined(px4_msgs::msg::uint8__10 &&_cpu_combined)
{
m_cpu_combined = std::move(_cpu_combined);
}

/*!
 * @brief This function returns a constant reference to member cpu_combined
 * @return Constant reference to member cpu_combined
 */
const px4_msgs::msg::uint8__10& px4_msgs::msg::OnboardComputerStatus::cpu_combined() const
{
    return m_cpu_combined;
}

/*!
 * @brief This function returns a reference to member cpu_combined
 * @return Reference to member cpu_combined
 */
px4_msgs::msg::uint8__10& px4_msgs::msg::OnboardComputerStatus::cpu_combined()
{
    return m_cpu_combined;
}
/*!
 * @brief This function copies the value in member gpu_cores
 * @param _gpu_cores New value to be copied in member gpu_cores
 */
void px4_msgs::msg::OnboardComputerStatus::gpu_cores(const px4_msgs::msg::uint8__4 &_gpu_cores)
{
m_gpu_cores = _gpu_cores;
}

/*!
 * @brief This function moves the value in member gpu_cores
 * @param _gpu_cores New value to be moved in member gpu_cores
 */
void px4_msgs::msg::OnboardComputerStatus::gpu_cores(px4_msgs::msg::uint8__4 &&_gpu_cores)
{
m_gpu_cores = std::move(_gpu_cores);
}

/*!
 * @brief This function returns a constant reference to member gpu_cores
 * @return Constant reference to member gpu_cores
 */
const px4_msgs::msg::uint8__4& px4_msgs::msg::OnboardComputerStatus::gpu_cores() const
{
    return m_gpu_cores;
}

/*!
 * @brief This function returns a reference to member gpu_cores
 * @return Reference to member gpu_cores
 */
px4_msgs::msg::uint8__4& px4_msgs::msg::OnboardComputerStatus::gpu_cores()
{
    return m_gpu_cores;
}
/*!
 * @brief This function copies the value in member gpu_combined
 * @param _gpu_combined New value to be copied in member gpu_combined
 */
void px4_msgs::msg::OnboardComputerStatus::gpu_combined(const px4_msgs::msg::uint8__10 &_gpu_combined)
{
m_gpu_combined = _gpu_combined;
}

/*!
 * @brief This function moves the value in member gpu_combined
 * @param _gpu_combined New value to be moved in member gpu_combined
 */
void px4_msgs::msg::OnboardComputerStatus::gpu_combined(px4_msgs::msg::uint8__10 &&_gpu_combined)
{
m_gpu_combined = std::move(_gpu_combined);
}

/*!
 * @brief This function returns a constant reference to member gpu_combined
 * @return Constant reference to member gpu_combined
 */
const px4_msgs::msg::uint8__10& px4_msgs::msg::OnboardComputerStatus::gpu_combined() const
{
    return m_gpu_combined;
}

/*!
 * @brief This function returns a reference to member gpu_combined
 * @return Reference to member gpu_combined
 */
px4_msgs::msg::uint8__10& px4_msgs::msg::OnboardComputerStatus::gpu_combined()
{
    return m_gpu_combined;
}
/*!
 * @brief This function sets a value in member temperature_board
 * @param _temperature_board New value for member temperature_board
 */
void px4_msgs::msg::OnboardComputerStatus::temperature_board(int8_t _temperature_board)
{
m_temperature_board = _temperature_board;
}

/*!
 * @brief This function returns the value of member temperature_board
 * @return Value of member temperature_board
 */
int8_t px4_msgs::msg::OnboardComputerStatus::temperature_board() const
{
    return m_temperature_board;
}

/*!
 * @brief This function returns a reference to member temperature_board
 * @return Reference to member temperature_board
 */
int8_t& px4_msgs::msg::OnboardComputerStatus::temperature_board()
{
    return m_temperature_board;
}

/*!
 * @brief This function copies the value in member temperature_core
 * @param _temperature_core New value to be copied in member temperature_core
 */
void px4_msgs::msg::OnboardComputerStatus::temperature_core(const px4_msgs::msg::int8__8 &_temperature_core)
{
m_temperature_core = _temperature_core;
}

/*!
 * @brief This function moves the value in member temperature_core
 * @param _temperature_core New value to be moved in member temperature_core
 */
void px4_msgs::msg::OnboardComputerStatus::temperature_core(px4_msgs::msg::int8__8 &&_temperature_core)
{
m_temperature_core = std::move(_temperature_core);
}

/*!
 * @brief This function returns a constant reference to member temperature_core
 * @return Constant reference to member temperature_core
 */
const px4_msgs::msg::int8__8& px4_msgs::msg::OnboardComputerStatus::temperature_core() const
{
    return m_temperature_core;
}

/*!
 * @brief This function returns a reference to member temperature_core
 * @return Reference to member temperature_core
 */
px4_msgs::msg::int8__8& px4_msgs::msg::OnboardComputerStatus::temperature_core()
{
    return m_temperature_core;
}
/*!
 * @brief This function copies the value in member fan_speed
 * @param _fan_speed New value to be copied in member fan_speed
 */
void px4_msgs::msg::OnboardComputerStatus::fan_speed(const px4_msgs::msg::int16__4 &_fan_speed)
{
m_fan_speed = _fan_speed;
}

/*!
 * @brief This function moves the value in member fan_speed
 * @param _fan_speed New value to be moved in member fan_speed
 */
void px4_msgs::msg::OnboardComputerStatus::fan_speed(px4_msgs::msg::int16__4 &&_fan_speed)
{
m_fan_speed = std::move(_fan_speed);
}

/*!
 * @brief This function returns a constant reference to member fan_speed
 * @return Constant reference to member fan_speed
 */
const px4_msgs::msg::int16__4& px4_msgs::msg::OnboardComputerStatus::fan_speed() const
{
    return m_fan_speed;
}

/*!
 * @brief This function returns a reference to member fan_speed
 * @return Reference to member fan_speed
 */
px4_msgs::msg::int16__4& px4_msgs::msg::OnboardComputerStatus::fan_speed()
{
    return m_fan_speed;
}
/*!
 * @brief This function sets a value in member ram_usage
 * @param _ram_usage New value for member ram_usage
 */
void px4_msgs::msg::OnboardComputerStatus::ram_usage(uint32_t _ram_usage)
{
m_ram_usage = _ram_usage;
}

/*!
 * @brief This function returns the value of member ram_usage
 * @return Value of member ram_usage
 */
uint32_t px4_msgs::msg::OnboardComputerStatus::ram_usage() const
{
    return m_ram_usage;
}

/*!
 * @brief This function returns a reference to member ram_usage
 * @return Reference to member ram_usage
 */
uint32_t& px4_msgs::msg::OnboardComputerStatus::ram_usage()
{
    return m_ram_usage;
}

/*!
 * @brief This function sets a value in member ram_total
 * @param _ram_total New value for member ram_total
 */
void px4_msgs::msg::OnboardComputerStatus::ram_total(uint32_t _ram_total)
{
m_ram_total = _ram_total;
}

/*!
 * @brief This function returns the value of member ram_total
 * @return Value of member ram_total
 */
uint32_t px4_msgs::msg::OnboardComputerStatus::ram_total() const
{
    return m_ram_total;
}

/*!
 * @brief This function returns a reference to member ram_total
 * @return Reference to member ram_total
 */
uint32_t& px4_msgs::msg::OnboardComputerStatus::ram_total()
{
    return m_ram_total;
}

/*!
 * @brief This function copies the value in member storage_type
 * @param _storage_type New value to be copied in member storage_type
 */
void px4_msgs::msg::OnboardComputerStatus::storage_type(const px4_msgs::msg::uint32__4 &_storage_type)
{
m_storage_type = _storage_type;
}

/*!
 * @brief This function moves the value in member storage_type
 * @param _storage_type New value to be moved in member storage_type
 */
void px4_msgs::msg::OnboardComputerStatus::storage_type(px4_msgs::msg::uint32__4 &&_storage_type)
{
m_storage_type = std::move(_storage_type);
}

/*!
 * @brief This function returns a constant reference to member storage_type
 * @return Constant reference to member storage_type
 */
const px4_msgs::msg::uint32__4& px4_msgs::msg::OnboardComputerStatus::storage_type() const
{
    return m_storage_type;
}

/*!
 * @brief This function returns a reference to member storage_type
 * @return Reference to member storage_type
 */
px4_msgs::msg::uint32__4& px4_msgs::msg::OnboardComputerStatus::storage_type()
{
    return m_storage_type;
}
/*!
 * @brief This function copies the value in member storage_usage
 * @param _storage_usage New value to be copied in member storage_usage
 */
void px4_msgs::msg::OnboardComputerStatus::storage_usage(const px4_msgs::msg::uint32__4 &_storage_usage)
{
m_storage_usage = _storage_usage;
}

/*!
 * @brief This function moves the value in member storage_usage
 * @param _storage_usage New value to be moved in member storage_usage
 */
void px4_msgs::msg::OnboardComputerStatus::storage_usage(px4_msgs::msg::uint32__4 &&_storage_usage)
{
m_storage_usage = std::move(_storage_usage);
}

/*!
 * @brief This function returns a constant reference to member storage_usage
 * @return Constant reference to member storage_usage
 */
const px4_msgs::msg::uint32__4& px4_msgs::msg::OnboardComputerStatus::storage_usage() const
{
    return m_storage_usage;
}

/*!
 * @brief This function returns a reference to member storage_usage
 * @return Reference to member storage_usage
 */
px4_msgs::msg::uint32__4& px4_msgs::msg::OnboardComputerStatus::storage_usage()
{
    return m_storage_usage;
}
/*!
 * @brief This function copies the value in member storage_total
 * @param _storage_total New value to be copied in member storage_total
 */
void px4_msgs::msg::OnboardComputerStatus::storage_total(const px4_msgs::msg::uint32__4 &_storage_total)
{
m_storage_total = _storage_total;
}

/*!
 * @brief This function moves the value in member storage_total
 * @param _storage_total New value to be moved in member storage_total
 */
void px4_msgs::msg::OnboardComputerStatus::storage_total(px4_msgs::msg::uint32__4 &&_storage_total)
{
m_storage_total = std::move(_storage_total);
}

/*!
 * @brief This function returns a constant reference to member storage_total
 * @return Constant reference to member storage_total
 */
const px4_msgs::msg::uint32__4& px4_msgs::msg::OnboardComputerStatus::storage_total() const
{
    return m_storage_total;
}

/*!
 * @brief This function returns a reference to member storage_total
 * @return Reference to member storage_total
 */
px4_msgs::msg::uint32__4& px4_msgs::msg::OnboardComputerStatus::storage_total()
{
    return m_storage_total;
}
/*!
 * @brief This function copies the value in member link_type
 * @param _link_type New value to be copied in member link_type
 */
void px4_msgs::msg::OnboardComputerStatus::link_type(const px4_msgs::msg::uint32__6 &_link_type)
{
m_link_type = _link_type;
}

/*!
 * @brief This function moves the value in member link_type
 * @param _link_type New value to be moved in member link_type
 */
void px4_msgs::msg::OnboardComputerStatus::link_type(px4_msgs::msg::uint32__6 &&_link_type)
{
m_link_type = std::move(_link_type);
}

/*!
 * @brief This function returns a constant reference to member link_type
 * @return Constant reference to member link_type
 */
const px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_type() const
{
    return m_link_type;
}

/*!
 * @brief This function returns a reference to member link_type
 * @return Reference to member link_type
 */
px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_type()
{
    return m_link_type;
}
/*!
 * @brief This function copies the value in member link_tx_rate
 * @param _link_tx_rate New value to be copied in member link_tx_rate
 */
void px4_msgs::msg::OnboardComputerStatus::link_tx_rate(const px4_msgs::msg::uint32__6 &_link_tx_rate)
{
m_link_tx_rate = _link_tx_rate;
}

/*!
 * @brief This function moves the value in member link_tx_rate
 * @param _link_tx_rate New value to be moved in member link_tx_rate
 */
void px4_msgs::msg::OnboardComputerStatus::link_tx_rate(px4_msgs::msg::uint32__6 &&_link_tx_rate)
{
m_link_tx_rate = std::move(_link_tx_rate);
}

/*!
 * @brief This function returns a constant reference to member link_tx_rate
 * @return Constant reference to member link_tx_rate
 */
const px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_tx_rate() const
{
    return m_link_tx_rate;
}

/*!
 * @brief This function returns a reference to member link_tx_rate
 * @return Reference to member link_tx_rate
 */
px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_tx_rate()
{
    return m_link_tx_rate;
}
/*!
 * @brief This function copies the value in member link_rx_rate
 * @param _link_rx_rate New value to be copied in member link_rx_rate
 */
void px4_msgs::msg::OnboardComputerStatus::link_rx_rate(const px4_msgs::msg::uint32__6 &_link_rx_rate)
{
m_link_rx_rate = _link_rx_rate;
}

/*!
 * @brief This function moves the value in member link_rx_rate
 * @param _link_rx_rate New value to be moved in member link_rx_rate
 */
void px4_msgs::msg::OnboardComputerStatus::link_rx_rate(px4_msgs::msg::uint32__6 &&_link_rx_rate)
{
m_link_rx_rate = std::move(_link_rx_rate);
}

/*!
 * @brief This function returns a constant reference to member link_rx_rate
 * @return Constant reference to member link_rx_rate
 */
const px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_rx_rate() const
{
    return m_link_rx_rate;
}

/*!
 * @brief This function returns a reference to member link_rx_rate
 * @return Reference to member link_rx_rate
 */
px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_rx_rate()
{
    return m_link_rx_rate;
}
/*!
 * @brief This function copies the value in member link_tx_max
 * @param _link_tx_max New value to be copied in member link_tx_max
 */
void px4_msgs::msg::OnboardComputerStatus::link_tx_max(const px4_msgs::msg::uint32__6 &_link_tx_max)
{
m_link_tx_max = _link_tx_max;
}

/*!
 * @brief This function moves the value in member link_tx_max
 * @param _link_tx_max New value to be moved in member link_tx_max
 */
void px4_msgs::msg::OnboardComputerStatus::link_tx_max(px4_msgs::msg::uint32__6 &&_link_tx_max)
{
m_link_tx_max = std::move(_link_tx_max);
}

/*!
 * @brief This function returns a constant reference to member link_tx_max
 * @return Constant reference to member link_tx_max
 */
const px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_tx_max() const
{
    return m_link_tx_max;
}

/*!
 * @brief This function returns a reference to member link_tx_max
 * @return Reference to member link_tx_max
 */
px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_tx_max()
{
    return m_link_tx_max;
}
/*!
 * @brief This function copies the value in member link_rx_max
 * @param _link_rx_max New value to be copied in member link_rx_max
 */
void px4_msgs::msg::OnboardComputerStatus::link_rx_max(const px4_msgs::msg::uint32__6 &_link_rx_max)
{
m_link_rx_max = _link_rx_max;
}

/*!
 * @brief This function moves the value in member link_rx_max
 * @param _link_rx_max New value to be moved in member link_rx_max
 */
void px4_msgs::msg::OnboardComputerStatus::link_rx_max(px4_msgs::msg::uint32__6 &&_link_rx_max)
{
m_link_rx_max = std::move(_link_rx_max);
}

/*!
 * @brief This function returns a constant reference to member link_rx_max
 * @return Constant reference to member link_rx_max
 */
const px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_rx_max() const
{
    return m_link_rx_max;
}

/*!
 * @brief This function returns a reference to member link_rx_max
 * @return Reference to member link_rx_max
 */
px4_msgs::msg::uint32__6& px4_msgs::msg::OnboardComputerStatus::link_rx_max()
{
    return m_link_rx_max;
}

size_t px4_msgs::msg::OnboardComputerStatus::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;























    return current_align;
}

bool px4_msgs::msg::OnboardComputerStatus::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::OnboardComputerStatus::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}



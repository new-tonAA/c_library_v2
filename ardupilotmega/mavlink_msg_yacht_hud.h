#pragma once
// MESSAGE YACHT_HUD PACKING

#define MAVLINK_MSG_ID_YACHT_HUD 184216


typedef struct __mavlink_yacht_hud_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 int16_t roll; /*< [cdeg] roll*/
 int16_t pitch; /*< [cdeg] pitch*/
 uint16_t heading; /*< [cdeg] heading*/
 uint16_t heading_sp; /*< [cdeg] heading set-point*/
 int16_t yawspeed; /*< [cdeg/s] Yaw angular speed*/
 int16_t yawspeed_sp; /*< [cdeg/s] Yaw angular speed set-point*/
 uint16_t RTKYaw; /*< [cdeg] RTKYaw*/
 uint16_t magYaw; /*< [cdeg] MagYaw*/
 uint16_t course; /*< [cdeg] course of velocity*/
 int16_t speed; /*< [cm/s] horizontal speed*/
 int16_t vx; /*< [cm/s] front speed*/
 int16_t vy; /*< [cm/s] right speed*/
 int16_t vx_sp; /*< [cm/s] front speed set-point*/
 int16_t vy_sp; /*< [cm/s] right speed set-point*/
 uint16_t vin1; /*< [V] motor 1 inout voltage*/
 int16_t pout1; /*< [10W] motor 1 output power*/
 int16_t iout1; /*< [dA] motor 1 output current*/
 int16_t rpm1; /*< [rpm] motor 1 rpm*/
 int16_t motortemp1; /*< [cdegC] motor 1 temperature*/
 uint16_t vin2; /*< [V] motor 2 inout voltage*/
 int16_t pout2; /*< [10W] motor 2 output power*/
 int16_t iout2; /*< [dA] motor 2 output current*/
 int16_t rpm2; /*< [rpm] motor 2 rpm*/
 int16_t motortemp2; /*< [cdegC] motor 2 temperature*/
 uint16_t vin3; /*< [V] motor 3 inout voltage*/
 int16_t pout3; /*< [10W] motor 3 output power*/
 int16_t iout3; /*< [dA] motor 3 output current*/
 int16_t rpm3; /*< [rpm] motor 3 rpm*/
 int16_t motortemp3; /*< [cdegC] motor 3 temperature*/
 uint16_t vin4; /*< [V] motor 4 inout voltage*/
 int16_t pout4; /*< [10W] motor 4 output power*/
 int16_t iout4; /*< [dA] motor 4 output current*/
 int16_t rpm4; /*< [rpm] motor 4 rpm*/
 int16_t motortemp4; /*< [cdegC] motor 4 temperature*/
 uint16_t vin5; /*< [V] motor 5 inout voltage*/
 int16_t pout5; /*< [10W] motor 5 output power*/
 int16_t iout5; /*< [dA] motor 5 output current*/
 int16_t rpm5; /*< [rpm] motor 5 rpm*/
 int16_t motortemp5; /*< [cdegC] motor 5 temperature*/
 uint16_t vin6; /*< [V] motor 6 inout voltage*/
 int16_t pout6; /*< [10W] motor 6 output power*/
 int16_t iout6; /*< [dA] motor 6 output current*/
 int16_t rpm6; /*< [rpm] motor 6 rpm*/
 int16_t motortemp6; /*< [cdegC] motor 6 temperature*/
 int16_t angleLeft; /*< [0.55cdeg] angle of left propeller*/
 int16_t angleRight; /*< [0.55cdeg] angle of right propeller*/
 int16_t angleLeftSP; /*< [0.55cdeg] angle set-point of left propeller*/
 int16_t angleRightSP; /*< [0.55cdeg] angle set-point of right propeller*/
 int16_t imuTemp; /*< [cdegC] Temperature*/
 int16_t pilotThrottle; /*< [‰] pilot throttle input from rc*/
 int16_t pilotRotation; /*< [‰] pilot rotation input from rc*/
 int16_t pilotLateral; /*< [‰] pilot lateral input from rc*/
 int16_t pilotPitch; /*< [‰] pilot pitch input from rc*/
 int16_t outThrottleLeft; /*< [‰] output throttle input from rc*/
 int16_t outThrottleRight; /*< [‰] output throttle input from rc*/
} mavlink_yacht_hud_t;

#define MAVLINK_MSG_ID_YACHT_HUD_LEN 114
#define MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN 114
#define MAVLINK_MSG_ID_184216_LEN 114
#define MAVLINK_MSG_ID_184216_MIN_LEN 114

#define MAVLINK_MSG_ID_YACHT_HUD_CRC 126
#define MAVLINK_MSG_ID_184216_CRC 126



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_YACHT_HUD { \
    184216, \
    "YACHT_HUD", \
    56, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_yacht_hud_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_yacht_hud_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_yacht_hud_t, pitch) }, \
         { "heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_yacht_hud_t, heading) }, \
         { "heading_sp", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_yacht_hud_t, heading_sp) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_yacht_hud_t, yawspeed) }, \
         { "yawspeed_sp", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_yacht_hud_t, yawspeed_sp) }, \
         { "RTKYaw", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_yacht_hud_t, RTKYaw) }, \
         { "magYaw", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_yacht_hud_t, magYaw) }, \
         { "course", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_yacht_hud_t, course) }, \
         { "speed", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_yacht_hud_t, speed) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_yacht_hud_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_yacht_hud_t, vy) }, \
         { "vx_sp", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_yacht_hud_t, vx_sp) }, \
         { "vy_sp", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_yacht_hud_t, vy_sp) }, \
         { "vin1", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_yacht_hud_t, vin1) }, \
         { "pout1", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_yacht_hud_t, pout1) }, \
         { "iout1", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_yacht_hud_t, iout1) }, \
         { "rpm1", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_yacht_hud_t, rpm1) }, \
         { "motortemp1", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_yacht_hud_t, motortemp1) }, \
         { "vin2", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_yacht_hud_t, vin2) }, \
         { "pout2", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_yacht_hud_t, pout2) }, \
         { "iout2", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_yacht_hud_t, iout2) }, \
         { "rpm2", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_yacht_hud_t, rpm2) }, \
         { "motortemp2", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_yacht_hud_t, motortemp2) }, \
         { "vin3", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_yacht_hud_t, vin3) }, \
         { "pout3", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_yacht_hud_t, pout3) }, \
         { "iout3", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_yacht_hud_t, iout3) }, \
         { "rpm3", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_yacht_hud_t, rpm3) }, \
         { "motortemp3", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_yacht_hud_t, motortemp3) }, \
         { "vin4", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_yacht_hud_t, vin4) }, \
         { "pout4", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_yacht_hud_t, pout4) }, \
         { "iout4", NULL, MAVLINK_TYPE_INT16_T, 0, 66, offsetof(mavlink_yacht_hud_t, iout4) }, \
         { "rpm4", NULL, MAVLINK_TYPE_INT16_T, 0, 68, offsetof(mavlink_yacht_hud_t, rpm4) }, \
         { "motortemp4", NULL, MAVLINK_TYPE_INT16_T, 0, 70, offsetof(mavlink_yacht_hud_t, motortemp4) }, \
         { "vin5", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_yacht_hud_t, vin5) }, \
         { "pout5", NULL, MAVLINK_TYPE_INT16_T, 0, 74, offsetof(mavlink_yacht_hud_t, pout5) }, \
         { "iout5", NULL, MAVLINK_TYPE_INT16_T, 0, 76, offsetof(mavlink_yacht_hud_t, iout5) }, \
         { "rpm5", NULL, MAVLINK_TYPE_INT16_T, 0, 78, offsetof(mavlink_yacht_hud_t, rpm5) }, \
         { "motortemp5", NULL, MAVLINK_TYPE_INT16_T, 0, 80, offsetof(mavlink_yacht_hud_t, motortemp5) }, \
         { "vin6", NULL, MAVLINK_TYPE_UINT16_T, 0, 82, offsetof(mavlink_yacht_hud_t, vin6) }, \
         { "pout6", NULL, MAVLINK_TYPE_INT16_T, 0, 84, offsetof(mavlink_yacht_hud_t, pout6) }, \
         { "iout6", NULL, MAVLINK_TYPE_INT16_T, 0, 86, offsetof(mavlink_yacht_hud_t, iout6) }, \
         { "rpm6", NULL, MAVLINK_TYPE_INT16_T, 0, 88, offsetof(mavlink_yacht_hud_t, rpm6) }, \
         { "motortemp6", NULL, MAVLINK_TYPE_INT16_T, 0, 90, offsetof(mavlink_yacht_hud_t, motortemp6) }, \
         { "angleLeft", NULL, MAVLINK_TYPE_INT16_T, 0, 92, offsetof(mavlink_yacht_hud_t, angleLeft) }, \
         { "angleRight", NULL, MAVLINK_TYPE_INT16_T, 0, 94, offsetof(mavlink_yacht_hud_t, angleRight) }, \
         { "angleLeftSP", NULL, MAVLINK_TYPE_INT16_T, 0, 96, offsetof(mavlink_yacht_hud_t, angleLeftSP) }, \
         { "angleRightSP", NULL, MAVLINK_TYPE_INT16_T, 0, 98, offsetof(mavlink_yacht_hud_t, angleRightSP) }, \
         { "imuTemp", NULL, MAVLINK_TYPE_INT16_T, 0, 100, offsetof(mavlink_yacht_hud_t, imuTemp) }, \
         { "pilotThrottle", NULL, MAVLINK_TYPE_INT16_T, 0, 102, offsetof(mavlink_yacht_hud_t, pilotThrottle) }, \
         { "pilotRotation", NULL, MAVLINK_TYPE_INT16_T, 0, 104, offsetof(mavlink_yacht_hud_t, pilotRotation) }, \
         { "pilotLateral", NULL, MAVLINK_TYPE_INT16_T, 0, 106, offsetof(mavlink_yacht_hud_t, pilotLateral) }, \
         { "pilotPitch", NULL, MAVLINK_TYPE_INT16_T, 0, 108, offsetof(mavlink_yacht_hud_t, pilotPitch) }, \
         { "outThrottleLeft", NULL, MAVLINK_TYPE_INT16_T, 0, 110, offsetof(mavlink_yacht_hud_t, outThrottleLeft) }, \
         { "outThrottleRight", NULL, MAVLINK_TYPE_INT16_T, 0, 112, offsetof(mavlink_yacht_hud_t, outThrottleRight) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_YACHT_HUD { \
    "YACHT_HUD", \
    56, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_yacht_hud_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_yacht_hud_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_yacht_hud_t, pitch) }, \
         { "heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_yacht_hud_t, heading) }, \
         { "heading_sp", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_yacht_hud_t, heading_sp) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_yacht_hud_t, yawspeed) }, \
         { "yawspeed_sp", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_yacht_hud_t, yawspeed_sp) }, \
         { "RTKYaw", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_yacht_hud_t, RTKYaw) }, \
         { "magYaw", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_yacht_hud_t, magYaw) }, \
         { "course", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_yacht_hud_t, course) }, \
         { "speed", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_yacht_hud_t, speed) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_yacht_hud_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_yacht_hud_t, vy) }, \
         { "vx_sp", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_yacht_hud_t, vx_sp) }, \
         { "vy_sp", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_yacht_hud_t, vy_sp) }, \
         { "vin1", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_yacht_hud_t, vin1) }, \
         { "pout1", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_yacht_hud_t, pout1) }, \
         { "iout1", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_yacht_hud_t, iout1) }, \
         { "rpm1", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_yacht_hud_t, rpm1) }, \
         { "motortemp1", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_yacht_hud_t, motortemp1) }, \
         { "vin2", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_yacht_hud_t, vin2) }, \
         { "pout2", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_yacht_hud_t, pout2) }, \
         { "iout2", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_yacht_hud_t, iout2) }, \
         { "rpm2", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_yacht_hud_t, rpm2) }, \
         { "motortemp2", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_yacht_hud_t, motortemp2) }, \
         { "vin3", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_yacht_hud_t, vin3) }, \
         { "pout3", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_yacht_hud_t, pout3) }, \
         { "iout3", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_yacht_hud_t, iout3) }, \
         { "rpm3", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_yacht_hud_t, rpm3) }, \
         { "motortemp3", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_yacht_hud_t, motortemp3) }, \
         { "vin4", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_yacht_hud_t, vin4) }, \
         { "pout4", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_yacht_hud_t, pout4) }, \
         { "iout4", NULL, MAVLINK_TYPE_INT16_T, 0, 66, offsetof(mavlink_yacht_hud_t, iout4) }, \
         { "rpm4", NULL, MAVLINK_TYPE_INT16_T, 0, 68, offsetof(mavlink_yacht_hud_t, rpm4) }, \
         { "motortemp4", NULL, MAVLINK_TYPE_INT16_T, 0, 70, offsetof(mavlink_yacht_hud_t, motortemp4) }, \
         { "vin5", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_yacht_hud_t, vin5) }, \
         { "pout5", NULL, MAVLINK_TYPE_INT16_T, 0, 74, offsetof(mavlink_yacht_hud_t, pout5) }, \
         { "iout5", NULL, MAVLINK_TYPE_INT16_T, 0, 76, offsetof(mavlink_yacht_hud_t, iout5) }, \
         { "rpm5", NULL, MAVLINK_TYPE_INT16_T, 0, 78, offsetof(mavlink_yacht_hud_t, rpm5) }, \
         { "motortemp5", NULL, MAVLINK_TYPE_INT16_T, 0, 80, offsetof(mavlink_yacht_hud_t, motortemp5) }, \
         { "vin6", NULL, MAVLINK_TYPE_UINT16_T, 0, 82, offsetof(mavlink_yacht_hud_t, vin6) }, \
         { "pout6", NULL, MAVLINK_TYPE_INT16_T, 0, 84, offsetof(mavlink_yacht_hud_t, pout6) }, \
         { "iout6", NULL, MAVLINK_TYPE_INT16_T, 0, 86, offsetof(mavlink_yacht_hud_t, iout6) }, \
         { "rpm6", NULL, MAVLINK_TYPE_INT16_T, 0, 88, offsetof(mavlink_yacht_hud_t, rpm6) }, \
         { "motortemp6", NULL, MAVLINK_TYPE_INT16_T, 0, 90, offsetof(mavlink_yacht_hud_t, motortemp6) }, \
         { "angleLeft", NULL, MAVLINK_TYPE_INT16_T, 0, 92, offsetof(mavlink_yacht_hud_t, angleLeft) }, \
         { "angleRight", NULL, MAVLINK_TYPE_INT16_T, 0, 94, offsetof(mavlink_yacht_hud_t, angleRight) }, \
         { "angleLeftSP", NULL, MAVLINK_TYPE_INT16_T, 0, 96, offsetof(mavlink_yacht_hud_t, angleLeftSP) }, \
         { "angleRightSP", NULL, MAVLINK_TYPE_INT16_T, 0, 98, offsetof(mavlink_yacht_hud_t, angleRightSP) }, \
         { "imuTemp", NULL, MAVLINK_TYPE_INT16_T, 0, 100, offsetof(mavlink_yacht_hud_t, imuTemp) }, \
         { "pilotThrottle", NULL, MAVLINK_TYPE_INT16_T, 0, 102, offsetof(mavlink_yacht_hud_t, pilotThrottle) }, \
         { "pilotRotation", NULL, MAVLINK_TYPE_INT16_T, 0, 104, offsetof(mavlink_yacht_hud_t, pilotRotation) }, \
         { "pilotLateral", NULL, MAVLINK_TYPE_INT16_T, 0, 106, offsetof(mavlink_yacht_hud_t, pilotLateral) }, \
         { "pilotPitch", NULL, MAVLINK_TYPE_INT16_T, 0, 108, offsetof(mavlink_yacht_hud_t, pilotPitch) }, \
         { "outThrottleLeft", NULL, MAVLINK_TYPE_INT16_T, 0, 110, offsetof(mavlink_yacht_hud_t, outThrottleLeft) }, \
         { "outThrottleRight", NULL, MAVLINK_TYPE_INT16_T, 0, 112, offsetof(mavlink_yacht_hud_t, outThrottleRight) }, \
         } \
}
#endif

/**
 * @brief Pack a yacht_hud message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [cdeg] roll
 * @param pitch [cdeg] pitch
 * @param heading [cdeg] heading
 * @param heading_sp [cdeg] heading set-point
 * @param yawspeed [cdeg/s] Yaw angular speed
 * @param yawspeed_sp [cdeg/s] Yaw angular speed set-point
 * @param RTKYaw [cdeg] RTKYaw
 * @param magYaw [cdeg] MagYaw
 * @param course [cdeg] course of velocity
 * @param speed [cm/s] horizontal speed
 * @param vx [cm/s] front speed
 * @param vy [cm/s] right speed
 * @param vx_sp [cm/s] front speed set-point
 * @param vy_sp [cm/s] right speed set-point
 * @param vin1 [V] motor 1 inout voltage
 * @param pout1 [10W] motor 1 output power
 * @param iout1 [dA] motor 1 output current
 * @param rpm1 [rpm] motor 1 rpm
 * @param motortemp1 [cdegC] motor 1 temperature
 * @param vin2 [V] motor 2 inout voltage
 * @param pout2 [10W] motor 2 output power
 * @param iout2 [dA] motor 2 output current
 * @param rpm2 [rpm] motor 2 rpm
 * @param motortemp2 [cdegC] motor 2 temperature
 * @param vin3 [V] motor 3 inout voltage
 * @param pout3 [10W] motor 3 output power
 * @param iout3 [dA] motor 3 output current
 * @param rpm3 [rpm] motor 3 rpm
 * @param motortemp3 [cdegC] motor 3 temperature
 * @param vin4 [V] motor 4 inout voltage
 * @param pout4 [10W] motor 4 output power
 * @param iout4 [dA] motor 4 output current
 * @param rpm4 [rpm] motor 4 rpm
 * @param motortemp4 [cdegC] motor 4 temperature
 * @param vin5 [V] motor 5 inout voltage
 * @param pout5 [10W] motor 5 output power
 * @param iout5 [dA] motor 5 output current
 * @param rpm5 [rpm] motor 5 rpm
 * @param motortemp5 [cdegC] motor 5 temperature
 * @param vin6 [V] motor 6 inout voltage
 * @param pout6 [10W] motor 6 output power
 * @param iout6 [dA] motor 6 output current
 * @param rpm6 [rpm] motor 6 rpm
 * @param motortemp6 [cdegC] motor 6 temperature
 * @param angleLeft [0.55cdeg] angle of left propeller
 * @param angleRight [0.55cdeg] angle of right propeller
 * @param angleLeftSP [0.55cdeg] angle set-point of left propeller
 * @param angleRightSP [0.55cdeg] angle set-point of right propeller
 * @param imuTemp [cdegC] Temperature
 * @param pilotThrottle [‰] pilot throttle input from rc
 * @param pilotRotation [‰] pilot rotation input from rc
 * @param pilotLateral [‰] pilot lateral input from rc
 * @param pilotPitch [‰] pilot pitch input from rc
 * @param outThrottleLeft [‰] output throttle input from rc
 * @param outThrottleRight [‰] output throttle input from rc
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_yacht_hud_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int16_t roll, int16_t pitch, uint16_t heading, uint16_t heading_sp, int16_t yawspeed, int16_t yawspeed_sp, uint16_t RTKYaw, uint16_t magYaw, uint16_t course, int16_t speed, int16_t vx, int16_t vy, int16_t vx_sp, int16_t vy_sp, uint16_t vin1, int16_t pout1, int16_t iout1, int16_t rpm1, int16_t motortemp1, uint16_t vin2, int16_t pout2, int16_t iout2, int16_t rpm2, int16_t motortemp2, uint16_t vin3, int16_t pout3, int16_t iout3, int16_t rpm3, int16_t motortemp3, uint16_t vin4, int16_t pout4, int16_t iout4, int16_t rpm4, int16_t motortemp4, uint16_t vin5, int16_t pout5, int16_t iout5, int16_t rpm5, int16_t motortemp5, uint16_t vin6, int16_t pout6, int16_t iout6, int16_t rpm6, int16_t motortemp6, int16_t angleLeft, int16_t angleRight, int16_t angleLeftSP, int16_t angleRightSP, int16_t imuTemp, int16_t pilotThrottle, int16_t pilotRotation, int16_t pilotLateral, int16_t pilotPitch, int16_t outThrottleLeft, int16_t outThrottleRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_YACHT_HUD_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, pitch);
    _mav_put_uint16_t(buf, 8, heading);
    _mav_put_uint16_t(buf, 10, heading_sp);
    _mav_put_int16_t(buf, 12, yawspeed);
    _mav_put_int16_t(buf, 14, yawspeed_sp);
    _mav_put_uint16_t(buf, 16, RTKYaw);
    _mav_put_uint16_t(buf, 18, magYaw);
    _mav_put_uint16_t(buf, 20, course);
    _mav_put_int16_t(buf, 22, speed);
    _mav_put_int16_t(buf, 24, vx);
    _mav_put_int16_t(buf, 26, vy);
    _mav_put_int16_t(buf, 28, vx_sp);
    _mav_put_int16_t(buf, 30, vy_sp);
    _mav_put_uint16_t(buf, 32, vin1);
    _mav_put_int16_t(buf, 34, pout1);
    _mav_put_int16_t(buf, 36, iout1);
    _mav_put_int16_t(buf, 38, rpm1);
    _mav_put_int16_t(buf, 40, motortemp1);
    _mav_put_uint16_t(buf, 42, vin2);
    _mav_put_int16_t(buf, 44, pout2);
    _mav_put_int16_t(buf, 46, iout2);
    _mav_put_int16_t(buf, 48, rpm2);
    _mav_put_int16_t(buf, 50, motortemp2);
    _mav_put_uint16_t(buf, 52, vin3);
    _mav_put_int16_t(buf, 54, pout3);
    _mav_put_int16_t(buf, 56, iout3);
    _mav_put_int16_t(buf, 58, rpm3);
    _mav_put_int16_t(buf, 60, motortemp3);
    _mav_put_uint16_t(buf, 62, vin4);
    _mav_put_int16_t(buf, 64, pout4);
    _mav_put_int16_t(buf, 66, iout4);
    _mav_put_int16_t(buf, 68, rpm4);
    _mav_put_int16_t(buf, 70, motortemp4);
    _mav_put_uint16_t(buf, 72, vin5);
    _mav_put_int16_t(buf, 74, pout5);
    _mav_put_int16_t(buf, 76, iout5);
    _mav_put_int16_t(buf, 78, rpm5);
    _mav_put_int16_t(buf, 80, motortemp5);
    _mav_put_uint16_t(buf, 82, vin6);
    _mav_put_int16_t(buf, 84, pout6);
    _mav_put_int16_t(buf, 86, iout6);
    _mav_put_int16_t(buf, 88, rpm6);
    _mav_put_int16_t(buf, 90, motortemp6);
    _mav_put_int16_t(buf, 92, angleLeft);
    _mav_put_int16_t(buf, 94, angleRight);
    _mav_put_int16_t(buf, 96, angleLeftSP);
    _mav_put_int16_t(buf, 98, angleRightSP);
    _mav_put_int16_t(buf, 100, imuTemp);
    _mav_put_int16_t(buf, 102, pilotThrottle);
    _mav_put_int16_t(buf, 104, pilotRotation);
    _mav_put_int16_t(buf, 106, pilotLateral);
    _mav_put_int16_t(buf, 108, pilotPitch);
    _mav_put_int16_t(buf, 110, outThrottleLeft);
    _mav_put_int16_t(buf, 112, outThrottleRight);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_YACHT_HUD_LEN);
#else
    mavlink_yacht_hud_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.heading_sp = heading_sp;
    packet.yawspeed = yawspeed;
    packet.yawspeed_sp = yawspeed_sp;
    packet.RTKYaw = RTKYaw;
    packet.magYaw = magYaw;
    packet.course = course;
    packet.speed = speed;
    packet.vx = vx;
    packet.vy = vy;
    packet.vx_sp = vx_sp;
    packet.vy_sp = vy_sp;
    packet.vin1 = vin1;
    packet.pout1 = pout1;
    packet.iout1 = iout1;
    packet.rpm1 = rpm1;
    packet.motortemp1 = motortemp1;
    packet.vin2 = vin2;
    packet.pout2 = pout2;
    packet.iout2 = iout2;
    packet.rpm2 = rpm2;
    packet.motortemp2 = motortemp2;
    packet.vin3 = vin3;
    packet.pout3 = pout3;
    packet.iout3 = iout3;
    packet.rpm3 = rpm3;
    packet.motortemp3 = motortemp3;
    packet.vin4 = vin4;
    packet.pout4 = pout4;
    packet.iout4 = iout4;
    packet.rpm4 = rpm4;
    packet.motortemp4 = motortemp4;
    packet.vin5 = vin5;
    packet.pout5 = pout5;
    packet.iout5 = iout5;
    packet.rpm5 = rpm5;
    packet.motortemp5 = motortemp5;
    packet.vin6 = vin6;
    packet.pout6 = pout6;
    packet.iout6 = iout6;
    packet.rpm6 = rpm6;
    packet.motortemp6 = motortemp6;
    packet.angleLeft = angleLeft;
    packet.angleRight = angleRight;
    packet.angleLeftSP = angleLeftSP;
    packet.angleRightSP = angleRightSP;
    packet.imuTemp = imuTemp;
    packet.pilotThrottle = pilotThrottle;
    packet.pilotRotation = pilotRotation;
    packet.pilotLateral = pilotLateral;
    packet.pilotPitch = pilotPitch;
    packet.outThrottleLeft = outThrottleLeft;
    packet.outThrottleRight = outThrottleRight;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_YACHT_HUD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_YACHT_HUD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
}

/**
 * @brief Pack a yacht_hud message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [cdeg] roll
 * @param pitch [cdeg] pitch
 * @param heading [cdeg] heading
 * @param heading_sp [cdeg] heading set-point
 * @param yawspeed [cdeg/s] Yaw angular speed
 * @param yawspeed_sp [cdeg/s] Yaw angular speed set-point
 * @param RTKYaw [cdeg] RTKYaw
 * @param magYaw [cdeg] MagYaw
 * @param course [cdeg] course of velocity
 * @param speed [cm/s] horizontal speed
 * @param vx [cm/s] front speed
 * @param vy [cm/s] right speed
 * @param vx_sp [cm/s] front speed set-point
 * @param vy_sp [cm/s] right speed set-point
 * @param vin1 [V] motor 1 inout voltage
 * @param pout1 [10W] motor 1 output power
 * @param iout1 [dA] motor 1 output current
 * @param rpm1 [rpm] motor 1 rpm
 * @param motortemp1 [cdegC] motor 1 temperature
 * @param vin2 [V] motor 2 inout voltage
 * @param pout2 [10W] motor 2 output power
 * @param iout2 [dA] motor 2 output current
 * @param rpm2 [rpm] motor 2 rpm
 * @param motortemp2 [cdegC] motor 2 temperature
 * @param vin3 [V] motor 3 inout voltage
 * @param pout3 [10W] motor 3 output power
 * @param iout3 [dA] motor 3 output current
 * @param rpm3 [rpm] motor 3 rpm
 * @param motortemp3 [cdegC] motor 3 temperature
 * @param vin4 [V] motor 4 inout voltage
 * @param pout4 [10W] motor 4 output power
 * @param iout4 [dA] motor 4 output current
 * @param rpm4 [rpm] motor 4 rpm
 * @param motortemp4 [cdegC] motor 4 temperature
 * @param vin5 [V] motor 5 inout voltage
 * @param pout5 [10W] motor 5 output power
 * @param iout5 [dA] motor 5 output current
 * @param rpm5 [rpm] motor 5 rpm
 * @param motortemp5 [cdegC] motor 5 temperature
 * @param vin6 [V] motor 6 inout voltage
 * @param pout6 [10W] motor 6 output power
 * @param iout6 [dA] motor 6 output current
 * @param rpm6 [rpm] motor 6 rpm
 * @param motortemp6 [cdegC] motor 6 temperature
 * @param angleLeft [0.55cdeg] angle of left propeller
 * @param angleRight [0.55cdeg] angle of right propeller
 * @param angleLeftSP [0.55cdeg] angle set-point of left propeller
 * @param angleRightSP [0.55cdeg] angle set-point of right propeller
 * @param imuTemp [cdegC] Temperature
 * @param pilotThrottle [‰] pilot throttle input from rc
 * @param pilotRotation [‰] pilot rotation input from rc
 * @param pilotLateral [‰] pilot lateral input from rc
 * @param pilotPitch [‰] pilot pitch input from rc
 * @param outThrottleLeft [‰] output throttle input from rc
 * @param outThrottleRight [‰] output throttle input from rc
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_yacht_hud_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int16_t roll, int16_t pitch, uint16_t heading, uint16_t heading_sp, int16_t yawspeed, int16_t yawspeed_sp, uint16_t RTKYaw, uint16_t magYaw, uint16_t course, int16_t speed, int16_t vx, int16_t vy, int16_t vx_sp, int16_t vy_sp, uint16_t vin1, int16_t pout1, int16_t iout1, int16_t rpm1, int16_t motortemp1, uint16_t vin2, int16_t pout2, int16_t iout2, int16_t rpm2, int16_t motortemp2, uint16_t vin3, int16_t pout3, int16_t iout3, int16_t rpm3, int16_t motortemp3, uint16_t vin4, int16_t pout4, int16_t iout4, int16_t rpm4, int16_t motortemp4, uint16_t vin5, int16_t pout5, int16_t iout5, int16_t rpm5, int16_t motortemp5, uint16_t vin6, int16_t pout6, int16_t iout6, int16_t rpm6, int16_t motortemp6, int16_t angleLeft, int16_t angleRight, int16_t angleLeftSP, int16_t angleRightSP, int16_t imuTemp, int16_t pilotThrottle, int16_t pilotRotation, int16_t pilotLateral, int16_t pilotPitch, int16_t outThrottleLeft, int16_t outThrottleRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_YACHT_HUD_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, pitch);
    _mav_put_uint16_t(buf, 8, heading);
    _mav_put_uint16_t(buf, 10, heading_sp);
    _mav_put_int16_t(buf, 12, yawspeed);
    _mav_put_int16_t(buf, 14, yawspeed_sp);
    _mav_put_uint16_t(buf, 16, RTKYaw);
    _mav_put_uint16_t(buf, 18, magYaw);
    _mav_put_uint16_t(buf, 20, course);
    _mav_put_int16_t(buf, 22, speed);
    _mav_put_int16_t(buf, 24, vx);
    _mav_put_int16_t(buf, 26, vy);
    _mav_put_int16_t(buf, 28, vx_sp);
    _mav_put_int16_t(buf, 30, vy_sp);
    _mav_put_uint16_t(buf, 32, vin1);
    _mav_put_int16_t(buf, 34, pout1);
    _mav_put_int16_t(buf, 36, iout1);
    _mav_put_int16_t(buf, 38, rpm1);
    _mav_put_int16_t(buf, 40, motortemp1);
    _mav_put_uint16_t(buf, 42, vin2);
    _mav_put_int16_t(buf, 44, pout2);
    _mav_put_int16_t(buf, 46, iout2);
    _mav_put_int16_t(buf, 48, rpm2);
    _mav_put_int16_t(buf, 50, motortemp2);
    _mav_put_uint16_t(buf, 52, vin3);
    _mav_put_int16_t(buf, 54, pout3);
    _mav_put_int16_t(buf, 56, iout3);
    _mav_put_int16_t(buf, 58, rpm3);
    _mav_put_int16_t(buf, 60, motortemp3);
    _mav_put_uint16_t(buf, 62, vin4);
    _mav_put_int16_t(buf, 64, pout4);
    _mav_put_int16_t(buf, 66, iout4);
    _mav_put_int16_t(buf, 68, rpm4);
    _mav_put_int16_t(buf, 70, motortemp4);
    _mav_put_uint16_t(buf, 72, vin5);
    _mav_put_int16_t(buf, 74, pout5);
    _mav_put_int16_t(buf, 76, iout5);
    _mav_put_int16_t(buf, 78, rpm5);
    _mav_put_int16_t(buf, 80, motortemp5);
    _mav_put_uint16_t(buf, 82, vin6);
    _mav_put_int16_t(buf, 84, pout6);
    _mav_put_int16_t(buf, 86, iout6);
    _mav_put_int16_t(buf, 88, rpm6);
    _mav_put_int16_t(buf, 90, motortemp6);
    _mav_put_int16_t(buf, 92, angleLeft);
    _mav_put_int16_t(buf, 94, angleRight);
    _mav_put_int16_t(buf, 96, angleLeftSP);
    _mav_put_int16_t(buf, 98, angleRightSP);
    _mav_put_int16_t(buf, 100, imuTemp);
    _mav_put_int16_t(buf, 102, pilotThrottle);
    _mav_put_int16_t(buf, 104, pilotRotation);
    _mav_put_int16_t(buf, 106, pilotLateral);
    _mav_put_int16_t(buf, 108, pilotPitch);
    _mav_put_int16_t(buf, 110, outThrottleLeft);
    _mav_put_int16_t(buf, 112, outThrottleRight);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_YACHT_HUD_LEN);
#else
    mavlink_yacht_hud_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.heading_sp = heading_sp;
    packet.yawspeed = yawspeed;
    packet.yawspeed_sp = yawspeed_sp;
    packet.RTKYaw = RTKYaw;
    packet.magYaw = magYaw;
    packet.course = course;
    packet.speed = speed;
    packet.vx = vx;
    packet.vy = vy;
    packet.vx_sp = vx_sp;
    packet.vy_sp = vy_sp;
    packet.vin1 = vin1;
    packet.pout1 = pout1;
    packet.iout1 = iout1;
    packet.rpm1 = rpm1;
    packet.motortemp1 = motortemp1;
    packet.vin2 = vin2;
    packet.pout2 = pout2;
    packet.iout2 = iout2;
    packet.rpm2 = rpm2;
    packet.motortemp2 = motortemp2;
    packet.vin3 = vin3;
    packet.pout3 = pout3;
    packet.iout3 = iout3;
    packet.rpm3 = rpm3;
    packet.motortemp3 = motortemp3;
    packet.vin4 = vin4;
    packet.pout4 = pout4;
    packet.iout4 = iout4;
    packet.rpm4 = rpm4;
    packet.motortemp4 = motortemp4;
    packet.vin5 = vin5;
    packet.pout5 = pout5;
    packet.iout5 = iout5;
    packet.rpm5 = rpm5;
    packet.motortemp5 = motortemp5;
    packet.vin6 = vin6;
    packet.pout6 = pout6;
    packet.iout6 = iout6;
    packet.rpm6 = rpm6;
    packet.motortemp6 = motortemp6;
    packet.angleLeft = angleLeft;
    packet.angleRight = angleRight;
    packet.angleLeftSP = angleLeftSP;
    packet.angleRightSP = angleRightSP;
    packet.imuTemp = imuTemp;
    packet.pilotThrottle = pilotThrottle;
    packet.pilotRotation = pilotRotation;
    packet.pilotLateral = pilotLateral;
    packet.pilotPitch = pilotPitch;
    packet.outThrottleLeft = outThrottleLeft;
    packet.outThrottleRight = outThrottleRight;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_YACHT_HUD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_YACHT_HUD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN);
#endif
}

/**
 * @brief Pack a yacht_hud message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [cdeg] roll
 * @param pitch [cdeg] pitch
 * @param heading [cdeg] heading
 * @param heading_sp [cdeg] heading set-point
 * @param yawspeed [cdeg/s] Yaw angular speed
 * @param yawspeed_sp [cdeg/s] Yaw angular speed set-point
 * @param RTKYaw [cdeg] RTKYaw
 * @param magYaw [cdeg] MagYaw
 * @param course [cdeg] course of velocity
 * @param speed [cm/s] horizontal speed
 * @param vx [cm/s] front speed
 * @param vy [cm/s] right speed
 * @param vx_sp [cm/s] front speed set-point
 * @param vy_sp [cm/s] right speed set-point
 * @param vin1 [V] motor 1 inout voltage
 * @param pout1 [10W] motor 1 output power
 * @param iout1 [dA] motor 1 output current
 * @param rpm1 [rpm] motor 1 rpm
 * @param motortemp1 [cdegC] motor 1 temperature
 * @param vin2 [V] motor 2 inout voltage
 * @param pout2 [10W] motor 2 output power
 * @param iout2 [dA] motor 2 output current
 * @param rpm2 [rpm] motor 2 rpm
 * @param motortemp2 [cdegC] motor 2 temperature
 * @param vin3 [V] motor 3 inout voltage
 * @param pout3 [10W] motor 3 output power
 * @param iout3 [dA] motor 3 output current
 * @param rpm3 [rpm] motor 3 rpm
 * @param motortemp3 [cdegC] motor 3 temperature
 * @param vin4 [V] motor 4 inout voltage
 * @param pout4 [10W] motor 4 output power
 * @param iout4 [dA] motor 4 output current
 * @param rpm4 [rpm] motor 4 rpm
 * @param motortemp4 [cdegC] motor 4 temperature
 * @param vin5 [V] motor 5 inout voltage
 * @param pout5 [10W] motor 5 output power
 * @param iout5 [dA] motor 5 output current
 * @param rpm5 [rpm] motor 5 rpm
 * @param motortemp5 [cdegC] motor 5 temperature
 * @param vin6 [V] motor 6 inout voltage
 * @param pout6 [10W] motor 6 output power
 * @param iout6 [dA] motor 6 output current
 * @param rpm6 [rpm] motor 6 rpm
 * @param motortemp6 [cdegC] motor 6 temperature
 * @param angleLeft [0.55cdeg] angle of left propeller
 * @param angleRight [0.55cdeg] angle of right propeller
 * @param angleLeftSP [0.55cdeg] angle set-point of left propeller
 * @param angleRightSP [0.55cdeg] angle set-point of right propeller
 * @param imuTemp [cdegC] Temperature
 * @param pilotThrottle [‰] pilot throttle input from rc
 * @param pilotRotation [‰] pilot rotation input from rc
 * @param pilotLateral [‰] pilot lateral input from rc
 * @param pilotPitch [‰] pilot pitch input from rc
 * @param outThrottleLeft [‰] output throttle input from rc
 * @param outThrottleRight [‰] output throttle input from rc
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_yacht_hud_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,int16_t roll,int16_t pitch,uint16_t heading,uint16_t heading_sp,int16_t yawspeed,int16_t yawspeed_sp,uint16_t RTKYaw,uint16_t magYaw,uint16_t course,int16_t speed,int16_t vx,int16_t vy,int16_t vx_sp,int16_t vy_sp,uint16_t vin1,int16_t pout1,int16_t iout1,int16_t rpm1,int16_t motortemp1,uint16_t vin2,int16_t pout2,int16_t iout2,int16_t rpm2,int16_t motortemp2,uint16_t vin3,int16_t pout3,int16_t iout3,int16_t rpm3,int16_t motortemp3,uint16_t vin4,int16_t pout4,int16_t iout4,int16_t rpm4,int16_t motortemp4,uint16_t vin5,int16_t pout5,int16_t iout5,int16_t rpm5,int16_t motortemp5,uint16_t vin6,int16_t pout6,int16_t iout6,int16_t rpm6,int16_t motortemp6,int16_t angleLeft,int16_t angleRight,int16_t angleLeftSP,int16_t angleRightSP,int16_t imuTemp,int16_t pilotThrottle,int16_t pilotRotation,int16_t pilotLateral,int16_t pilotPitch,int16_t outThrottleLeft,int16_t outThrottleRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_YACHT_HUD_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, pitch);
    _mav_put_uint16_t(buf, 8, heading);
    _mav_put_uint16_t(buf, 10, heading_sp);
    _mav_put_int16_t(buf, 12, yawspeed);
    _mav_put_int16_t(buf, 14, yawspeed_sp);
    _mav_put_uint16_t(buf, 16, RTKYaw);
    _mav_put_uint16_t(buf, 18, magYaw);
    _mav_put_uint16_t(buf, 20, course);
    _mav_put_int16_t(buf, 22, speed);
    _mav_put_int16_t(buf, 24, vx);
    _mav_put_int16_t(buf, 26, vy);
    _mav_put_int16_t(buf, 28, vx_sp);
    _mav_put_int16_t(buf, 30, vy_sp);
    _mav_put_uint16_t(buf, 32, vin1);
    _mav_put_int16_t(buf, 34, pout1);
    _mav_put_int16_t(buf, 36, iout1);
    _mav_put_int16_t(buf, 38, rpm1);
    _mav_put_int16_t(buf, 40, motortemp1);
    _mav_put_uint16_t(buf, 42, vin2);
    _mav_put_int16_t(buf, 44, pout2);
    _mav_put_int16_t(buf, 46, iout2);
    _mav_put_int16_t(buf, 48, rpm2);
    _mav_put_int16_t(buf, 50, motortemp2);
    _mav_put_uint16_t(buf, 52, vin3);
    _mav_put_int16_t(buf, 54, pout3);
    _mav_put_int16_t(buf, 56, iout3);
    _mav_put_int16_t(buf, 58, rpm3);
    _mav_put_int16_t(buf, 60, motortemp3);
    _mav_put_uint16_t(buf, 62, vin4);
    _mav_put_int16_t(buf, 64, pout4);
    _mav_put_int16_t(buf, 66, iout4);
    _mav_put_int16_t(buf, 68, rpm4);
    _mav_put_int16_t(buf, 70, motortemp4);
    _mav_put_uint16_t(buf, 72, vin5);
    _mav_put_int16_t(buf, 74, pout5);
    _mav_put_int16_t(buf, 76, iout5);
    _mav_put_int16_t(buf, 78, rpm5);
    _mav_put_int16_t(buf, 80, motortemp5);
    _mav_put_uint16_t(buf, 82, vin6);
    _mav_put_int16_t(buf, 84, pout6);
    _mav_put_int16_t(buf, 86, iout6);
    _mav_put_int16_t(buf, 88, rpm6);
    _mav_put_int16_t(buf, 90, motortemp6);
    _mav_put_int16_t(buf, 92, angleLeft);
    _mav_put_int16_t(buf, 94, angleRight);
    _mav_put_int16_t(buf, 96, angleLeftSP);
    _mav_put_int16_t(buf, 98, angleRightSP);
    _mav_put_int16_t(buf, 100, imuTemp);
    _mav_put_int16_t(buf, 102, pilotThrottle);
    _mav_put_int16_t(buf, 104, pilotRotation);
    _mav_put_int16_t(buf, 106, pilotLateral);
    _mav_put_int16_t(buf, 108, pilotPitch);
    _mav_put_int16_t(buf, 110, outThrottleLeft);
    _mav_put_int16_t(buf, 112, outThrottleRight);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_YACHT_HUD_LEN);
#else
    mavlink_yacht_hud_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.heading_sp = heading_sp;
    packet.yawspeed = yawspeed;
    packet.yawspeed_sp = yawspeed_sp;
    packet.RTKYaw = RTKYaw;
    packet.magYaw = magYaw;
    packet.course = course;
    packet.speed = speed;
    packet.vx = vx;
    packet.vy = vy;
    packet.vx_sp = vx_sp;
    packet.vy_sp = vy_sp;
    packet.vin1 = vin1;
    packet.pout1 = pout1;
    packet.iout1 = iout1;
    packet.rpm1 = rpm1;
    packet.motortemp1 = motortemp1;
    packet.vin2 = vin2;
    packet.pout2 = pout2;
    packet.iout2 = iout2;
    packet.rpm2 = rpm2;
    packet.motortemp2 = motortemp2;
    packet.vin3 = vin3;
    packet.pout3 = pout3;
    packet.iout3 = iout3;
    packet.rpm3 = rpm3;
    packet.motortemp3 = motortemp3;
    packet.vin4 = vin4;
    packet.pout4 = pout4;
    packet.iout4 = iout4;
    packet.rpm4 = rpm4;
    packet.motortemp4 = motortemp4;
    packet.vin5 = vin5;
    packet.pout5 = pout5;
    packet.iout5 = iout5;
    packet.rpm5 = rpm5;
    packet.motortemp5 = motortemp5;
    packet.vin6 = vin6;
    packet.pout6 = pout6;
    packet.iout6 = iout6;
    packet.rpm6 = rpm6;
    packet.motortemp6 = motortemp6;
    packet.angleLeft = angleLeft;
    packet.angleRight = angleRight;
    packet.angleLeftSP = angleLeftSP;
    packet.angleRightSP = angleRightSP;
    packet.imuTemp = imuTemp;
    packet.pilotThrottle = pilotThrottle;
    packet.pilotRotation = pilotRotation;
    packet.pilotLateral = pilotLateral;
    packet.pilotPitch = pilotPitch;
    packet.outThrottleLeft = outThrottleLeft;
    packet.outThrottleRight = outThrottleRight;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_YACHT_HUD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_YACHT_HUD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
}

/**
 * @brief Encode a yacht_hud struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param yacht_hud C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_yacht_hud_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_yacht_hud_t* yacht_hud)
{
    return mavlink_msg_yacht_hud_pack(system_id, component_id, msg, yacht_hud->time_boot_ms, yacht_hud->roll, yacht_hud->pitch, yacht_hud->heading, yacht_hud->heading_sp, yacht_hud->yawspeed, yacht_hud->yawspeed_sp, yacht_hud->RTKYaw, yacht_hud->magYaw, yacht_hud->course, yacht_hud->speed, yacht_hud->vx, yacht_hud->vy, yacht_hud->vx_sp, yacht_hud->vy_sp, yacht_hud->vin1, yacht_hud->pout1, yacht_hud->iout1, yacht_hud->rpm1, yacht_hud->motortemp1, yacht_hud->vin2, yacht_hud->pout2, yacht_hud->iout2, yacht_hud->rpm2, yacht_hud->motortemp2, yacht_hud->vin3, yacht_hud->pout3, yacht_hud->iout3, yacht_hud->rpm3, yacht_hud->motortemp3, yacht_hud->vin4, yacht_hud->pout4, yacht_hud->iout4, yacht_hud->rpm4, yacht_hud->motortemp4, yacht_hud->vin5, yacht_hud->pout5, yacht_hud->iout5, yacht_hud->rpm5, yacht_hud->motortemp5, yacht_hud->vin6, yacht_hud->pout6, yacht_hud->iout6, yacht_hud->rpm6, yacht_hud->motortemp6, yacht_hud->angleLeft, yacht_hud->angleRight, yacht_hud->angleLeftSP, yacht_hud->angleRightSP, yacht_hud->imuTemp, yacht_hud->pilotThrottle, yacht_hud->pilotRotation, yacht_hud->pilotLateral, yacht_hud->pilotPitch, yacht_hud->outThrottleLeft, yacht_hud->outThrottleRight);
}

/**
 * @brief Encode a yacht_hud struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yacht_hud C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_yacht_hud_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_yacht_hud_t* yacht_hud)
{
    return mavlink_msg_yacht_hud_pack_chan(system_id, component_id, chan, msg, yacht_hud->time_boot_ms, yacht_hud->roll, yacht_hud->pitch, yacht_hud->heading, yacht_hud->heading_sp, yacht_hud->yawspeed, yacht_hud->yawspeed_sp, yacht_hud->RTKYaw, yacht_hud->magYaw, yacht_hud->course, yacht_hud->speed, yacht_hud->vx, yacht_hud->vy, yacht_hud->vx_sp, yacht_hud->vy_sp, yacht_hud->vin1, yacht_hud->pout1, yacht_hud->iout1, yacht_hud->rpm1, yacht_hud->motortemp1, yacht_hud->vin2, yacht_hud->pout2, yacht_hud->iout2, yacht_hud->rpm2, yacht_hud->motortemp2, yacht_hud->vin3, yacht_hud->pout3, yacht_hud->iout3, yacht_hud->rpm3, yacht_hud->motortemp3, yacht_hud->vin4, yacht_hud->pout4, yacht_hud->iout4, yacht_hud->rpm4, yacht_hud->motortemp4, yacht_hud->vin5, yacht_hud->pout5, yacht_hud->iout5, yacht_hud->rpm5, yacht_hud->motortemp5, yacht_hud->vin6, yacht_hud->pout6, yacht_hud->iout6, yacht_hud->rpm6, yacht_hud->motortemp6, yacht_hud->angleLeft, yacht_hud->angleRight, yacht_hud->angleLeftSP, yacht_hud->angleRightSP, yacht_hud->imuTemp, yacht_hud->pilotThrottle, yacht_hud->pilotRotation, yacht_hud->pilotLateral, yacht_hud->pilotPitch, yacht_hud->outThrottleLeft, yacht_hud->outThrottleRight);
}

/**
 * @brief Encode a yacht_hud struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param yacht_hud C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_yacht_hud_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_yacht_hud_t* yacht_hud)
{
    return mavlink_msg_yacht_hud_pack_status(system_id, component_id, _status, msg,  yacht_hud->time_boot_ms, yacht_hud->roll, yacht_hud->pitch, yacht_hud->heading, yacht_hud->heading_sp, yacht_hud->yawspeed, yacht_hud->yawspeed_sp, yacht_hud->RTKYaw, yacht_hud->magYaw, yacht_hud->course, yacht_hud->speed, yacht_hud->vx, yacht_hud->vy, yacht_hud->vx_sp, yacht_hud->vy_sp, yacht_hud->vin1, yacht_hud->pout1, yacht_hud->iout1, yacht_hud->rpm1, yacht_hud->motortemp1, yacht_hud->vin2, yacht_hud->pout2, yacht_hud->iout2, yacht_hud->rpm2, yacht_hud->motortemp2, yacht_hud->vin3, yacht_hud->pout3, yacht_hud->iout3, yacht_hud->rpm3, yacht_hud->motortemp3, yacht_hud->vin4, yacht_hud->pout4, yacht_hud->iout4, yacht_hud->rpm4, yacht_hud->motortemp4, yacht_hud->vin5, yacht_hud->pout5, yacht_hud->iout5, yacht_hud->rpm5, yacht_hud->motortemp5, yacht_hud->vin6, yacht_hud->pout6, yacht_hud->iout6, yacht_hud->rpm6, yacht_hud->motortemp6, yacht_hud->angleLeft, yacht_hud->angleRight, yacht_hud->angleLeftSP, yacht_hud->angleRightSP, yacht_hud->imuTemp, yacht_hud->pilotThrottle, yacht_hud->pilotRotation, yacht_hud->pilotLateral, yacht_hud->pilotPitch, yacht_hud->outThrottleLeft, yacht_hud->outThrottleRight);
}

/**
 * @brief Send a yacht_hud message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [cdeg] roll
 * @param pitch [cdeg] pitch
 * @param heading [cdeg] heading
 * @param heading_sp [cdeg] heading set-point
 * @param yawspeed [cdeg/s] Yaw angular speed
 * @param yawspeed_sp [cdeg/s] Yaw angular speed set-point
 * @param RTKYaw [cdeg] RTKYaw
 * @param magYaw [cdeg] MagYaw
 * @param course [cdeg] course of velocity
 * @param speed [cm/s] horizontal speed
 * @param vx [cm/s] front speed
 * @param vy [cm/s] right speed
 * @param vx_sp [cm/s] front speed set-point
 * @param vy_sp [cm/s] right speed set-point
 * @param vin1 [V] motor 1 inout voltage
 * @param pout1 [10W] motor 1 output power
 * @param iout1 [dA] motor 1 output current
 * @param rpm1 [rpm] motor 1 rpm
 * @param motortemp1 [cdegC] motor 1 temperature
 * @param vin2 [V] motor 2 inout voltage
 * @param pout2 [10W] motor 2 output power
 * @param iout2 [dA] motor 2 output current
 * @param rpm2 [rpm] motor 2 rpm
 * @param motortemp2 [cdegC] motor 2 temperature
 * @param vin3 [V] motor 3 inout voltage
 * @param pout3 [10W] motor 3 output power
 * @param iout3 [dA] motor 3 output current
 * @param rpm3 [rpm] motor 3 rpm
 * @param motortemp3 [cdegC] motor 3 temperature
 * @param vin4 [V] motor 4 inout voltage
 * @param pout4 [10W] motor 4 output power
 * @param iout4 [dA] motor 4 output current
 * @param rpm4 [rpm] motor 4 rpm
 * @param motortemp4 [cdegC] motor 4 temperature
 * @param vin5 [V] motor 5 inout voltage
 * @param pout5 [10W] motor 5 output power
 * @param iout5 [dA] motor 5 output current
 * @param rpm5 [rpm] motor 5 rpm
 * @param motortemp5 [cdegC] motor 5 temperature
 * @param vin6 [V] motor 6 inout voltage
 * @param pout6 [10W] motor 6 output power
 * @param iout6 [dA] motor 6 output current
 * @param rpm6 [rpm] motor 6 rpm
 * @param motortemp6 [cdegC] motor 6 temperature
 * @param angleLeft [0.55cdeg] angle of left propeller
 * @param angleRight [0.55cdeg] angle of right propeller
 * @param angleLeftSP [0.55cdeg] angle set-point of left propeller
 * @param angleRightSP [0.55cdeg] angle set-point of right propeller
 * @param imuTemp [cdegC] Temperature
 * @param pilotThrottle [‰] pilot throttle input from rc
 * @param pilotRotation [‰] pilot rotation input from rc
 * @param pilotLateral [‰] pilot lateral input from rc
 * @param pilotPitch [‰] pilot pitch input from rc
 * @param outThrottleLeft [‰] output throttle input from rc
 * @param outThrottleRight [‰] output throttle input from rc
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_yacht_hud_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t roll, int16_t pitch, uint16_t heading, uint16_t heading_sp, int16_t yawspeed, int16_t yawspeed_sp, uint16_t RTKYaw, uint16_t magYaw, uint16_t course, int16_t speed, int16_t vx, int16_t vy, int16_t vx_sp, int16_t vy_sp, uint16_t vin1, int16_t pout1, int16_t iout1, int16_t rpm1, int16_t motortemp1, uint16_t vin2, int16_t pout2, int16_t iout2, int16_t rpm2, int16_t motortemp2, uint16_t vin3, int16_t pout3, int16_t iout3, int16_t rpm3, int16_t motortemp3, uint16_t vin4, int16_t pout4, int16_t iout4, int16_t rpm4, int16_t motortemp4, uint16_t vin5, int16_t pout5, int16_t iout5, int16_t rpm5, int16_t motortemp5, uint16_t vin6, int16_t pout6, int16_t iout6, int16_t rpm6, int16_t motortemp6, int16_t angleLeft, int16_t angleRight, int16_t angleLeftSP, int16_t angleRightSP, int16_t imuTemp, int16_t pilotThrottle, int16_t pilotRotation, int16_t pilotLateral, int16_t pilotPitch, int16_t outThrottleLeft, int16_t outThrottleRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_YACHT_HUD_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, pitch);
    _mav_put_uint16_t(buf, 8, heading);
    _mav_put_uint16_t(buf, 10, heading_sp);
    _mav_put_int16_t(buf, 12, yawspeed);
    _mav_put_int16_t(buf, 14, yawspeed_sp);
    _mav_put_uint16_t(buf, 16, RTKYaw);
    _mav_put_uint16_t(buf, 18, magYaw);
    _mav_put_uint16_t(buf, 20, course);
    _mav_put_int16_t(buf, 22, speed);
    _mav_put_int16_t(buf, 24, vx);
    _mav_put_int16_t(buf, 26, vy);
    _mav_put_int16_t(buf, 28, vx_sp);
    _mav_put_int16_t(buf, 30, vy_sp);
    _mav_put_uint16_t(buf, 32, vin1);
    _mav_put_int16_t(buf, 34, pout1);
    _mav_put_int16_t(buf, 36, iout1);
    _mav_put_int16_t(buf, 38, rpm1);
    _mav_put_int16_t(buf, 40, motortemp1);
    _mav_put_uint16_t(buf, 42, vin2);
    _mav_put_int16_t(buf, 44, pout2);
    _mav_put_int16_t(buf, 46, iout2);
    _mav_put_int16_t(buf, 48, rpm2);
    _mav_put_int16_t(buf, 50, motortemp2);
    _mav_put_uint16_t(buf, 52, vin3);
    _mav_put_int16_t(buf, 54, pout3);
    _mav_put_int16_t(buf, 56, iout3);
    _mav_put_int16_t(buf, 58, rpm3);
    _mav_put_int16_t(buf, 60, motortemp3);
    _mav_put_uint16_t(buf, 62, vin4);
    _mav_put_int16_t(buf, 64, pout4);
    _mav_put_int16_t(buf, 66, iout4);
    _mav_put_int16_t(buf, 68, rpm4);
    _mav_put_int16_t(buf, 70, motortemp4);
    _mav_put_uint16_t(buf, 72, vin5);
    _mav_put_int16_t(buf, 74, pout5);
    _mav_put_int16_t(buf, 76, iout5);
    _mav_put_int16_t(buf, 78, rpm5);
    _mav_put_int16_t(buf, 80, motortemp5);
    _mav_put_uint16_t(buf, 82, vin6);
    _mav_put_int16_t(buf, 84, pout6);
    _mav_put_int16_t(buf, 86, iout6);
    _mav_put_int16_t(buf, 88, rpm6);
    _mav_put_int16_t(buf, 90, motortemp6);
    _mav_put_int16_t(buf, 92, angleLeft);
    _mav_put_int16_t(buf, 94, angleRight);
    _mav_put_int16_t(buf, 96, angleLeftSP);
    _mav_put_int16_t(buf, 98, angleRightSP);
    _mav_put_int16_t(buf, 100, imuTemp);
    _mav_put_int16_t(buf, 102, pilotThrottle);
    _mav_put_int16_t(buf, 104, pilotRotation);
    _mav_put_int16_t(buf, 106, pilotLateral);
    _mav_put_int16_t(buf, 108, pilotPitch);
    _mav_put_int16_t(buf, 110, outThrottleLeft);
    _mav_put_int16_t(buf, 112, outThrottleRight);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YACHT_HUD, buf, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
#else
    mavlink_yacht_hud_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.heading = heading;
    packet.heading_sp = heading_sp;
    packet.yawspeed = yawspeed;
    packet.yawspeed_sp = yawspeed_sp;
    packet.RTKYaw = RTKYaw;
    packet.magYaw = magYaw;
    packet.course = course;
    packet.speed = speed;
    packet.vx = vx;
    packet.vy = vy;
    packet.vx_sp = vx_sp;
    packet.vy_sp = vy_sp;
    packet.vin1 = vin1;
    packet.pout1 = pout1;
    packet.iout1 = iout1;
    packet.rpm1 = rpm1;
    packet.motortemp1 = motortemp1;
    packet.vin2 = vin2;
    packet.pout2 = pout2;
    packet.iout2 = iout2;
    packet.rpm2 = rpm2;
    packet.motortemp2 = motortemp2;
    packet.vin3 = vin3;
    packet.pout3 = pout3;
    packet.iout3 = iout3;
    packet.rpm3 = rpm3;
    packet.motortemp3 = motortemp3;
    packet.vin4 = vin4;
    packet.pout4 = pout4;
    packet.iout4 = iout4;
    packet.rpm4 = rpm4;
    packet.motortemp4 = motortemp4;
    packet.vin5 = vin5;
    packet.pout5 = pout5;
    packet.iout5 = iout5;
    packet.rpm5 = rpm5;
    packet.motortemp5 = motortemp5;
    packet.vin6 = vin6;
    packet.pout6 = pout6;
    packet.iout6 = iout6;
    packet.rpm6 = rpm6;
    packet.motortemp6 = motortemp6;
    packet.angleLeft = angleLeft;
    packet.angleRight = angleRight;
    packet.angleLeftSP = angleLeftSP;
    packet.angleRightSP = angleRightSP;
    packet.imuTemp = imuTemp;
    packet.pilotThrottle = pilotThrottle;
    packet.pilotRotation = pilotRotation;
    packet.pilotLateral = pilotLateral;
    packet.pilotPitch = pilotPitch;
    packet.outThrottleLeft = outThrottleLeft;
    packet.outThrottleRight = outThrottleRight;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YACHT_HUD, (const char *)&packet, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
#endif
}

/**
 * @brief Send a yacht_hud message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_yacht_hud_send_struct(mavlink_channel_t chan, const mavlink_yacht_hud_t* yacht_hud)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_yacht_hud_send(chan, yacht_hud->time_boot_ms, yacht_hud->roll, yacht_hud->pitch, yacht_hud->heading, yacht_hud->heading_sp, yacht_hud->yawspeed, yacht_hud->yawspeed_sp, yacht_hud->RTKYaw, yacht_hud->magYaw, yacht_hud->course, yacht_hud->speed, yacht_hud->vx, yacht_hud->vy, yacht_hud->vx_sp, yacht_hud->vy_sp, yacht_hud->vin1, yacht_hud->pout1, yacht_hud->iout1, yacht_hud->rpm1, yacht_hud->motortemp1, yacht_hud->vin2, yacht_hud->pout2, yacht_hud->iout2, yacht_hud->rpm2, yacht_hud->motortemp2, yacht_hud->vin3, yacht_hud->pout3, yacht_hud->iout3, yacht_hud->rpm3, yacht_hud->motortemp3, yacht_hud->vin4, yacht_hud->pout4, yacht_hud->iout4, yacht_hud->rpm4, yacht_hud->motortemp4, yacht_hud->vin5, yacht_hud->pout5, yacht_hud->iout5, yacht_hud->rpm5, yacht_hud->motortemp5, yacht_hud->vin6, yacht_hud->pout6, yacht_hud->iout6, yacht_hud->rpm6, yacht_hud->motortemp6, yacht_hud->angleLeft, yacht_hud->angleRight, yacht_hud->angleLeftSP, yacht_hud->angleRightSP, yacht_hud->imuTemp, yacht_hud->pilotThrottle, yacht_hud->pilotRotation, yacht_hud->pilotLateral, yacht_hud->pilotPitch, yacht_hud->outThrottleLeft, yacht_hud->outThrottleRight);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YACHT_HUD, (const char *)yacht_hud, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
#endif
}

#if MAVLINK_MSG_ID_YACHT_HUD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_yacht_hud_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t roll, int16_t pitch, uint16_t heading, uint16_t heading_sp, int16_t yawspeed, int16_t yawspeed_sp, uint16_t RTKYaw, uint16_t magYaw, uint16_t course, int16_t speed, int16_t vx, int16_t vy, int16_t vx_sp, int16_t vy_sp, uint16_t vin1, int16_t pout1, int16_t iout1, int16_t rpm1, int16_t motortemp1, uint16_t vin2, int16_t pout2, int16_t iout2, int16_t rpm2, int16_t motortemp2, uint16_t vin3, int16_t pout3, int16_t iout3, int16_t rpm3, int16_t motortemp3, uint16_t vin4, int16_t pout4, int16_t iout4, int16_t rpm4, int16_t motortemp4, uint16_t vin5, int16_t pout5, int16_t iout5, int16_t rpm5, int16_t motortemp5, uint16_t vin6, int16_t pout6, int16_t iout6, int16_t rpm6, int16_t motortemp6, int16_t angleLeft, int16_t angleRight, int16_t angleLeftSP, int16_t angleRightSP, int16_t imuTemp, int16_t pilotThrottle, int16_t pilotRotation, int16_t pilotLateral, int16_t pilotPitch, int16_t outThrottleLeft, int16_t outThrottleRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, pitch);
    _mav_put_uint16_t(buf, 8, heading);
    _mav_put_uint16_t(buf, 10, heading_sp);
    _mav_put_int16_t(buf, 12, yawspeed);
    _mav_put_int16_t(buf, 14, yawspeed_sp);
    _mav_put_uint16_t(buf, 16, RTKYaw);
    _mav_put_uint16_t(buf, 18, magYaw);
    _mav_put_uint16_t(buf, 20, course);
    _mav_put_int16_t(buf, 22, speed);
    _mav_put_int16_t(buf, 24, vx);
    _mav_put_int16_t(buf, 26, vy);
    _mav_put_int16_t(buf, 28, vx_sp);
    _mav_put_int16_t(buf, 30, vy_sp);
    _mav_put_uint16_t(buf, 32, vin1);
    _mav_put_int16_t(buf, 34, pout1);
    _mav_put_int16_t(buf, 36, iout1);
    _mav_put_int16_t(buf, 38, rpm1);
    _mav_put_int16_t(buf, 40, motortemp1);
    _mav_put_uint16_t(buf, 42, vin2);
    _mav_put_int16_t(buf, 44, pout2);
    _mav_put_int16_t(buf, 46, iout2);
    _mav_put_int16_t(buf, 48, rpm2);
    _mav_put_int16_t(buf, 50, motortemp2);
    _mav_put_uint16_t(buf, 52, vin3);
    _mav_put_int16_t(buf, 54, pout3);
    _mav_put_int16_t(buf, 56, iout3);
    _mav_put_int16_t(buf, 58, rpm3);
    _mav_put_int16_t(buf, 60, motortemp3);
    _mav_put_uint16_t(buf, 62, vin4);
    _mav_put_int16_t(buf, 64, pout4);
    _mav_put_int16_t(buf, 66, iout4);
    _mav_put_int16_t(buf, 68, rpm4);
    _mav_put_int16_t(buf, 70, motortemp4);
    _mav_put_uint16_t(buf, 72, vin5);
    _mav_put_int16_t(buf, 74, pout5);
    _mav_put_int16_t(buf, 76, iout5);
    _mav_put_int16_t(buf, 78, rpm5);
    _mav_put_int16_t(buf, 80, motortemp5);
    _mav_put_uint16_t(buf, 82, vin6);
    _mav_put_int16_t(buf, 84, pout6);
    _mav_put_int16_t(buf, 86, iout6);
    _mav_put_int16_t(buf, 88, rpm6);
    _mav_put_int16_t(buf, 90, motortemp6);
    _mav_put_int16_t(buf, 92, angleLeft);
    _mav_put_int16_t(buf, 94, angleRight);
    _mav_put_int16_t(buf, 96, angleLeftSP);
    _mav_put_int16_t(buf, 98, angleRightSP);
    _mav_put_int16_t(buf, 100, imuTemp);
    _mav_put_int16_t(buf, 102, pilotThrottle);
    _mav_put_int16_t(buf, 104, pilotRotation);
    _mav_put_int16_t(buf, 106, pilotLateral);
    _mav_put_int16_t(buf, 108, pilotPitch);
    _mav_put_int16_t(buf, 110, outThrottleLeft);
    _mav_put_int16_t(buf, 112, outThrottleRight);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YACHT_HUD, buf, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
#else
    mavlink_yacht_hud_t *packet = (mavlink_yacht_hud_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->heading = heading;
    packet->heading_sp = heading_sp;
    packet->yawspeed = yawspeed;
    packet->yawspeed_sp = yawspeed_sp;
    packet->RTKYaw = RTKYaw;
    packet->magYaw = magYaw;
    packet->course = course;
    packet->speed = speed;
    packet->vx = vx;
    packet->vy = vy;
    packet->vx_sp = vx_sp;
    packet->vy_sp = vy_sp;
    packet->vin1 = vin1;
    packet->pout1 = pout1;
    packet->iout1 = iout1;
    packet->rpm1 = rpm1;
    packet->motortemp1 = motortemp1;
    packet->vin2 = vin2;
    packet->pout2 = pout2;
    packet->iout2 = iout2;
    packet->rpm2 = rpm2;
    packet->motortemp2 = motortemp2;
    packet->vin3 = vin3;
    packet->pout3 = pout3;
    packet->iout3 = iout3;
    packet->rpm3 = rpm3;
    packet->motortemp3 = motortemp3;
    packet->vin4 = vin4;
    packet->pout4 = pout4;
    packet->iout4 = iout4;
    packet->rpm4 = rpm4;
    packet->motortemp4 = motortemp4;
    packet->vin5 = vin5;
    packet->pout5 = pout5;
    packet->iout5 = iout5;
    packet->rpm5 = rpm5;
    packet->motortemp5 = motortemp5;
    packet->vin6 = vin6;
    packet->pout6 = pout6;
    packet->iout6 = iout6;
    packet->rpm6 = rpm6;
    packet->motortemp6 = motortemp6;
    packet->angleLeft = angleLeft;
    packet->angleRight = angleRight;
    packet->angleLeftSP = angleLeftSP;
    packet->angleRightSP = angleRightSP;
    packet->imuTemp = imuTemp;
    packet->pilotThrottle = pilotThrottle;
    packet->pilotRotation = pilotRotation;
    packet->pilotLateral = pilotLateral;
    packet->pilotPitch = pilotPitch;
    packet->outThrottleLeft = outThrottleLeft;
    packet->outThrottleRight = outThrottleRight;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YACHT_HUD, (const char *)packet, MAVLINK_MSG_ID_YACHT_HUD_MIN_LEN, MAVLINK_MSG_ID_YACHT_HUD_LEN, MAVLINK_MSG_ID_YACHT_HUD_CRC);
#endif
}
#endif

#endif

// MESSAGE YACHT_HUD UNPACKING


/**
 * @brief Get field time_boot_ms from yacht_hud message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_yacht_hud_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll from yacht_hud message
 *
 * @return [cdeg] roll
 */
static inline int16_t mavlink_msg_yacht_hud_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field pitch from yacht_hud message
 *
 * @return [cdeg] pitch
 */
static inline int16_t mavlink_msg_yacht_hud_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field heading from yacht_hud message
 *
 * @return [cdeg] heading
 */
static inline uint16_t mavlink_msg_yacht_hud_get_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field heading_sp from yacht_hud message
 *
 * @return [cdeg] heading set-point
 */
static inline uint16_t mavlink_msg_yacht_hud_get_heading_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field yawspeed from yacht_hud message
 *
 * @return [cdeg/s] Yaw angular speed
 */
static inline int16_t mavlink_msg_yacht_hud_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field yawspeed_sp from yacht_hud message
 *
 * @return [cdeg/s] Yaw angular speed set-point
 */
static inline int16_t mavlink_msg_yacht_hud_get_yawspeed_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field RTKYaw from yacht_hud message
 *
 * @return [cdeg] RTKYaw
 */
static inline uint16_t mavlink_msg_yacht_hud_get_RTKYaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field magYaw from yacht_hud message
 *
 * @return [cdeg] MagYaw
 */
static inline uint16_t mavlink_msg_yacht_hud_get_magYaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field course from yacht_hud message
 *
 * @return [cdeg] course of velocity
 */
static inline uint16_t mavlink_msg_yacht_hud_get_course(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field speed from yacht_hud message
 *
 * @return [cm/s] horizontal speed
 */
static inline int16_t mavlink_msg_yacht_hud_get_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field vx from yacht_hud message
 *
 * @return [cm/s] front speed
 */
static inline int16_t mavlink_msg_yacht_hud_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field vy from yacht_hud message
 *
 * @return [cm/s] right speed
 */
static inline int16_t mavlink_msg_yacht_hud_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field vx_sp from yacht_hud message
 *
 * @return [cm/s] front speed set-point
 */
static inline int16_t mavlink_msg_yacht_hud_get_vx_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field vy_sp from yacht_hud message
 *
 * @return [cm/s] right speed set-point
 */
static inline int16_t mavlink_msg_yacht_hud_get_vy_sp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field vin1 from yacht_hud message
 *
 * @return [V] motor 1 inout voltage
 */
static inline uint16_t mavlink_msg_yacht_hud_get_vin1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field pout1 from yacht_hud message
 *
 * @return [10W] motor 1 output power
 */
static inline int16_t mavlink_msg_yacht_hud_get_pout1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field iout1 from yacht_hud message
 *
 * @return [dA] motor 1 output current
 */
static inline int16_t mavlink_msg_yacht_hud_get_iout1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field rpm1 from yacht_hud message
 *
 * @return [rpm] motor 1 rpm
 */
static inline int16_t mavlink_msg_yacht_hud_get_rpm1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field motortemp1 from yacht_hud message
 *
 * @return [cdegC] motor 1 temperature
 */
static inline int16_t mavlink_msg_yacht_hud_get_motortemp1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field vin2 from yacht_hud message
 *
 * @return [V] motor 2 inout voltage
 */
static inline uint16_t mavlink_msg_yacht_hud_get_vin2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  42);
}

/**
 * @brief Get field pout2 from yacht_hud message
 *
 * @return [10W] motor 2 output power
 */
static inline int16_t mavlink_msg_yacht_hud_get_pout2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field iout2 from yacht_hud message
 *
 * @return [dA] motor 2 output current
 */
static inline int16_t mavlink_msg_yacht_hud_get_iout2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  46);
}

/**
 * @brief Get field rpm2 from yacht_hud message
 *
 * @return [rpm] motor 2 rpm
 */
static inline int16_t mavlink_msg_yacht_hud_get_rpm2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field motortemp2 from yacht_hud message
 *
 * @return [cdegC] motor 2 temperature
 */
static inline int16_t mavlink_msg_yacht_hud_get_motortemp2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  50);
}

/**
 * @brief Get field vin3 from yacht_hud message
 *
 * @return [V] motor 3 inout voltage
 */
static inline uint16_t mavlink_msg_yacht_hud_get_vin3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  52);
}

/**
 * @brief Get field pout3 from yacht_hud message
 *
 * @return [10W] motor 3 output power
 */
static inline int16_t mavlink_msg_yacht_hud_get_pout3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Get field iout3 from yacht_hud message
 *
 * @return [dA] motor 3 output current
 */
static inline int16_t mavlink_msg_yacht_hud_get_iout3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  56);
}

/**
 * @brief Get field rpm3 from yacht_hud message
 *
 * @return [rpm] motor 3 rpm
 */
static inline int16_t mavlink_msg_yacht_hud_get_rpm3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  58);
}

/**
 * @brief Get field motortemp3 from yacht_hud message
 *
 * @return [cdegC] motor 3 temperature
 */
static inline int16_t mavlink_msg_yacht_hud_get_motortemp3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  60);
}

/**
 * @brief Get field vin4 from yacht_hud message
 *
 * @return [V] motor 4 inout voltage
 */
static inline uint16_t mavlink_msg_yacht_hud_get_vin4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  62);
}

/**
 * @brief Get field pout4 from yacht_hud message
 *
 * @return [10W] motor 4 output power
 */
static inline int16_t mavlink_msg_yacht_hud_get_pout4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  64);
}

/**
 * @brief Get field iout4 from yacht_hud message
 *
 * @return [dA] motor 4 output current
 */
static inline int16_t mavlink_msg_yacht_hud_get_iout4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  66);
}

/**
 * @brief Get field rpm4 from yacht_hud message
 *
 * @return [rpm] motor 4 rpm
 */
static inline int16_t mavlink_msg_yacht_hud_get_rpm4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  68);
}

/**
 * @brief Get field motortemp4 from yacht_hud message
 *
 * @return [cdegC] motor 4 temperature
 */
static inline int16_t mavlink_msg_yacht_hud_get_motortemp4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  70);
}

/**
 * @brief Get field vin5 from yacht_hud message
 *
 * @return [V] motor 5 inout voltage
 */
static inline uint16_t mavlink_msg_yacht_hud_get_vin5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  72);
}

/**
 * @brief Get field pout5 from yacht_hud message
 *
 * @return [10W] motor 5 output power
 */
static inline int16_t mavlink_msg_yacht_hud_get_pout5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  74);
}

/**
 * @brief Get field iout5 from yacht_hud message
 *
 * @return [dA] motor 5 output current
 */
static inline int16_t mavlink_msg_yacht_hud_get_iout5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  76);
}

/**
 * @brief Get field rpm5 from yacht_hud message
 *
 * @return [rpm] motor 5 rpm
 */
static inline int16_t mavlink_msg_yacht_hud_get_rpm5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  78);
}

/**
 * @brief Get field motortemp5 from yacht_hud message
 *
 * @return [cdegC] motor 5 temperature
 */
static inline int16_t mavlink_msg_yacht_hud_get_motortemp5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  80);
}

/**
 * @brief Get field vin6 from yacht_hud message
 *
 * @return [V] motor 6 inout voltage
 */
static inline uint16_t mavlink_msg_yacht_hud_get_vin6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  82);
}

/**
 * @brief Get field pout6 from yacht_hud message
 *
 * @return [10W] motor 6 output power
 */
static inline int16_t mavlink_msg_yacht_hud_get_pout6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  84);
}

/**
 * @brief Get field iout6 from yacht_hud message
 *
 * @return [dA] motor 6 output current
 */
static inline int16_t mavlink_msg_yacht_hud_get_iout6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  86);
}

/**
 * @brief Get field rpm6 from yacht_hud message
 *
 * @return [rpm] motor 6 rpm
 */
static inline int16_t mavlink_msg_yacht_hud_get_rpm6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  88);
}

/**
 * @brief Get field motortemp6 from yacht_hud message
 *
 * @return [cdegC] motor 6 temperature
 */
static inline int16_t mavlink_msg_yacht_hud_get_motortemp6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  90);
}

/**
 * @brief Get field angleLeft from yacht_hud message
 *
 * @return [0.55cdeg] angle of left propeller
 */
static inline int16_t mavlink_msg_yacht_hud_get_angleLeft(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  92);
}

/**
 * @brief Get field angleRight from yacht_hud message
 *
 * @return [0.55cdeg] angle of right propeller
 */
static inline int16_t mavlink_msg_yacht_hud_get_angleRight(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  94);
}

/**
 * @brief Get field angleLeftSP from yacht_hud message
 *
 * @return [0.55cdeg] angle set-point of left propeller
 */
static inline int16_t mavlink_msg_yacht_hud_get_angleLeftSP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  96);
}

/**
 * @brief Get field angleRightSP from yacht_hud message
 *
 * @return [0.55cdeg] angle set-point of right propeller
 */
static inline int16_t mavlink_msg_yacht_hud_get_angleRightSP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  98);
}

/**
 * @brief Get field imuTemp from yacht_hud message
 *
 * @return [cdegC] Temperature
 */
static inline int16_t mavlink_msg_yacht_hud_get_imuTemp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  100);
}

/**
 * @brief Get field pilotThrottle from yacht_hud message
 *
 * @return [‰] pilot throttle input from rc
 */
static inline int16_t mavlink_msg_yacht_hud_get_pilotThrottle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  102);
}

/**
 * @brief Get field pilotRotation from yacht_hud message
 *
 * @return [‰] pilot rotation input from rc
 */
static inline int16_t mavlink_msg_yacht_hud_get_pilotRotation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  104);
}

/**
 * @brief Get field pilotLateral from yacht_hud message
 *
 * @return [‰] pilot lateral input from rc
 */
static inline int16_t mavlink_msg_yacht_hud_get_pilotLateral(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  106);
}

/**
 * @brief Get field pilotPitch from yacht_hud message
 *
 * @return [‰] pilot pitch input from rc
 */
static inline int16_t mavlink_msg_yacht_hud_get_pilotPitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  108);
}

/**
 * @brief Get field outThrottleLeft from yacht_hud message
 *
 * @return [‰] output throttle input from rc
 */
static inline int16_t mavlink_msg_yacht_hud_get_outThrottleLeft(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  110);
}

/**
 * @brief Get field outThrottleRight from yacht_hud message
 *
 * @return [‰] output throttle input from rc
 */
static inline int16_t mavlink_msg_yacht_hud_get_outThrottleRight(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  112);
}

/**
 * @brief Decode a yacht_hud message into a struct
 *
 * @param msg The message to decode
 * @param yacht_hud C-struct to decode the message contents into
 */
static inline void mavlink_msg_yacht_hud_decode(const mavlink_message_t* msg, mavlink_yacht_hud_t* yacht_hud)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    yacht_hud->time_boot_ms = mavlink_msg_yacht_hud_get_time_boot_ms(msg);
    yacht_hud->roll = mavlink_msg_yacht_hud_get_roll(msg);
    yacht_hud->pitch = mavlink_msg_yacht_hud_get_pitch(msg);
    yacht_hud->heading = mavlink_msg_yacht_hud_get_heading(msg);
    yacht_hud->heading_sp = mavlink_msg_yacht_hud_get_heading_sp(msg);
    yacht_hud->yawspeed = mavlink_msg_yacht_hud_get_yawspeed(msg);
    yacht_hud->yawspeed_sp = mavlink_msg_yacht_hud_get_yawspeed_sp(msg);
    yacht_hud->RTKYaw = mavlink_msg_yacht_hud_get_RTKYaw(msg);
    yacht_hud->magYaw = mavlink_msg_yacht_hud_get_magYaw(msg);
    yacht_hud->course = mavlink_msg_yacht_hud_get_course(msg);
    yacht_hud->speed = mavlink_msg_yacht_hud_get_speed(msg);
    yacht_hud->vx = mavlink_msg_yacht_hud_get_vx(msg);
    yacht_hud->vy = mavlink_msg_yacht_hud_get_vy(msg);
    yacht_hud->vx_sp = mavlink_msg_yacht_hud_get_vx_sp(msg);
    yacht_hud->vy_sp = mavlink_msg_yacht_hud_get_vy_sp(msg);
    yacht_hud->vin1 = mavlink_msg_yacht_hud_get_vin1(msg);
    yacht_hud->pout1 = mavlink_msg_yacht_hud_get_pout1(msg);
    yacht_hud->iout1 = mavlink_msg_yacht_hud_get_iout1(msg);
    yacht_hud->rpm1 = mavlink_msg_yacht_hud_get_rpm1(msg);
    yacht_hud->motortemp1 = mavlink_msg_yacht_hud_get_motortemp1(msg);
    yacht_hud->vin2 = mavlink_msg_yacht_hud_get_vin2(msg);
    yacht_hud->pout2 = mavlink_msg_yacht_hud_get_pout2(msg);
    yacht_hud->iout2 = mavlink_msg_yacht_hud_get_iout2(msg);
    yacht_hud->rpm2 = mavlink_msg_yacht_hud_get_rpm2(msg);
    yacht_hud->motortemp2 = mavlink_msg_yacht_hud_get_motortemp2(msg);
    yacht_hud->vin3 = mavlink_msg_yacht_hud_get_vin3(msg);
    yacht_hud->pout3 = mavlink_msg_yacht_hud_get_pout3(msg);
    yacht_hud->iout3 = mavlink_msg_yacht_hud_get_iout3(msg);
    yacht_hud->rpm3 = mavlink_msg_yacht_hud_get_rpm3(msg);
    yacht_hud->motortemp3 = mavlink_msg_yacht_hud_get_motortemp3(msg);
    yacht_hud->vin4 = mavlink_msg_yacht_hud_get_vin4(msg);
    yacht_hud->pout4 = mavlink_msg_yacht_hud_get_pout4(msg);
    yacht_hud->iout4 = mavlink_msg_yacht_hud_get_iout4(msg);
    yacht_hud->rpm4 = mavlink_msg_yacht_hud_get_rpm4(msg);
    yacht_hud->motortemp4 = mavlink_msg_yacht_hud_get_motortemp4(msg);
    yacht_hud->vin5 = mavlink_msg_yacht_hud_get_vin5(msg);
    yacht_hud->pout5 = mavlink_msg_yacht_hud_get_pout5(msg);
    yacht_hud->iout5 = mavlink_msg_yacht_hud_get_iout5(msg);
    yacht_hud->rpm5 = mavlink_msg_yacht_hud_get_rpm5(msg);
    yacht_hud->motortemp5 = mavlink_msg_yacht_hud_get_motortemp5(msg);
    yacht_hud->vin6 = mavlink_msg_yacht_hud_get_vin6(msg);
    yacht_hud->pout6 = mavlink_msg_yacht_hud_get_pout6(msg);
    yacht_hud->iout6 = mavlink_msg_yacht_hud_get_iout6(msg);
    yacht_hud->rpm6 = mavlink_msg_yacht_hud_get_rpm6(msg);
    yacht_hud->motortemp6 = mavlink_msg_yacht_hud_get_motortemp6(msg);
    yacht_hud->angleLeft = mavlink_msg_yacht_hud_get_angleLeft(msg);
    yacht_hud->angleRight = mavlink_msg_yacht_hud_get_angleRight(msg);
    yacht_hud->angleLeftSP = mavlink_msg_yacht_hud_get_angleLeftSP(msg);
    yacht_hud->angleRightSP = mavlink_msg_yacht_hud_get_angleRightSP(msg);
    yacht_hud->imuTemp = mavlink_msg_yacht_hud_get_imuTemp(msg);
    yacht_hud->pilotThrottle = mavlink_msg_yacht_hud_get_pilotThrottle(msg);
    yacht_hud->pilotRotation = mavlink_msg_yacht_hud_get_pilotRotation(msg);
    yacht_hud->pilotLateral = mavlink_msg_yacht_hud_get_pilotLateral(msg);
    yacht_hud->pilotPitch = mavlink_msg_yacht_hud_get_pilotPitch(msg);
    yacht_hud->outThrottleLeft = mavlink_msg_yacht_hud_get_outThrottleLeft(msg);
    yacht_hud->outThrottleRight = mavlink_msg_yacht_hud_get_outThrottleRight(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_YACHT_HUD_LEN? msg->len : MAVLINK_MSG_ID_YACHT_HUD_LEN;
        memset(yacht_hud, 0, MAVLINK_MSG_ID_YACHT_HUD_LEN);
    memcpy(yacht_hud, _MAV_PAYLOAD(msg), len);
#endif
}

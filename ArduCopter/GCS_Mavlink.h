#pragma once

#include <GCS_MAVLink/GCS.h>

class GCS_MAVLINK_Copter : public GCS_MAVLINK
{

public:

    void data_stream_send(void) override;

    void send_attitude(void);
    void send_current_waypoint(void);
    void send_extended_status1(void);
    void send_heartbeat(void);
    void send_hwstatus(void);
    void send_limits_status(void);
    void send_location(void);
    void send_nav_controller_output(void);
    void send_pid_tuning(void);
    void send_radio_out(void);
    void send_rangefinder(void);
    void send_rpm(void);
    void send_servo_out(void);
    void send_simstate(void);
    void send_vfr_hud(void);

protected:

    uint32_t telem_delay() const override;

private:

    void handleMessage(mavlink_message_t * msg) override;
    bool handle_guided_request(AP_Mission::Mission_Command &cmd) override;
    void handle_change_alt_request(AP_Mission::Mission_Command &cmd) override;
    bool try_send_message(enum ap_message id) override;
};

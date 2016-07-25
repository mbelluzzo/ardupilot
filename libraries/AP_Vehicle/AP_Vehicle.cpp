/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

#include "AP_Vehicle.h"

/*
 * Notifies a status update to notifiable objects.
 *
 * Should be called at 50Hz
 */
void AP_Vehicle::update_notify(void)
{
    notify.update();
}

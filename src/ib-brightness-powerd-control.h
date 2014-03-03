/*
 * Copyright 2014 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *     Y.C Cheng <yc.cheng@canonical.com>
 */

#ifndef __IB_BRIGHTNESS_POWERD_CONTROL_H__
#define __IB_BRIGHTNESS_POWERD_CONTROL_H__

#include <gio/gio.h>
GDBusProxy* powerd_get_proxy();

typedef struct _IbBrightnessPowerdControl IbBrightnessPowerdControl;

IbBrightnessPowerdControl* ib_brightness_powerd_control_new (GDBusProxy* powerd_proxy);
void                       ib_brightness_powerd_control_set_value (IbBrightnessPowerdControl* self, gint value);
gint                       ib_brightness_powerd_control_get_value (IbBrightnessPowerdControl* self);
gint                       ib_brightness_powerd_control_get_max_value (IbBrightnessPowerdControl* self);
void                       ib_brightness_powerd_control_free (IbBrightnessPowerdControl *self);

#endif

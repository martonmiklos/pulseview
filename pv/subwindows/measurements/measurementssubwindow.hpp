/*
 * This file is part of the PulseView project.
 *
 * Copyright (C) 2019 Miklós Márton martonmiklosqdev@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MEASUREMENTSSUBWINDOW_H
#define MEASUREMENTSSUBWINDOW_H

#include "pv/session.hpp"
#include "pv/subwindows/subwindowbase.hpp"

namespace pv {
namespace subwindows {
namespace measurements {

class MeasurementsSubWindow : public SubWindowBase
{
	Q_OBJECT
public:
	explicit MeasurementsSubWindow(Session &session, QWidget *parent = nullptr);
};


} // namespace measurements
} // namespace subwindows
} // namespace pv

#endif // MEASUREMENTSSUBWINDOW_H

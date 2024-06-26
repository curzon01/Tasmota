#
# Matter_Plugin_9_Virt_Sensor_Air_Quality.be - implements the behavior for a Virtual Air Quality Sensor
#
# Copyright (C) 2023  Stephan Hadinger & Theo Arends
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

import matter

# Matter plug-in for core behavior

#@ solidify:Matter_Plugin_Virt_Sensor_Air_Quality,weak

class Matter_Plugin_Virt_Sensor_Air_Quality : Matter_Plugin_Sensor_Air_Quality
  static var TYPE = "v_airquality"                  # name of the plug-in in json
  static var DISPLAY_NAME = "v.Air Quality"         # display name of the plug-in
  static var ARG  = ""                              # no arg for virtual device
  static var ARG_HINT = "_Not used_"                # Hint for entering the Argument (inside 'placeholder')
  static var VIRTUAL = true                         # virtual device
end
matter.Plugin_Virt_Sensor_Air_Quality = Matter_Plugin_Virt_Sensor_Air_Quality

#
# Copyright (C) 2020 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Audio
PRODUCT_PROPERTY_OVERRIDES += \
    af.fast_track_multiplier=1 \
    audio_hal.force_voice_config=wide
	
# Bluetooth
PRODUCT_PROPERTY_OVERRIDES += \
    persist.bluetooth.disableabsvol=true

# Display
PRODUCT_PROPERTY_OVERRIDES += \
    ro.opengles.version=196610 \
    ro.hardware.egl=mali \
    ro.hardware.vulkan=mali

# HWC
PRODUCT_PROPERTY_OVERRIDES += \
    debug.sf.latch_unsignaled=1 \
    debug.sf.disable_backpressure=1 \
    debug.hwc.winupdate=1

# Wifi / WiFi Display / Miracast
PRODUCT_PROPERTY_OVERRIDES += \
    wifi.interface=wlan0 \
    wlan.wfd.hdcp=disable \
    net.tethering.noprovisioning=true \
    ro.hdmi.enable=true \
    ro.hdmi.mirror.enable=true \
    wifi.direct.interface=p2p-dev-wlan0

# Define default initial receive window size in segments.
PRODUCT_PROPERTY_OVERRIDES += \
    net.tcp.default_init_rwnd=60

# Burn-in protection
PRODUCT_PROPERTY_OVERRIDES += \
    ro.systemui.burn_in_protection=true

# Treble
PRODUCT_PROPERTY_OVERRIDES += \
    persist.media.treble_omx=false

# Camera
PRODUCT_PROPERTY_OVERRIDES += \
    camera2.portability.force_api=1

# Boot directly from charger mode
PRODUCT_PROPERTY_OVERRIDES += \
    ro.enable_boot_charger_mode=1

# Enable ADB Debugging By Default & Disable USB Debugging Popup
PRODUCT_PROPERTY_OVERRIDES += \
    persist.service.adb.enable=1 \
    persist.service.debuggable=1 \
    persist.sys.usb.config=mtp,adb

# ADB Insecure
PRODUCT_PROPERTY_OVERRIDES += \
    ro.secure=0 \
    ro.adb.secure=0 \
    ro.debuggable=1

# USB
PRODUCT_PROPERTY_OVERRIDES += \
    sys.usb.ffs.aio_compat=1
#    persist.sys.usb.config=mtp

# First API Level
PRODUCT_PROPERTY_OVERRIDES += \
    ro.product.first_api_level=19

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
    telephony.lteOnCdmaDevice=0 \
    persist.radio.sib16_support=0 \
    ro.ril.telephony.mqanelements=6 \
    ro.use_data_netmgrd=false \
    persist.data.netmgrd.qos.enable=false \
    ro.ril.hsxpa=1 \
    ro.ril.gprsclass=10 \
    persist.data.netmgrd.qos.enable=false \
    ro.use_data_netmgrd=false \
    ro.ril.force_eri_from_xml=true \
    ro.telephony.mms_data_profile=5 \
    ro.gsm.sim.operator.iso-country=false

# Disable codec2
PRODUCT_PROPERTY_OVERRIDES += \
    debug.stagefright.ccodec=0 \
    debug.stagefright.omx_default_rank.sw-audio=1 \
    debug.stagefright.omx_default_rank=0

# Widevine
PRODUCT_PROPERTY_OVERRIDES += \
    drm.service.enabled=true

# Disable oem unlock
PRODUCT_PROPERTY_OVERRIDES += \
    ro.oem_unlock_supported=false

# Configstore
PRODUCT_PROPERTY_OVERRIDES += \
    ro.surface_flinger.max_frame_buffer_acquired_buffers=3

# SLSI
PRODUCT_PROPERTY_OVERRIDES += \
    debug.slsi_platform=1





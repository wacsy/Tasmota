<picture>
  <source media="(prefers-color-scheme: dark)" srcset="./tools/logo/TASMOTA_FullLogo_Vector_White.svg">
  <img alt="Logo" src="./tools/logo/TASMOTA_FullLogo_Vector.svg" align="right" height="76">
</picture>

# RELEASE NOTES

## Migration Information

**This version removes support for direct migration from versions before v8.1.0 (Doris)**

See [migration path](https://tasmota.github.io/docs/Upgrading#migration-path) for instructions how to migrate to a major version.

**Do not upgrade from minimal to minimal version. It will most likely fail at some point and will require flashing via serial.** If you do have to use minimal versions, always OTA to a full version of the same release before applying next minimal version.

Pay attention to the following version breaks due to dynamic settings updates:

1. Migrate to **Sonoff-Tasmota 3.9.x**
2. Migrate to **Sonoff-Tasmota 4.x**
3. Migrate to **Sonoff-Tasmota 5.14** (http://ota.tasmota.com/tasmota/release_5.14.0/sonoff.bin) - NOTICE underscore as a dash is not supported in older versions
4. Migrate to **Sonoff-Tasmota 6.7.1** (http://ota.tasmota.com/tasmota/release_6.7.1/sonoff.bin) - NOTICE underscore as a dash is not supported in older versions
5. Migrate to **Tasmota 7.2.0** (http://ota.tasmota.com/tasmota/release-7.2.0/tasmota.bin)

--- Major change in parameter storage layout ---

6. Migrate to **Tasmota 8.5.1** (http://ota.tasmota.com/tasmota/release-8.5.1/tasmota.bin)

--- Major change in internal GPIO function representation ---

7. Migrate to **Tasmota 9.1** (http://ota.tasmota.com/tasmota/release-9.1.0/tasmota.bin.gz)
8. Upgrade to **latest release** (http://ota.tasmota.com/tasmota/release/tasmota.bin.gz)

While fallback or downgrading is common practice it was never supported due to Settings additions or changes in newer releases. Starting with release **v9.1.0 Imogen** the internal GPIO function representation has changed in such a way that fallback is only possible to the latest GPIO configuration before installing **v9.1.0**.

## Supported Core versions

This release will be supported from ESP8266/Arduino library Core version **2.7.4.9** due to reported security and stability issues on previous Core version. This will also support gzipped binaries.

This release will be supported from ESP32/Arduino library Core version **2.0.8**.

Support of ESP8266 Core versions before 2.7.4.9 and ESP32 Core versions before 2.0.8 have been removed.

## Support of TLS

In addition to TLS using fingerprints now also user supplied CA certs, AWS IoT and Azure IoT is supported. Read [full documentation](https://tasmota.github.io/docs/AWS-IoT)

## Initial configuration tools

For initial configuration this release supports Webserver based **WifiManager** or **Serial** based command interface.

## Initial installation

Easy initial installation of Tasmota can be performed using the [Tasmota WebInstaller](https://tasmota.github.io/install/).

## Provided Binary Downloads

### ESP8266 or ESP8285 based
The following binary downloads have been compiled with ESP8266/Arduino library core version **2.7.4.9**.

- **tasmota.bin** = The Tasmota version with most drivers for 1M+ flash. **RECOMMENDED RELEASE BINARY**
- **tasmota-4M.bin** = The Tasmota version with most drivers and filesystem for 4M+ flash.
- **tasmota-AD.bin** to **tasmota-VN.bin** = The Tasmota version in different languages for 1M+ flash.
- **tasmota-lite.bin** = The Lite version without most drivers and sensors for 1M+ flash.
- **tasmota-knx.bin** = The Knx version without some features but adds KNX support for 1M+ flash.
- **tasmota-sensors.bin** = The Sensors version adds more useful sensors for 1M+ flash.
- **tasmota-ir.bin** = The InfraRed Receiver and transmitter version allowing all available protocols provided by library IRremoteESP8266 but without most other features for 1M+ flash.
- **tasmota-display.bin** = The Display version without Energy Monitoring but adds display support for 1M+ flash.
- **tasmota-zbbridge.bin** = The dedicated Sonoff Zigbee Bridge version for 2M+ flash.
- **tasmota-zigbee.bin** = The dedicated cc25xx Zigbee Bridge version for 4M+ flash.

Above binaries are also available as gzipped version allowing faster uploads.

Latest released binaries can be downloaded from
- https://github.com/arendst/Tasmota-firmware/tree/main/release-firmware
- http://ota.tasmota.com/tasmota/release

Historical binaries can be downloaded from
- http://ota.tasmota.com/tasmota/release-12.5.0

The latter links can be used for OTA upgrades too like ``OtaUrl http://ota.tasmota.com/tasmota/release/tasmota.bin.gz``

### ESP32, ESP32-C3, ESP32-S2 and ESP32-S3 based
The following binary downloads have been compiled with ESP32/Arduino library core version **2.0.8**.

- **tasmota32.bin** = The Tasmota version with most drivers including additional sensors and KNX for 4M+ flash.  **RECOMMENDED RELEASE BINARY**
- **tasmota32xy.bin** = The Tasmota version with most drivers including additional sensors and KNX for ESP32-C3/S2/S3 and 4M+ flash.
- **tasmota32xycdc.bin** = The Tasmota version with most drivers including additional sensors and KNX for ESP32-C3/S2/S3 with serial over embedded USB CDC only and 4M+ flash.
- **tasmota32solo1.bin** = The Tasmota version with most drivers including additional sensors and KNX for single core ESP32 and 4M+ flash.
- **tasmota32-AD.bin** to **tasmota32-VN.bin** = The Tasmota version in different languages for 4M+ flash.
- **tasmota32-bluetooth.bin** = The Bluetooth version adds BLE support for 4M+ flash.
- **tasmota32-display.bin** = The Display version without Energy Monitoring but adds display support for 4M+ flash.
- **tasmota32-ir.bin** = The InfraRed Receiver and transmitter version allowing all available protocols provided by library IRremoteESP8266 but without most other features for 4M+ flash.
- **tasmota32-lvgl.bin** = The LVGL version adds Light and Versatile Graphics Library (LVGL) display support for 4M+ flash.
- **tasmota32-nspanel.bin** = The Sonoff NSPanel Smart Scene Wall Switch version with HASPmota display support.
- **tasmota32-webcam.bin** = The Webcam version adds webcam support for 4M+ flash.
- **tasmota32-zbbridgepro.bin** - The Sonoff Zigbee Bridge Pro version with CC2652P firmware load support.

Latest released binaries can be downloaded from
- https://github.com/arendst/Tasmota-firmware/tree/main/release-firmware
- https://ota.tasmota.com/tasmota32/release

Historical binaries can be downloaded from
- https://ota.tasmota.com/tasmota32/release-12.5.0

The latter links can be used for OTA upgrades too like ``OtaUrl https://ota.tasmota.com/tasmota32/release/tasmota32.bin``

## Additional information

[List](MODULES.md) of embedded modules.

[Complete list](BUILDS.md) of available feature and sensors.


## Changelog v12.5.0.1
### Added
- Command ``SetOption152 0/1`` to select two (0 = default) pin bistable or one (1) pin latching relay control [#18386](https://github.com/arendst/Tasmota/issues/18386)
- Matter sensors Humidity, Pressure, Illuminance [#18441](https://github.com/arendst/Tasmota/issues/18441)
- Matter allow `Matter#Initialized` rule once the device is configured [#18451](https://github.com/arendst/Tasmota/issues/18451)
- Matter UI to change endpoints configuration [#18498](https://github.com/arendst/Tasmota/issues/18498)
- Matter support for Shutters (without Tilt) [#18509](https://github.com/arendst/Tasmota/issues/18509)

### Breaking Changed

### Changed
- ESP32 Framework (Core) from v2.0.7 to v2.0.8
- Refactored Zero Cross Dimmer [#18481](https://github.com/arendst/Tasmota/issues/18481)

### Fixed
- TuyaMcu v1 sequence fix [#17625](https://github.com/arendst/Tasmota/issues/17625)
- SEN5X floats and units [#17961](https://github.com/arendst/Tasmota/issues/17961)
- Energytotals cannot be set to negative values [#17965](https://github.com/arendst/Tasmota/issues/17965)
- SR04 driver single pin ultrasonic sensor detection [#17966](https://github.com/arendst/Tasmota/issues/17966)
- IR panasonic protocol regression from v12.0.2.4 [#18013](https://github.com/arendst/Tasmota/issues/18013)
- EnergyTotal divided twice during minimal upgrade step regression from v12.3.1.3 [#18024](https://github.com/arendst/Tasmota/issues/18024)
- TuyaMcu v1 timer integer overflow [#18048](https://github.com/arendst/Tasmota/issues/18048)
- PZEM energy monitor stabilize period on larger configs [#18103](https://github.com/arendst/Tasmota/issues/18103)
- Rule topic comparison [#18144](https://github.com/arendst/Tasmota/issues/18144)
- Refactor energy monitoring reducing stack usage and solve inherent exceptions and watchdogs [#18164](https://github.com/arendst/Tasmota/issues/18164)
- ESP32 ``Upload``, ``Upgrade``, ``WebGetConfig``, ``WebQuery`` and ``WebSend`` random HTTP(S) connection timeout set to 5 sec (commit 542eca3)
- ESP32 energy period shows kWh value instead of Wh regression from v12.3.1.5 [#15856](https://github.com/arendst/Tasmota/issues/15856)
- ESP32 energy monitoring set StartTotalTime regression from v12.3.1.5 [#18385](https://github.com/arendst/Tasmota/issues/18385)
- ESP8266 Energy Export Active no update regression from v12.3.1.3
- NovaSDS GUI values [#18444](https://github.com/arendst/Tasmota/issues/18444)
- Berry fix rules for string comparisons [#18464](https://github.com/arendst/Tasmota/issues/18464)

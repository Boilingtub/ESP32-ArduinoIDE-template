PORT=/dev/ttyUSB0 
FQBN=esp32:esp32:esp32
#SKETCH=PSD/
BAUDRATE=115200
main: build
build:
	arduino-cli compile --fqbn $(FQBN) $(SKETCH)
flash:
	arduino-cli upload --port $(PORT) --fqbn $(FQBN) $(SKETCH) 
monitor:
	arduino-cli monitor --port $(PORT) --fqbn $(FQBN) --config $(BAUDRATE) 
init_new:
	arduino-cli sketch init $(SKETCH)
	cd $(SKETCH)

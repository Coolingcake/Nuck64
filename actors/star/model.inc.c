Lights1 star_crown_lights = gdSPDefLights1(
	0x7E, 0x61, 0x24,
	0xFC, 0xC3, 0x48, 0x28, 0x28, 0x28);

Gfx star_nomright_ci8_aligner[] = {gsSPEndDisplayList()};
u8 star_nomright_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x05, 0x05, 0x06, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x06, 0x07, 0x09, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x0a, 0x0b, 0x0b, 0x0b, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x05, 0x05, 0x05, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x09, 0x0a, 0x0c, 0x0d, 0x0d, 0x0e, 0x0e, 
	0x0f, 0x0d, 0x10, 0x10, 0x0b, 0x0b, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x05, 0x05, 0x05, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x09, 0x0c, 0x11, 0x0e, 0x12, 0x12, 0x13, 0x13, 
	0x14, 0x12, 0x15, 0x0e, 0x0d, 0x10, 0x0b, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x05, 0x05, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x11, 0x12, 0x13, 0x16, 0x17, 0x18, 0x18, 
	0x18, 0x19, 0x16, 0x13, 0x15, 0x0f, 0x10, 0x0b, 
	0x1a, 0x08, 0x08, 0x08, 0x08, 0x08, 0x05, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x1b, 0x1c, 0x18, 0x1d, 0x1e, 0x1f, 0x1f, 
	0x1f, 0x20, 0x21, 0x22, 0x16, 0x14, 0x0e, 0x10, 
	0x0b, 0x08, 0x08, 0x08, 0x08, 0x08, 0x05, 0x05, 
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x23, 0x1c, 0x24, 0x25, 0x1f, 0x26, 0x27, 0x28, 
	0x28, 0x27, 0x29, 0x1f, 0x21, 0x19, 0x14, 0x15, 
	0x10, 0x0b, 0x08, 0x08, 0x08, 0x08, 0x05, 0x05, 
	0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x2a, 0x17, 0x25, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 
	0x2f, 0x2e, 0x2d, 0x28, 0x30, 0x1e, 0x19, 0x14, 
	0x0f, 0x10, 0x0b, 0x08, 0x08, 0x08, 0x05, 0x05, 
	0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1b, 0x24, 0x1f, 0x27, 0x2d, 0x2f, 0x31, 0x32, 
	0x32, 0x32, 0x31, 0x2e, 0x28, 0x30, 0x21, 0x16, 
	0x12, 0x0f, 0x0b, 0x08, 0x08, 0x08, 0x05, 0x05, 
	0x05, 0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x33, 0x25, 0x2b, 0x34, 0x2f, 0x31, 0x35, 0x36, 
	0x36, 0x36, 0x35, 0x31, 0x2e, 0x28, 0x1f, 0x22, 
	0x13, 0x0e, 0x10, 0x0b, 0x08, 0x08, 0x05, 0x05, 
	0x05, 0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x33, 0x37, 0x26, 0x34, 0x2f, 0x32, 0x36, 0x38, 
	0x39, 0x38, 0x38, 0x35, 0x31, 0x3a, 0x27, 0x1e, 
	0x16, 0x12, 0x0d, 0x0b, 0x08, 0x08, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 
	0x33, 0x37, 0x26, 0x34, 0x31, 0x35, 0x38, 0x39, 
	0x39, 0x39, 0x39, 0x36, 0x32, 0x2e, 0x28, 0x1f, 
	0x18, 0x14, 0x0f, 0x0a, 0x07, 0x08, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 
	0x33, 0x25, 0x3b, 0x34, 0x31, 0x35, 0x36, 0x39, 
	0x39, 0x39, 0x39, 0x36, 0x32, 0x2f, 0x28, 0x3c, 
	0x22, 0x13, 0x0e, 0x0a, 0x07, 0x08, 0x05, 0x05, 
	0x05, 0x05, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 
	0x3d, 0x3e, 0x3f, 0x2c, 0x40, 0x32, 0x36, 0x38, 
	0x39, 0x39, 0x38, 0x36, 0x32, 0x2f, 0x28, 0x30, 
	0x1d, 0x13, 0x0e, 0x10, 0x07, 0x08, 0x05, 0x05, 
	0x05, 0x05, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 
	0x2a, 0x41, 0x37, 0x26, 0x42, 0x31, 0x32, 0x36, 
	0x38, 0x38, 0x36, 0x35, 0x32, 0x2f, 0x28, 0x1f, 
	0x1d, 0x13, 0x0e, 0x0a, 0x07, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 
	0x23, 0x43, 0x3e, 0x3f, 0x44, 0x45, 0x31, 0x32, 
	0x35, 0x35, 0x35, 0x32, 0x2f, 0x45, 0x27, 0x1f, 
	0x18, 0x13, 0x0e, 0x0a, 0x07, 0x05, 0x05, 0x05, 
	0x05, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 
	0x46, 0x33, 0x41, 0x37, 0x2b, 0x2c, 0x42, 0x2f, 
	0x31, 0x31, 0x31, 0x2f, 0x45, 0x28, 0x30, 0x1e, 
	0x17, 0x1b, 0x0e, 0x0a, 0x07, 0x05, 0x05, 0x05, 
	0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 
	0x47, 0x48, 0x33, 0x41, 0x37, 0x3f, 0x44, 0x49, 
	0x34, 0x45, 0x45, 0x34, 0x2c, 0x26, 0x1f, 0x24, 
	0x1c, 0x12, 0x0d, 0x0a, 0x07, 0x05, 0x05, 0x04, 
	0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 
	0x4a, 0x46, 0x48, 0x33, 0x41, 0x3e, 0x1f, 0x2b, 
	0x26, 0x26, 0x26, 0x26, 0x2b, 0x1f, 0x24, 0x17, 
	0x1b, 0x0e, 0x0c, 0x09, 0x06, 0x05, 0x04, 0x04, 
	0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 
	0x4b, 0x47, 0x46, 0x48, 0x33, 0x43, 0x41, 0x3e, 
	0x37, 0x37, 0x1f, 0x37, 0x25, 0x24, 0x17, 0x1b, 
	0x4c, 0x11, 0x0a, 0x07, 0x06, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x04, 0x03, 0x03, 0x4d, 0x00, 0x00, 
	0x4e, 0x4a, 0x47, 0x4f, 0x23, 0x2a, 0x33, 0x43, 
	0x17, 0x41, 0x41, 0x17, 0x43, 0x1c, 0x1b, 0x4c, 
	0x11, 0x0c, 0x09, 0x06, 0x05, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x03, 0x03, 0x03, 0x50, 0x00, 0x00, 
	0x51, 0x4b, 0x52, 0x4a, 0x47, 0x46, 0x23, 0x2a, 
	0x2a, 0x33, 0x33, 0x33, 0x2a, 0x4c, 0x23, 0x11, 
	0x0c, 0x09, 0x06, 0x06, 0x04, 0x04, 0x04, 0x04, 
	0x03, 0x03, 0x03, 0x03, 0x53, 0x50, 0x00, 0x00, 
	0x53, 0x4e, 0x54, 0x4b, 0x4a, 0x55, 0x47, 0x4f, 
	0x46, 0x23, 0x23, 0x23, 0x11, 0x4f, 0x0c, 0x55, 
	0x09, 0x06, 0x06, 0x04, 0x04, 0x04, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x53, 0x56, 0x00, 0x00, 
	0x57, 0x51, 0x4e, 0x4e, 0x4b, 0x4b, 0x4a, 0x4a, 
	0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x09, 0x58, 
	0x06, 0x59, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x53, 0x53, 0x00, 0x00, 0x00, 
	0x57, 0x57, 0x53, 0x51, 0x4e, 0x4e, 0x4b, 0x4b, 
	0x4b, 0x58, 0x58, 0x58, 0x58, 0x58, 0x59, 0x59, 
	0x59, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x53, 0x53, 0x02, 0x00, 0x00, 0x00, 
	0x5a, 0x57, 0x57, 0x53, 0x51, 0x51, 0x4e, 0x4e, 
	0x4e, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x4e, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x53, 0x53, 0x53, 0x53, 0x5b, 0x00, 0x00, 0x00, 
	0x5a, 0x57, 0x57, 0x57, 0x57, 0x53, 0x53, 0x53, 
	0x51, 0x4e, 0x4e, 0x4e, 0x4e, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x53, 0x53, 0x53, 0x53, 0x53, 
	0x53, 0x53, 0x53, 0x4d, 0x50, 0x00, 0x00, 0x00, 
	0x5a, 0x5a, 0x5a, 0x57, 0x57, 0x57, 0x57, 0x53, 
	0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 
	0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 
	0x53, 0x53, 0x57, 0x4d, 0x5c, 0x00, 0x00, 0x00, 
	0x5d, 0x5a, 0x5a, 0x5a, 0x5a, 0x57, 0x57, 0x57, 
	0x57, 0x57, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 
	0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 
	0x53, 0x57, 0x4d, 0x5b, 0x5e, 0x00, 0x00, 0x00, 
	0x5f, 0x5d, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x57, 
	0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 
	0x57, 0x53, 0x53, 0x53, 0x53, 0x53, 0x57, 0x57, 
	0x57, 0x4d, 0x5b, 0x56, 0x00, 0x00, 0x00, 0x00, 
	0x60, 0x5f, 0x5f, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 
	0x5a, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 
	0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 
	0x4d, 0x5b, 0x56, 0x5e, 0x00, 0x00, 0x00, 0x00, 
	0x60, 0x60, 0x5f, 0x5f, 0x5d, 0x5a, 0x5a, 0x5a, 
	0x5a, 0x5a, 0x5a, 0x5a, 0x57, 0x57, 0x57, 0x57, 
	0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x4d, 
	0x61, 0x61, 0x5c, 0x62, 0x00, 0x00, 0x00, 0x00, 
	0x63, 0x60, 0x60, 0x5f, 0x5f, 0x5f, 0x5d, 0x5d, 
	0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 
	0x57, 0x57, 0x57, 0x57, 0x57, 0x5d, 0x5d, 0x61, 
	0x61, 0x5c, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x63, 0x63, 0x60, 0x60, 0x60, 0x60, 0x5f, 0x5f, 
	0x5f, 0x5d, 0x5d, 0x5d, 0x5d, 0x5a, 0x5a, 0x5a, 
	0x5d, 0x5d, 0x5d, 0x5d, 0x5d, 0x61, 0x61, 0x56, 
	0x64, 0x5e, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x65, 0x63, 0x63, 0x63, 0x60, 0x60, 0x60, 0x60, 
	0x60, 0x5f, 0x5f, 0x5f, 0x5d, 0x5d, 0x5d, 0x5d, 
	0x5d, 0x5d, 0x5d, 0x61, 0x61, 0x61, 0x56, 0x66, 
	0x5e, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x68, 0x65, 0x65, 0x63, 0x63, 0x63, 0x64, 0x60, 
	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 
	0x60, 0x60, 0x60, 0x60, 0x64, 0x64, 0x66, 0x5e, 
	0x67, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x6a, 0x68, 0x65, 0x65, 0x65, 0x63, 0x63, 0x63, 
	0x63, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 
	0x64, 0x64, 0x64, 0x64, 0x66, 0x66, 0x6b, 0x67, 
	0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x6d, 0x6a, 0x6a, 0x6a, 0x65, 0x65, 0x65, 0x65, 
	0x65, 0x63, 0x63, 0x63, 0x63, 0x64, 0x64, 0x64, 
	0x66, 0x66, 0x66, 0x65, 0x6b, 0x6b, 0x67, 0x6c, 
	0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x6f, 0x6d, 0x6d, 0x6a, 0x6a, 0x6a, 0x6a, 0x65, 
	0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 
	0x65, 0x6b, 0x6b, 0x6b, 0x67, 0x62, 0x6c, 0x6e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x70, 0x70, 0x6f, 0x6d, 0x6d, 0x6d, 0x6a, 0x6a, 
	0x6a, 0x6a, 0x6a, 0x6b, 0x6b, 0x6b, 0x6b, 0x6b, 
	0x6b, 0x67, 0x67, 0x6d, 0x71, 0x6c, 0x6e, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x72, 0x70, 0x70, 0x70, 0x70, 0x6d, 0x6d, 0x6d, 
	0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 0x6d, 
	0x6d, 0x71, 0x71, 0x6c, 0x73, 0x6e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x74, 0x75, 0x72, 0x72, 0x70, 0x70, 0x70, 0x70, 
	0x70, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 
	0x6c, 0x72, 0x73, 0x6e, 0x76, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x77, 0x74, 0x74, 0x74, 0x75, 0x72, 0x72, 0x72, 
	0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x73, 
	0x73, 0x6e, 0x77, 0x78, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x79, 0x7a, 0x77, 0x77, 0x74, 0x74, 0x74, 0x74, 
	0x74, 0x74, 0x73, 0x73, 0x73, 0x73, 0x77, 0x77, 
	0x76, 0x76, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7c, 0x79, 0x79, 0x79, 0x79, 0x77, 0x77, 0x77, 
	0x77, 0x77, 0x77, 0x77, 0x77, 0x76, 0x76, 0x7c, 
	0x7b, 0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7e, 0x7f, 0x7f, 0x7c, 0x7c, 0x7c, 0x79, 0x79, 
	0x79, 0x79, 0x7c, 0x7c, 0x7c, 0x7b, 0x7b, 0x80, 
	0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x82, 0x80, 0x80, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 
	0x7e, 0x7e, 0x7e, 0x80, 0x80, 0x7d, 0x81, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x83, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 
	0x84, 0x84, 0x83, 0x83, 0x85, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x86, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 
	0x86, 0x86, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x8a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8a, 0x8a, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx star_nomright_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 star_nomright_ci8_pal_rgba16[] = {
	0x00, 0x00, 0x01, 0xf5, 0x01, 0xfd, 0x02, 0x3f, 
	0x02, 0x7f, 0x02, 0xbf, 0x0a, 0xbf, 0x0a, 0xff, 
	0x02, 0xff, 0x12, 0xff, 0x13, 0x3f, 0x0b, 0x3f, 
	0x1b, 0x3f, 0x1b, 0x7f, 0x23, 0xbf, 0x1b, 0xbf, 
	0x13, 0x7f, 0x23, 0x7f, 0x2c, 0x3f, 0x34, 0x7f, 
	0x2c, 0x7f, 0x23, 0xff, 0x3c, 0xbf, 0x44, 0xbf, 
	0x44, 0xff, 0x3c, 0xff, 0x03, 0x3f, 0x34, 0x3f, 
	0x3c, 0x7f, 0x4d, 0x3f, 0x55, 0x7f, 0x5d, 0xbf, 
	0x55, 0xbf, 0x4d, 0x7f, 0x45, 0x3f, 0x2b, 0xbf, 
	0x4c, 0xff, 0x55, 0x3f, 0x6e, 0x3f, 0x6e, 0x7f, 
	0x76, 0xbf, 0x66, 0x7f, 0x33, 0xff, 0x65, 0xff, 
	0x76, 0x7f, 0x7e, 0xff, 0x87, 0x3f, 0x8f, 0x7f, 
	0x66, 0x3f, 0x97, 0x7f, 0x9f, 0x7f, 0x3c, 0x3f, 
	0x7e, 0xbf, 0xa7, 0x7f, 0xaf, 0x7f, 0x5d, 0x7f, 
	0xb7, 0x7f, 0xbf, 0xbf, 0x7f, 0x3f, 0x6d, 0xff, 
	0x5e, 0x3f, 0x3b, 0xff, 0x54, 0xff, 0x65, 0xbf, 
	0x8f, 0x3f, 0x4c, 0xbf, 0x86, 0xbf, 0x44, 0x7f, 
	0x76, 0x3f, 0x86, 0xff, 0x2b, 0x7f, 0x22, 0xff, 
	0x33, 0xbf, 0x7e, 0x7f, 0x1a, 0xbf, 0x12, 0x7f, 
	0x2b, 0xff, 0x01, 0xbd, 0x0a, 0x3f, 0x23, 0x3f, 
	0x01, 0xb9, 0x09, 0xff, 0x1a, 0x7f, 0x01, 0xff, 
	0x12, 0x3f, 0x1a, 0xff, 0x01, 0x79, 0x01, 0xbf, 
	0x12, 0xbf, 0x0a, 0x7f, 0x01, 0x7f, 0x01, 0xbb, 
	0x01, 0x77, 0x01, 0x7d, 0x01, 0x75, 0x01, 0x3d, 
	0x01, 0x3b, 0x01, 0x7b, 0x01, 0x31, 0x00, 0xf9, 
	0x01, 0x39, 0x00, 0xf7, 0x01, 0x37, 0x01, 0x33, 
	0x00, 0xb7, 0x00, 0xed, 0x00, 0xf5, 0x01, 0x35, 
	0x00, 0xef, 0x00, 0xf3, 0x00, 0xab, 0x00, 0xb3, 
	0x00, 0xb1, 0x00, 0xf1, 0x00, 0xaf, 0x00, 0xad, 
	0x00, 0x6d, 0x00, 0x6f, 0x00, 0xa9, 0x00, 0x6b, 
	0x00, 0xa7, 0x00, 0x69, 0x00, 0x2b, 0x00, 0x65, 
	0x00, 0x67, 0x00, 0x21, 0x00, 0x25, 0x00, 0x27, 
	0x00, 0x23, 0x00, 0x1d, 0x08, 0x23, 0x00, 0x1f, 
	0x08, 0x21, 0x00, 0x1b, 0x08, 0x1b, 0x08, 0x1d, 
	0x08, 0x19, 0x10, 0x17, 0x10, 0x15, 
};

Gfx star_nomleft_ci8_aligner[] = {gsSPEndDisplayList()};
u8 star_nomleft_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0a, 0x0b, 
	0x04, 0x05, 0x06, 0x08, 0x08, 0x0c, 0x0c, 0x0d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x09, 0x0a, 0x0e, 0x04, 0x0f, 
	0x06, 0x06, 0x08, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x11, 0x12, 0x0e, 0x04, 0x0f, 0x06, 
	0x06, 0x13, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x14, 0x11, 0x12, 0x0e, 0x04, 0x0f, 0x06, 0x06, 
	0x13, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x14, 
	0x11, 0x16, 0x0e, 0x04, 0x0f, 0x17, 0x06, 0x13, 
	0x18, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x14, 0x11, 
	0x19, 0x0e, 0x1a, 0x0f, 0x0f, 0x06, 0x13, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x1b, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1c, 0x1d, 0x1e, 0x19, 
	0x16, 0x0e, 0x1a, 0x0f, 0x17, 0x13, 0x13, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x1b, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1c, 0x1f, 0x20, 0x19, 0x16, 
	0x0e, 0x1a, 0x0f, 0x0f, 0x17, 0x13, 0x18, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x1b, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x21, 0x15, 0x1d, 0x1e, 0x19, 0x16, 
	0x0e, 0x1a, 0x0f, 0x17, 0x17, 0x13, 0x18, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x1b, 0x1b, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x22, 0x23, 0x1d, 0x20, 0x24, 0x16, 0x25, 
	0x1a, 0x1a, 0x0f, 0x17, 0x26, 0x13, 0x18, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x1b, 0x27, 0x28, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x29, 0x21, 0x2a, 0x1d, 0x1e, 0x24, 0x16, 0x25, 
	0x1a, 0x2b, 0x0f, 0x17, 0x26, 0x13, 0x18, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x27, 0x28, 0x2c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x22, 0x1c, 0x1f, 0x2d, 0x1e, 0x24, 0x16, 0x25, 
	0x1a, 0x2b, 0x17, 0x17, 0x26, 0x18, 0x18, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0d, 0x1b, 0x27, 0x2e, 0x2f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 
	0x21, 0x23, 0x1d, 0x2d, 0x1e, 0x16, 0x25, 0x25, 
	0x1a, 0x2b, 0x17, 0x17, 0x26, 0x18, 0x18, 0x18, 
	0x0c, 0x0c, 0x0c, 0x0d, 0x27, 0x28, 0x2c, 0x30, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x32, 
	0x33, 0x2a, 0x1d, 0x34, 0x24, 0x16, 0x25, 0x35, 
	0x1a, 0x2b, 0x17, 0x17, 0x26, 0x36, 0x18, 0x18, 
	0x0c, 0x0c, 0x0c, 0x37, 0x27, 0x2e, 0x38, 0x39, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x3b, 
	0x33, 0x2a, 0x2d, 0x34, 0x24, 0x3c, 0x25, 0x35, 
	0x1a, 0x2b, 0x3d, 0x17, 0x26, 0x36, 0x18, 0x18, 
	0x18, 0x0c, 0x0d, 0x37, 0x27, 0x2e, 0x3e, 0x3f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x32, 0x21, 
	0x23, 0x2a, 0x2d, 0x34, 0x24, 0x3c, 0x25, 0x35, 
	0x1a, 0x2b, 0x3d, 0x17, 0x26, 0x36, 0x18, 0x18, 
	0x18, 0x0c, 0x0d, 0x37, 0x41, 0x38, 0x3e, 0x42, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x32, 0x21, 
	0x23, 0x43, 0x2d, 0x34, 0x24, 0x3c, 0x25, 0x35, 
	0x1a, 0x2b, 0x3d, 0x17, 0x26, 0x36, 0x18, 0x18, 
	0x18, 0x0c, 0x0c, 0x37, 0x41, 0x38, 0x3e, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x45, 0x46, 0x3b, 0x33, 
	0x23, 0x43, 0x2d, 0x34, 0x24, 0x3c, 0x25, 0x35, 
	0x35, 0x2b, 0x3d, 0x3d, 0x26, 0x26, 0x36, 0x18, 
	0x18, 0x0c, 0x0c, 0x37, 0x41, 0x38, 0x3e, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x47, 0x3a, 0x3b, 0x33, 
	0x2a, 0x43, 0x2d, 0x34, 0x24, 0x3c, 0x25, 0x25, 
	0x35, 0x2b, 0x3d, 0x3d, 0x26, 0x26, 0x36, 0x18, 
	0x18, 0x0c, 0x0c, 0x37, 0x41, 0x38, 0x3e, 0x44, 
	0x00, 0x00, 0x00, 0x00, 0x48, 0x3a, 0x3b, 0x33, 
	0x2a, 0x43, 0x2d, 0x34, 0x24, 0x3c, 0x25, 0x25, 
	0x35, 0x2b, 0x2b, 0x3d, 0x26, 0x26, 0x36, 0x18, 
	0x18, 0x18, 0x0c, 0x37, 0x41, 0x49, 0x3e, 0x44, 
	0x00, 0x00, 0x00, 0x4a, 0x31, 0x3a, 0x3b, 0x33, 
	0x2a, 0x43, 0x2d, 0x34, 0x24, 0x3c, 0x4b, 0x25, 
	0x35, 0x4c, 0x2b, 0x3d, 0x3d, 0x26, 0x36, 0x36, 
	0x18, 0x18, 0x0c, 0x37, 0x41, 0x49, 0x3e, 0x4d, 
	0x00, 0x00, 0x00, 0x4e, 0x31, 0x32, 0x4f, 0x33, 
	0x50, 0x43, 0x2d, 0x34, 0x51, 0x3c, 0x3c, 0x25, 
	0x35, 0x4c, 0x2b, 0x3d, 0x3d, 0x26, 0x26, 0x36, 
	0x18, 0x18, 0x0c, 0x52, 0x37, 0x2e, 0x53, 0x3f, 
	0x00, 0x00, 0x00, 0x4e, 0x31, 0x32, 0x4f, 0x33, 
	0x54, 0x43, 0x55, 0x34, 0x51, 0x24, 0x3c, 0x25, 
	0x35, 0x35, 0x2b, 0x3d, 0x3d, 0x56, 0x26, 0x36, 
	0x36, 0x18, 0x18, 0x52, 0x37, 0x41, 0x49, 0x39, 
	0x00, 0x00, 0x00, 0x4e, 0x31, 0x32, 0x4f, 0x33, 
	0x54, 0x43, 0x55, 0x34, 0x34, 0x24, 0x3c, 0x4b, 
	0x25, 0x35, 0x4c, 0x2b, 0x3d, 0x56, 0x26, 0x36, 
	0x36, 0x18, 0x18, 0x0c, 0x37, 0x41, 0x49, 0x57, 
	0x00, 0x00, 0x00, 0x47, 0x58, 0x32, 0x3b, 0x59, 
	0x54, 0x2a, 0x43, 0x2d, 0x34, 0x51, 0x3c, 0x4b, 
	0x25, 0x35, 0x4c, 0x2b, 0x3d, 0x3d, 0x56, 0x26, 
	0x36, 0x36, 0x18, 0x18, 0x52, 0x37, 0x41, 0x53, 
	0x00, 0x00, 0x00, 0x47, 0x31, 0x32, 0x3b, 0x59, 
	0x54, 0x50, 0x43, 0x55, 0x34, 0x51, 0x3c, 0x3c, 
	0x4b, 0x35, 0x35, 0x4c, 0x3d, 0x3d, 0x56, 0x26, 
	0x36, 0x36, 0x18, 0x18, 0x0c, 0x52, 0x5a, 0x49, 
	0x00, 0x00, 0x31, 0x47, 0x31, 0x3a, 0x5b, 0x59, 
	0x54, 0x50, 0x43, 0x55, 0x34, 0x51, 0x24, 0x3c, 
	0x4b, 0x25, 0x35, 0x4c, 0x2b, 0x3d, 0x3d, 0x56, 
	0x26, 0x36, 0x36, 0x18, 0x18, 0x52, 0x37, 0x41, 
	0x00, 0x00, 0x4e, 0x47, 0x5c, 0x5d, 0x5b, 0x4f, 
	0x33, 0x50, 0x43, 0x55, 0x2d, 0x34, 0x51, 0x3c, 
	0x4b, 0x4b, 0x35, 0x35, 0x4c, 0x3d, 0x3d, 0x56, 
	0x26, 0x36, 0x36, 0x18, 0x18, 0x18, 0x52, 0x37, 
	0x00, 0x00, 0x4e, 0x47, 0x5c, 0x5d, 0x32, 0x4f, 
	0x59, 0x54, 0x50, 0x43, 0x55, 0x34, 0x51, 0x3c, 
	0x3c, 0x4b, 0x35, 0x35, 0x4c, 0x4c, 0x3d, 0x3d, 
	0x56, 0x26, 0x36, 0x36, 0x18, 0x18, 0x0c, 0x52, 
	0x00, 0x00, 0x58, 0x47, 0x4a, 0x58, 0x32, 0x5e, 
	0x59, 0x54, 0x50, 0x43, 0x55, 0x34, 0x34, 0x51, 
	0x3c, 0x4b, 0x4b, 0x35, 0x35, 0x4c, 0x3d, 0x3d, 
	0x56, 0x56, 0x26, 0x36, 0x36, 0x18, 0x18, 0x0c, 
	0x00, 0x00, 0x00, 0x47, 0x4a, 0x58, 0x32, 0x5b, 
	0x4f, 0x5f, 0x50, 0x60, 0x43, 0x55, 0x34, 0x51, 
	0x61, 0x3c, 0x4b, 0x62, 0x35, 0x4c, 0x4c, 0x3d, 
	0x3d, 0x56, 0x56, 0x36, 0x36, 0x36, 0x18, 0x18, 
	0x00, 0x00, 0x00, 0x47, 0x47, 0x5c, 0x5d, 0x5b, 
	0x4f, 0x59, 0x54, 0x50, 0x43, 0x55, 0x34, 0x51, 
	0x51, 0x3c, 0x4b, 0x4b, 0x35, 0x35, 0x4c, 0x4c, 
	0x3d, 0x3d, 0x56, 0x56, 0x36, 0x36, 0x36, 0x18, 
	0x00, 0x00, 0x00, 0x47, 0x47, 0x5c, 0x5d, 0x32, 
	0x5e, 0x59, 0x5f, 0x50, 0x60, 0x55, 0x55, 0x34, 
	0x51, 0x61, 0x3c, 0x4b, 0x4b, 0x35, 0x35, 0x4c, 
	0x63, 0x3d, 0x3d, 0x56, 0x26, 0x36, 0x36, 0x36, 
	0x00, 0x00, 0x00, 0x47, 0x47, 0x4a, 0x58, 0x64, 
	0x5b, 0x4f, 0x59, 0x54, 0x50, 0x43, 0x55, 0x65, 
	0x34, 0x51, 0x61, 0x3c, 0x4b, 0x62, 0x35, 0x4c, 
	0x4c, 0x3d, 0x3d, 0x56, 0x56, 0x26, 0x36, 0x36, 
	0x00, 0x00, 0x00, 0x47, 0x47, 0x4a, 0x5c, 0x5d, 
	0x5b, 0x5e, 0x59, 0x5f, 0x50, 0x60, 0x43, 0x55, 
	0x34, 0x51, 0x51, 0x3c, 0x4b, 0x4b, 0x62, 0x35, 
	0x4c, 0x4c, 0x3d, 0x3d, 0x56, 0x56, 0x56, 0x36, 
	0x00, 0x00, 0x00, 0x47, 0x47, 0x4a, 0x5c, 0x58, 
	0x64, 0x5b, 0x4f, 0x59, 0x54, 0x50, 0x60, 0x55, 
	0x65, 0x34, 0x51, 0x61, 0x3c, 0x4b, 0x4b, 0x35, 
	0x35, 0x4c, 0x4c, 0x3d, 0x3d, 0x3d, 0x56, 0x26, 
	0x00, 0x00, 0x00, 0x00, 0x47, 0x4a, 0x4a, 0x66, 
	0x5d, 0x32, 0x5e, 0x59, 0x5f, 0x50, 0x50, 0x43, 
	0x55, 0x65, 0x34, 0x51, 0x61, 0x3c, 0x4b, 0x4b, 
	0x35, 0x35, 0x4c, 0x4c, 0x3d, 0x3d, 0x3d, 0x56, 
	0x00, 0x00, 0x00, 0x00, 0x47, 0x4a, 0x4a, 0x5c, 
	0x58, 0x64, 0x5b, 0x5e, 0x59, 0x5f, 0x50, 0x60, 
	0x43, 0x55, 0x65, 0x51, 0x51, 0x61, 0x3c, 0x4b, 
	0x4b, 0x35, 0x35, 0x4c, 0x4c, 0x63, 0x3d, 0x3d, 
	0x00, 0x00, 0x00, 0x00, 0x47, 0x4a, 0x4a, 0x4a, 
	0x66, 0x5d, 0x64, 0x5b, 0x4f, 0x59, 0x5f, 0x50, 
	0x60, 0x55, 0x55, 0x65, 0x51, 0x51, 0x61, 0x3c, 
	0x4b, 0x4b, 0x62, 0x35, 0x4c, 0x4c, 0x4c, 0x3d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x4a, 0x4a, 
	0x5c, 0x66, 0x5d, 0x5b, 0x5e, 0x59, 0x5f, 0x54, 
	0x50, 0x60, 0x55, 0x55, 0x65, 0x51, 0x51, 0x61, 
	0x3c, 0x4b, 0x4b, 0x62, 0x35, 0x4c, 0x4c, 0x4c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x4a, 0x4a, 
	0x4a, 0x5c, 0x5d, 0x64, 0x5b, 0x5e, 0x59, 0x5f, 
	0x50, 0x50, 0x60, 0x55, 0x55, 0x65, 0x51, 0x51, 
	0x61, 0x3c, 0x4b, 0x4b, 0x62, 0x35, 0x35, 0x4c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0x4a, 
	0x4a, 0x4a, 0x66, 0x5d, 0x64, 0x5b, 0x5e, 0x59, 
	0x5f, 0x50, 0x50, 0x60, 0x55, 0x55, 0x65, 0x51, 
	0x51, 0x61, 0x3c, 0x4b, 0x4b, 0x4b, 0x35, 0x35, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x4a, 
	0x4a, 0x4a, 0x5c, 0x66, 0x5d, 0x64, 0x5b, 0x5e, 
	0x59, 0x5f, 0x50, 0x50, 0x60, 0x55, 0x55, 0x65, 
	0x51, 0x51, 0x61, 0x61, 0x3c, 0x4b, 0x4b, 0x62, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 
	0x4a, 0x4a, 0x4a, 0x5c, 0x66, 0x5d, 0x64, 0x5b, 
	0x5e, 0x59, 0x5f, 0x50, 0x50, 0x60, 0x55, 0x55, 
	0x65, 0x34, 0x51, 0x51, 0x61, 0x3c, 0x4b, 0x4b, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 
	0x4a, 0x4a, 0x4a, 0x4a, 0x5c, 0x66, 0x5d, 0x64, 
	0x5b, 0x5e, 0x59, 0x5f, 0x50, 0x50, 0x60, 0x55, 
	0x55, 0x65, 0x65, 0x51, 0x51, 0x51, 0x61, 0x3c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x47, 0x4a, 0x4a, 0x4a, 0x5c, 0x5c, 0x66, 0x64, 
	0x64, 0x5b, 0x5e, 0x59, 0x5f, 0x54, 0x50, 0x60, 
	0x43, 0x55, 0x55, 0x65, 0x34, 0x51, 0x51, 0x61, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x4a, 0x4a, 0x4a, 0x4a, 0x5c, 0x5c, 0x66, 
	0x5d, 0x64, 0x5b, 0x5e, 0x59, 0x5f, 0x5f, 0x50, 
	0x60, 0x60, 0x55, 0x55, 0x65, 0x65, 0x34, 0x51, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x4a, 0x4a, 0x4a, 0x4a, 0x5c, 0x5c, 
	0x66, 0x5d, 0x64, 0x5b, 0x5e, 0x59, 0x59, 0x5f, 
	0x50, 0x50, 0x60, 0x43, 0x55, 0x55, 0x65, 0x34, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x4a, 0x4a, 0x4a, 0x4a, 0x5c, 
	0x5c, 0x66, 0x5d, 0x64, 0x5b, 0x5e, 0x5e, 0x59, 
	0x5f, 0x5f, 0x50, 0x50, 0x60, 0x43, 0x55, 0x55, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x4a, 0x4a, 0x4a, 0x4a, 
	0x5c, 0x5c, 0x66, 0x5d, 0x64, 0x5b, 0x5b, 0x5e, 
	0x59, 0x59, 0x5f, 0x54, 0x50, 0x50, 0x60, 0x43, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0x4a, 0x4a, 
	0x4a, 0x5c, 0x5c, 0x66, 0x66, 0x5d, 0x64, 0x5b, 
	0x5e, 0x5e, 0x59, 0x59, 0x5f, 0x54, 0x50, 0x50, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4a, 0x4a, 
	0x4a, 0x4a, 0x4a, 0x5c, 0x5c, 0x66, 0x5d, 0x64, 
	0x64, 0x5b, 0x5e, 0x5e, 0x59, 0x59, 0x5f, 0x54, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 
	0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x5c, 0x5c, 0x66, 
	0x5d, 0x64, 0x32, 0x5b, 0x5e, 0x5e, 0x4f, 0x59, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x5c, 
	0x5c, 0x66, 0x5d, 0x64, 0x64, 0x5b, 0x5b, 0x5e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 
	0x4a, 0x4a, 0x5c, 0x66, 0x5d, 0x5d, 0x64, 0x32, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x4a, 0x4a, 
	0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x5c, 0x66, 0x58, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x47, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x47, 0x47, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx star_nomleft_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 star_nomleft_ci8_pal_rgba16[] = {
	0x00, 0x00, 0x01, 0xf5, 0x01, 0x6f, 0x01, 0xb3, 
	0x01, 0x77, 0x01, 0xb9, 0x01, 0xbb, 0x01, 0xfb, 
	0x01, 0xfd, 0x01, 0x2d, 0x01, 0x71, 0x01, 0xb5, 
	0x01, 0xff, 0x02, 0x3f, 0x01, 0x75, 0x01, 0x79, 
	0x01, 0x29, 0x01, 0x2f, 0x01, 0x73, 0x01, 0xbd, 
	0x00, 0xeb, 0x00, 0xe7, 0x01, 0x33, 0x01, 0x7b, 
	0x01, 0xbf, 0x01, 0x31, 0x01, 0x37, 0x02, 0x7f, 
	0x00, 0xa5, 0x00, 0xab, 0x00, 0xef, 0x00, 0xe9, 
	0x00, 0xed, 0x00, 0x63, 0x00, 0x61, 0x00, 0xa7, 
	0x00, 0xf1, 0x01, 0x35, 0x01, 0x7d, 0x0a, 0x7f, 
	0x0a, 0xbf, 0x00, 0x5d, 0x00, 0xa9, 0x01, 0x39, 
	0x12, 0xff, 0x00, 0xad, 0x12, 0xbf, 0x1b, 0x3f, 
	0x23, 0x7f, 0x08, 0x19, 0x00, 0x1f, 0x00, 0x65, 
	0x00, 0xaf, 0x00, 0xf7, 0x01, 0x7f, 0x0a, 0x3f, 
	0x1a, 0xff, 0x2b, 0xbf, 0x00, 0x1d, 0x00, 0x21, 
	0x00, 0xf3, 0x01, 0x3b, 0x23, 0x3f, 0x33, 0xff, 
	0x08, 0x15, 0x12, 0x7f, 0x34, 0x3f, 0x00, 0x6b, 
	0x3c, 0x3f, 0x08, 0x11, 0x00, 0x1b, 0x10, 0x15, 
	0x08, 0x17, 0x1a, 0xbf, 0x10, 0x17, 0x00, 0xf5, 
	0x00, 0xf9, 0x3b, 0xff, 0x08, 0x13, 0x00, 0x23, 
	0x00, 0x69, 0x00, 0xb1, 0x09, 0xff, 0x22, 0xff, 
	0x00, 0x67, 0x00, 0x6d, 0x01, 0x3d, 0x2b, 0x7f, 
	0x08, 0x1b, 0x00, 0x25, 0x12, 0x3f, 0x08, 0x21, 
	0x10, 0x19, 0x08, 0x1d, 0x08, 0x23, 0x00, 0x27, 
	0x00, 0x2b, 0x00, 0xb3, 0x00, 0xb7, 0x00, 0xfb, 
	0x08, 0x1f, 0x00, 0x6f, 0x10, 0x1b, 
};

Vtx star_crown_mesh_layer_1_vtx_0[48] = {
	{{{-56, -20, 0},0, {-16, 1008},{0x85, 0x0, 0x21, 0xFF}}},
	{{{-49, -20, 28},0, {-16, 1008},{0x85, 0x0, 0x21, 0xFF}}},
	{{{-49, 35, 28},0, {-16, 1008},{0x85, 0x0, 0x21, 0xFF}}},
	{{{-56, 8, 0},0, {-16, 1008},{0x85, 0x0, 0x21, 0xFF}}},
	{{{49, -20, -28},0, {-16, 1008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{28, -20, -49},0, {-16, 1008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{28, 8, -49},0, {-16, 1008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{49, 35, -28},0, {-16, 1008},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{0, -20, -56},0, {-16, 1008},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{-28, -20, -49},0, {-16, 1008},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{-28, 8, -49},0, {-16, 1008},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{0, 35, -56},0, {-16, 1008},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{28, -20, 49},0, {-16, 1008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{49, -20, 28},0, {-16, 1008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{49, 35, 28},0, {-16, 1008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{28, 8, 49},0, {-16, 1008},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-49, -20, 28},0, {-16, 1008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-28, -20, 49},0, {-16, 1008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-28, 8, 49},0, {-16, 1008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-49, 35, 28},0, {-16, 1008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{28, -20, -49},0, {-16, 1008},{0x21, 0x0, 0x85, 0xFF}}},
	{{{0, -20, -56},0, {-16, 1008},{0x21, 0x0, 0x85, 0xFF}}},
	{{{0, 35, -56},0, {-16, 1008},{0x21, 0x0, 0x85, 0xFF}}},
	{{{28, 8, -49},0, {-16, 1008},{0x21, 0x0, 0x85, 0xFF}}},
	{{{-28, -20, -49},0, {-16, 1008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-49, -20, -28},0, {-16, 1008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-49, 35, -28},0, {-16, 1008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-28, 8, -49},0, {-16, 1008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{49, -20, 28},0, {-16, 1008},{0x7B, 0x0, 0x21, 0xFF}}},
	{{{56, -20, 0},0, {-16, 1008},{0x7B, 0x0, 0x21, 0xFF}}},
	{{{56, 8, 0},0, {-16, 1008},{0x7B, 0x0, 0x21, 0xFF}}},
	{{{49, 35, 28},0, {-16, 1008},{0x7B, 0x0, 0x21, 0xFF}}},
	{{{-28, -20, 49},0, {-16, 1008},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{0, -20, 56},0, {-16, 1008},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{0, 35, 56},0, {-16, 1008},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-28, 8, 49},0, {-16, 1008},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-49, -20, -28},0, {-16, 1008},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{-56, -20, 0},0, {-16, 1008},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{-56, 8, 0},0, {-16, 1008},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{-49, 35, -28},0, {-16, 1008},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{56, -20, 0},0, {-16, 1008},{0x7B, 0x0, 0xDF, 0xFF}}},
	{{{49, -20, -28},0, {-16, 1008},{0x7B, 0x0, 0xDF, 0xFF}}},
	{{{49, 35, -28},0, {-16, 1008},{0x7B, 0x0, 0xDF, 0xFF}}},
	{{{56, 8, 0},0, {-16, 1008},{0x7B, 0x0, 0xDF, 0xFF}}},
	{{{0, -20, 56},0, {-16, 1008},{0x21, 0x0, 0x7B, 0xFF}}},
	{{{28, -20, 49},0, {-16, 1008},{0x21, 0x0, 0x7B, 0xFF}}},
	{{{28, 8, 49},0, {-16, 1008},{0x21, 0x0, 0x7B, 0xFF}}},
	{{{0, 35, 56},0, {-16, 1008},{0x21, 0x0, 0x7B, 0xFF}}},
};

Gfx star_crown_mesh_layer_1_tri_0[] = {
	gsSPVertex(star_crown_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(star_crown_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(star_crown_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx star_nom_001_mesh_layer_4_vtx_0[4] = {
	{{{0, 0, 62},0, {10, 2038},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{62, 0, 62},0, {993, 2038},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{62, 0, -62},0, {993, 10},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, -62},0, {10, 10},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx star_nom_001_mesh_layer_4_tri_0[] = {
	gsSPVertex(star_nom_001_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx star_nom_001_mesh_layer_4_vtx_1[4] = {
	{{{-62, 0, 62},0, {51, 2038},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, 62},0, {1014, 2038},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, -62},0, {1014, 10},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-62, 0, -62},0, {51, 10},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx star_nom_001_mesh_layer_4_tri_1[] = {
	gsSPVertex(star_nom_001_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_star_crown[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(star_crown_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_star_crown[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_star_nomright[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, star_nomright_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 138),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, star_nomright_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_star_nomright[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_star_nomleft[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, star_nomleft_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 102),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, star_nomleft_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_star_nomleft[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx star_crown_mesh_layer_1[] = {
	gsSPDisplayList(mat_star_crown),
	gsSPDisplayList(star_crown_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_star_crown),
	gsSPEndDisplayList(),
};

Gfx star_nom_001_mesh_layer_4[] = {
	gsSPDisplayList(mat_star_nomright),
	gsSPDisplayList(star_nom_001_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_star_nomright),
	gsSPDisplayList(mat_star_nomleft),
	gsSPDisplayList(star_nom_001_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_star_nomleft),
	gsSPEndDisplayList(),
};

Gfx star_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};


Shellcode in hex bytes format:
payload[] = {
    0xFC, 0x48, 0x81, 0xE4, 0xF0, 0xFF, 0xFF, 0xFF, 0xE8, 0xCC, 0x00, 0x00, 0x00, 0x41, 0x51, 0x41,
    0x50, 0x52, 0x51, 0x48, 0x31, 0xD2, 0x56, 0x65, 0x48, 0x8B, 0x52, 0x60, 0x48, 0x8B, 0x52, 0x18,
    0x48, 0x8B, 0x52, 0x20, 0x48, 0x8B, 0x72, 0x50, 0x48, 0x0F, 0xB7, 0x4A, 0x4A, 0x4D, 0x31, 0xC9,
    0x48, 0x31, 0xC0, 0xAC, 0x3C, 0x61, 0x7C, 0x02, 0x2C, 0x20, 0x41, 0xC1, 0xC9, 0x0D, 0x41, 0x01,
    0xC1, 0xE2, 0xED, 0x52, 0x48, 0x8B, 0x52, 0x20, 0x8B, 0x42, 0x3C, 0x41, 0x51, 0x48, 0x01, 0xD0,
    0x66, 0x81, 0x78, 0x18, 0x0B, 0x02, 0x0F, 0x85, 0x72, 0x00, 0x00, 0x00, 0x8B, 0x80, 0x88, 0x00,
    0x00, 0x00, 0x48, 0x85, 0xC0, 0x74, 0x67, 0x48, 0x01, 0xD0, 0x8B, 0x48, 0x18, 0x50, 0x44, 0x8B,
    0x40, 0x20, 0x49, 0x01, 0xD0, 0xE3, 0x56, 0x4D, 0x31, 0xC9, 0x48, 0xFF, 0xC9, 0x41, 0x8B, 0x34,
    0x88, 0x48, 0x01, 0xD6, 0x48, 0x31, 0xC0, 0xAC, 0x41, 0xC1, 0xC9, 0x0D, 0x41, 0x01, 0xC1, 0x38,
    0xE0, 0x75, 0xF1, 0x4C, 0x03, 0x4C, 0x24, 0x08, 0x45, 0x39, 0xD1, 0x75, 0xD8, 0x58, 0x44, 0x8B,
    0x40, 0x24, 0x49, 0x01, 0xD0, 0x66, 0x41, 0x8B, 0x0C, 0x48, 0x44, 0x8B, 0x40, 0x1C, 0x49, 0x01,
    0xD0, 0x41, 0x8B, 0x04, 0x88, 0x48, 0x01, 0xD0, 0x41, 0x58, 0x41, 0x58, 0x5E, 0x59, 0x5A, 0x41,
    0x58, 0x41, 0x59, 0x41, 0x5A, 0x48, 0x83, 0xEC, 0x20, 0x41, 0x52, 0xFF, 0xE0, 0x58, 0x41, 0x59,
    0x5A, 0x48, 0x8B, 0x12, 0xE9, 0x4B, 0xFF, 0xFF, 0xFF, 0x5D, 0xE8, 0x0B, 0x00, 0x00, 0x00, 0x75,
    0x73, 0x65, 0x72, 0x33, 0x32, 0x2E, 0x64, 0x6C, 0x6C, 0x00, 0x59, 0x41, 0xBA, 0x4C, 0x77, 0x26,
    0x07, 0xFF, 0xD5, 0x49, 0xC7, 0xC1, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x11, 0x00, 0x00, 0x00, 0x48,
    0x65, 0x6C, 0x6C, 0x6F, 0x2C, 0x20, 0x66, 0x72, 0x6F, 0x6D, 0x20, 0x4D, 0x53, 0x46, 0x21, 0x00,
    0x5A, 0xE8, 0x0B, 0x00, 0x00, 0x00, 0x4D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x42, 0x6F, 0x78,
    0x00, 0x41, 0x58, 0x48, 0x31, 0xC9, 0x41, 0xBA, 0x45, 0x83, 0x56, 0x07, 0xFF, 0xD5, 0x48, 0x31,
    0xC9, 0x41, 0xBA, 0xF0, 0xB5, 0xA2, 0x56, 0xFF, 0xD5
};

static void femul(uint32_t out[21], const uint32_t in1[21], const uint32_t in2[21]) {
  { const uint32_t x42 = in1[20];
  { const uint32_t x43 = in1[19];
  { const uint32_t x41 = in1[18];
  { const uint32_t x39 = in1[17];
  { const uint32_t x37 = in1[16];
  { const uint32_t x35 = in1[15];
  { const uint32_t x33 = in1[14];
  { const uint32_t x31 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x82 = in2[20];
  { const uint32_t x83 = in2[19];
  { const uint32_t x81 = in2[18];
  { const uint32_t x79 = in2[17];
  { const uint32_t x77 = in2[16];
  { const uint32_t x75 = in2[15];
  { const uint32_t x73 = in2[14];
  { const uint32_t x71 = in2[13];
  { const uint32_t x69 = in2[12];
  { const uint32_t x67 = in2[11];
  { const uint32_t x65 = in2[10];
  { const uint32_t x63 = in2[9];
  { const uint32_t x61 = in2[8];
  { const uint32_t x59 = in2[7];
  { const uint32_t x57 = in2[6];
  { const uint32_t x55 = in2[5];
  { const uint32_t x53 = in2[4];
  { const uint32_t x51 = in2[3];
  { const uint32_t x49 = in2[2];
  { const uint32_t x47 = in2[1];
  { const uint32_t x45 = in2[0];
  { uint64_t x84 = (((uint64_t)x5 * x82) + (((uint64_t)x7 * x83) + ((0x2 * ((uint64_t)x9 * x81)) + (((uint64_t)x11 * x79) + ((0x2 * ((uint64_t)x13 * x77)) + (((uint64_t)x15 * x75) + (((uint64_t)x17 * x73) + (((uint64_t)x19 * x71) + (((uint64_t)x21 * x69) + ((0x2 * ((uint64_t)x23 * x67)) + (((uint64_t)x25 * x65) + ((0x2 * ((uint64_t)x27 * x63)) + (((uint64_t)x29 * x61) + (((uint64_t)x31 * x59) + (((uint64_t)x33 * x57) + (((uint64_t)x35 * x55) + ((0x2 * ((uint64_t)x37 * x53)) + (((uint64_t)x39 * x51) + ((0x2 * ((uint64_t)x41 * x49)) + (((uint64_t)x43 * x47) + ((uint64_t)x42 * x45)))))))))))))))))))));
  { uint64_t x85 = ((((uint64_t)x5 * x83) + ((0x2 * ((uint64_t)x7 * x81)) + ((0x2 * ((uint64_t)x9 * x79)) + ((0x2 * ((uint64_t)x11 * x77)) + ((0x2 * ((uint64_t)x13 * x75)) + (((uint64_t)x15 * x73) + ((0x2 * ((uint64_t)x17 * x71)) + (((uint64_t)x19 * x69) + ((0x2 * ((uint64_t)x21 * x67)) + ((0x2 * ((uint64_t)x23 * x65)) + ((0x2 * ((uint64_t)x25 * x63)) + ((0x2 * ((uint64_t)x27 * x61)) + (((uint64_t)x29 * x59) + ((0x2 * ((uint64_t)x31 * x57)) + (((uint64_t)x33 * x55) + ((0x2 * ((uint64_t)x35 * x53)) + ((0x2 * ((uint64_t)x37 * x51)) + ((0x2 * ((uint64_t)x39 * x49)) + ((0x2 * ((uint64_t)x41 * x47)) + ((uint64_t)x43 * x45)))))))))))))))))))) + (0x1f * (0x2 * ((uint64_t)x42 * x82))));
  { uint64_t x86 = ((((uint64_t)x5 * x81) + (((uint64_t)x7 * x79) + ((0x2 * ((uint64_t)x9 * x77)) + (((uint64_t)x11 * x75) + (((uint64_t)x13 * x73) + (((uint64_t)x15 * x71) + (((uint64_t)x17 * x69) + (((uint64_t)x19 * x67) + (((uint64_t)x21 * x65) + ((0x2 * ((uint64_t)x23 * x63)) + (((uint64_t)x25 * x61) + (((uint64_t)x27 * x59) + (((uint64_t)x29 * x57) + (((uint64_t)x31 * x55) + (((uint64_t)x33 * x53) + (((uint64_t)x35 * x51) + ((0x2 * ((uint64_t)x37 * x49)) + (((uint64_t)x39 * x47) + ((uint64_t)x41 * x45))))))))))))))))))) + (0x1f * (((uint64_t)x43 * x82) + ((uint64_t)x42 * x83))));
  { uint64_t x87 = ((((uint64_t)x5 * x79) + ((0x2 * ((uint64_t)x7 * x77)) + ((0x2 * ((uint64_t)x9 * x75)) + (((uint64_t)x11 * x73) + ((0x2 * ((uint64_t)x13 * x71)) + (((uint64_t)x15 * x69) + ((0x2 * ((uint64_t)x17 * x67)) + (((uint64_t)x19 * x65) + ((0x2 * ((uint64_t)x21 * x63)) + ((0x2 * ((uint64_t)x23 * x61)) + (((uint64_t)x25 * x59) + ((0x2 * ((uint64_t)x27 * x57)) + (((uint64_t)x29 * x55) + ((0x2 * ((uint64_t)x31 * x53)) + (((uint64_t)x33 * x51) + ((0x2 * ((uint64_t)x35 * x49)) + ((0x2 * ((uint64_t)x37 * x47)) + ((uint64_t)x39 * x45)))))))))))))))))) + (0x1f * ((0x2 * ((uint64_t)x41 * x82)) + (((uint64_t)x43 * x83) + (0x2 * ((uint64_t)x42 * x81))))));
  { uint64_t x88 = ((((uint64_t)x5 * x77) + (((uint64_t)x7 * x75) + (((uint64_t)x9 * x73) + (((uint64_t)x11 * x71) + (((uint64_t)x13 * x69) + (((uint64_t)x15 * x67) + (((uint64_t)x17 * x65) + (((uint64_t)x19 * x63) + (((uint64_t)x21 * x61) + (((uint64_t)x23 * x59) + (((uint64_t)x25 * x57) + (((uint64_t)x27 * x55) + (((uint64_t)x29 * x53) + (((uint64_t)x31 * x51) + (((uint64_t)x33 * x49) + (((uint64_t)x35 * x47) + ((uint64_t)x37 * x45))))))))))))))))) + (0x1f * (((uint64_t)x39 * x82) + (((uint64_t)x41 * x83) + (((uint64_t)x43 * x81) + ((uint64_t)x42 * x79))))));
  { uint64_t x89 = ((((uint64_t)x5 * x75) + (((uint64_t)x7 * x73) + ((0x2 * ((uint64_t)x9 * x71)) + (((uint64_t)x11 * x69) + ((0x2 * ((uint64_t)x13 * x67)) + (((uint64_t)x15 * x65) + ((0x2 * ((uint64_t)x17 * x63)) + (((uint64_t)x19 * x61) + (((uint64_t)x21 * x59) + ((0x2 * ((uint64_t)x23 * x57)) + (((uint64_t)x25 * x55) + ((0x2 * ((uint64_t)x27 * x53)) + (((uint64_t)x29 * x51) + ((0x2 * ((uint64_t)x31 * x49)) + (((uint64_t)x33 * x47) + ((uint64_t)x35 * x45)))))))))))))))) + (0x1f * ((0x2 * ((uint64_t)x37 * x82)) + (((uint64_t)x39 * x83) + ((0x2 * ((uint64_t)x41 * x81)) + (((uint64_t)x43 * x79) + (0x2 * ((uint64_t)x42 * x77))))))));
  { uint64_t x90 = ((((uint64_t)x5 * x73) + ((0x2 * ((uint64_t)x7 * x71)) + ((0x2 * ((uint64_t)x9 * x69)) + ((0x2 * ((uint64_t)x11 * x67)) + ((0x2 * ((uint64_t)x13 * x65)) + ((0x2 * ((uint64_t)x15 * x63)) + ((0x2 * ((uint64_t)x17 * x61)) + (((uint64_t)x19 * x59) + ((0x2 * ((uint64_t)x21 * x57)) + ((0x2 * ((uint64_t)x23 * x55)) + ((0x2 * ((uint64_t)x25 * x53)) + ((0x2 * ((uint64_t)x27 * x51)) + ((0x2 * ((uint64_t)x29 * x49)) + ((0x2 * ((uint64_t)x31 * x47)) + ((uint64_t)x33 * x45))))))))))))))) + (0x1f * ((0x2 * ((uint64_t)x35 * x82)) + ((0x2 * ((uint64_t)x37 * x83)) + ((0x2 * ((uint64_t)x39 * x81)) + ((0x2 * ((uint64_t)x41 * x79)) + ((0x2 * ((uint64_t)x43 * x77)) + (0x2 * ((uint64_t)x42 * x75)))))))));
  { uint64_t x91 = ((((uint64_t)x5 * x71) + (((uint64_t)x7 * x69) + ((0x2 * ((uint64_t)x9 * x67)) + (((uint64_t)x11 * x65) + ((0x2 * ((uint64_t)x13 * x63)) + (((uint64_t)x15 * x61) + (((uint64_t)x17 * x59) + (((uint64_t)x19 * x57) + (((uint64_t)x21 * x55) + ((0x2 * ((uint64_t)x23 * x53)) + (((uint64_t)x25 * x51) + ((0x2 * ((uint64_t)x27 * x49)) + (((uint64_t)x29 * x47) + ((uint64_t)x31 * x45)))))))))))))) + (0x1f * (((uint64_t)x33 * x82) + (((uint64_t)x35 * x83) + ((0x2 * ((uint64_t)x37 * x81)) + (((uint64_t)x39 * x79) + ((0x2 * ((uint64_t)x41 * x77)) + (((uint64_t)x43 * x75) + ((uint64_t)x42 * x73)))))))));
  { uint64_t x92 = ((((uint64_t)x5 * x69) + ((0x2 * ((uint64_t)x7 * x67)) + ((0x2 * ((uint64_t)x9 * x65)) + ((0x2 * ((uint64_t)x11 * x63)) + ((0x2 * ((uint64_t)x13 * x61)) + (((uint64_t)x15 * x59) + ((0x2 * ((uint64_t)x17 * x57)) + (((uint64_t)x19 * x55) + ((0x2 * ((uint64_t)x21 * x53)) + ((0x2 * ((uint64_t)x23 * x51)) + ((0x2 * ((uint64_t)x25 * x49)) + ((0x2 * ((uint64_t)x27 * x47)) + ((uint64_t)x29 * x45))))))))))))) + (0x1f * ((0x2 * ((uint64_t)x31 * x82)) + (((uint64_t)x33 * x83) + ((0x2 * ((uint64_t)x35 * x81)) + ((0x2 * ((uint64_t)x37 * x79)) + ((0x2 * ((uint64_t)x39 * x77)) + ((0x2 * ((uint64_t)x41 * x75)) + (((uint64_t)x43 * x73) + (0x2 * ((uint64_t)x42 * x71)))))))))));
  { uint64_t x93 = ((((uint64_t)x5 * x67) + (((uint64_t)x7 * x65) + ((0x2 * ((uint64_t)x9 * x63)) + (((uint64_t)x11 * x61) + (((uint64_t)x13 * x59) + (((uint64_t)x15 * x57) + (((uint64_t)x17 * x55) + (((uint64_t)x19 * x53) + (((uint64_t)x21 * x51) + ((0x2 * ((uint64_t)x23 * x49)) + (((uint64_t)x25 * x47) + ((uint64_t)x27 * x45)))))))))))) + (0x1f * (((uint64_t)x29 * x82) + (((uint64_t)x31 * x83) + (((uint64_t)x33 * x81) + (((uint64_t)x35 * x79) + ((0x2 * ((uint64_t)x37 * x77)) + (((uint64_t)x39 * x75) + (((uint64_t)x41 * x73) + (((uint64_t)x43 * x71) + ((uint64_t)x42 * x69)))))))))));
  { uint64_t x94 = ((((uint64_t)x5 * x65) + ((0x2 * ((uint64_t)x7 * x63)) + ((0x2 * ((uint64_t)x9 * x61)) + (((uint64_t)x11 * x59) + ((0x2 * ((uint64_t)x13 * x57)) + (((uint64_t)x15 * x55) + ((0x2 * ((uint64_t)x17 * x53)) + (((uint64_t)x19 * x51) + ((0x2 * ((uint64_t)x21 * x49)) + ((0x2 * ((uint64_t)x23 * x47)) + ((uint64_t)x25 * x45))))))))))) + (0x1f * ((0x2 * ((uint64_t)x27 * x82)) + (((uint64_t)x29 * x83) + ((0x2 * ((uint64_t)x31 * x81)) + (((uint64_t)x33 * x79) + ((0x2 * ((uint64_t)x35 * x77)) + ((0x2 * ((uint64_t)x37 * x75)) + (((uint64_t)x39 * x73) + ((0x2 * ((uint64_t)x41 * x71)) + (((uint64_t)x43 * x69) + (0x2 * ((uint64_t)x42 * x67)))))))))))));
  { uint64_t x95 = ((((uint64_t)x5 * x63) + (((uint64_t)x7 * x61) + (((uint64_t)x9 * x59) + (((uint64_t)x11 * x57) + (((uint64_t)x13 * x55) + (((uint64_t)x15 * x53) + (((uint64_t)x17 * x51) + (((uint64_t)x19 * x49) + (((uint64_t)x21 * x47) + ((uint64_t)x23 * x45)))))))))) + (0x1f * (((uint64_t)x25 * x82) + (((uint64_t)x27 * x83) + (((uint64_t)x29 * x81) + (((uint64_t)x31 * x79) + (((uint64_t)x33 * x77) + (((uint64_t)x35 * x75) + (((uint64_t)x37 * x73) + (((uint64_t)x39 * x71) + (((uint64_t)x41 * x69) + (((uint64_t)x43 * x67) + ((uint64_t)x42 * x65)))))))))))));
  { uint64_t x96 = ((((uint64_t)x5 * x61) + (((uint64_t)x7 * x59) + ((0x2 * ((uint64_t)x9 * x57)) + (((uint64_t)x11 * x55) + ((0x2 * ((uint64_t)x13 * x53)) + (((uint64_t)x15 * x51) + ((0x2 * ((uint64_t)x17 * x49)) + (((uint64_t)x19 * x47) + ((uint64_t)x21 * x45))))))))) + (0x1f * ((0x2 * ((uint64_t)x23 * x82)) + (((uint64_t)x25 * x83) + ((0x2 * ((uint64_t)x27 * x81)) + (((uint64_t)x29 * x79) + ((0x2 * ((uint64_t)x31 * x77)) + (((uint64_t)x33 * x75) + (((uint64_t)x35 * x73) + ((0x2 * ((uint64_t)x37 * x71)) + (((uint64_t)x39 * x69) + ((0x2 * ((uint64_t)x41 * x67)) + (((uint64_t)x43 * x65) + (0x2 * ((uint64_t)x42 * x63)))))))))))))));
  { uint64_t x97 = ((((uint64_t)x5 * x59) + ((0x2 * ((uint64_t)x7 * x57)) + ((0x2 * ((uint64_t)x9 * x55)) + ((0x2 * ((uint64_t)x11 * x53)) + ((0x2 * ((uint64_t)x13 * x51)) + ((0x2 * ((uint64_t)x15 * x49)) + ((0x2 * ((uint64_t)x17 * x47)) + ((uint64_t)x19 * x45)))))))) + (0x1f * ((0x2 * ((uint64_t)x21 * x82)) + ((0x2 * ((uint64_t)x23 * x83)) + ((0x2 * ((uint64_t)x25 * x81)) + ((0x2 * ((uint64_t)x27 * x79)) + ((0x2 * ((uint64_t)x29 * x77)) + ((0x2 * ((uint64_t)x31 * x75)) + (((uint64_t)x33 * x73) + ((0x2 * ((uint64_t)x35 * x71)) + ((0x2 * ((uint64_t)x37 * x69)) + ((0x2 * ((uint64_t)x39 * x67)) + ((0x2 * ((uint64_t)x41 * x65)) + ((0x2 * ((uint64_t)x43 * x63)) + (0x2 * ((uint64_t)x42 * x61))))))))))))))));
  { uint64_t x98 = ((((uint64_t)x5 * x57) + (((uint64_t)x7 * x55) + ((0x2 * ((uint64_t)x9 * x53)) + (((uint64_t)x11 * x51) + ((0x2 * ((uint64_t)x13 * x49)) + (((uint64_t)x15 * x47) + ((uint64_t)x17 * x45))))))) + (0x1f * (((uint64_t)x19 * x82) + (((uint64_t)x21 * x83) + ((0x2 * ((uint64_t)x23 * x81)) + (((uint64_t)x25 * x79) + ((0x2 * ((uint64_t)x27 * x77)) + (((uint64_t)x29 * x75) + (((uint64_t)x31 * x73) + (((uint64_t)x33 * x71) + (((uint64_t)x35 * x69) + ((0x2 * ((uint64_t)x37 * x67)) + (((uint64_t)x39 * x65) + ((0x2 * ((uint64_t)x41 * x63)) + (((uint64_t)x43 * x61) + ((uint64_t)x42 * x59))))))))))))))));
  { uint64_t x99 = ((((uint64_t)x5 * x55) + ((0x2 * ((uint64_t)x7 * x53)) + ((0x2 * ((uint64_t)x9 * x51)) + ((0x2 * ((uint64_t)x11 * x49)) + ((0x2 * ((uint64_t)x13 * x47)) + ((uint64_t)x15 * x45)))))) + (0x1f * ((0x2 * ((uint64_t)x17 * x82)) + (((uint64_t)x19 * x83) + ((0x2 * ((uint64_t)x21 * x81)) + ((0x2 * ((uint64_t)x23 * x79)) + ((0x2 * ((uint64_t)x25 * x77)) + ((0x2 * ((uint64_t)x27 * x75)) + (((uint64_t)x29 * x73) + ((0x2 * ((uint64_t)x31 * x71)) + (((uint64_t)x33 * x69) + ((0x2 * ((uint64_t)x35 * x67)) + ((0x2 * ((uint64_t)x37 * x65)) + ((0x2 * ((uint64_t)x39 * x63)) + ((0x2 * ((uint64_t)x41 * x61)) + (((uint64_t)x43 * x59) + (0x2 * ((uint64_t)x42 * x57))))))))))))))))));
  { uint64_t x100 = ((((uint64_t)x5 * x53) + (((uint64_t)x7 * x51) + ((0x2 * ((uint64_t)x9 * x49)) + (((uint64_t)x11 * x47) + ((uint64_t)x13 * x45))))) + (0x1f * (((uint64_t)x15 * x82) + (((uint64_t)x17 * x83) + (((uint64_t)x19 * x81) + (((uint64_t)x21 * x79) + ((0x2 * ((uint64_t)x23 * x77)) + (((uint64_t)x25 * x75) + (((uint64_t)x27 * x73) + (((uint64_t)x29 * x71) + (((uint64_t)x31 * x69) + (((uint64_t)x33 * x67) + (((uint64_t)x35 * x65) + ((0x2 * ((uint64_t)x37 * x63)) + (((uint64_t)x39 * x61) + (((uint64_t)x41 * x59) + (((uint64_t)x43 * x57) + ((uint64_t)x42 * x55))))))))))))))))));
  { uint64_t x101 = ((((uint64_t)x5 * x51) + ((0x2 * ((uint64_t)x7 * x49)) + ((0x2 * ((uint64_t)x9 * x47)) + ((uint64_t)x11 * x45)))) + (0x1f * ((0x2 * ((uint64_t)x13 * x82)) + (((uint64_t)x15 * x83) + ((0x2 * ((uint64_t)x17 * x81)) + (((uint64_t)x19 * x79) + ((0x2 * ((uint64_t)x21 * x77)) + ((0x2 * ((uint64_t)x23 * x75)) + (((uint64_t)x25 * x73) + ((0x2 * ((uint64_t)x27 * x71)) + (((uint64_t)x29 * x69) + ((0x2 * ((uint64_t)x31 * x67)) + (((uint64_t)x33 * x65) + ((0x2 * ((uint64_t)x35 * x63)) + ((0x2 * ((uint64_t)x37 * x61)) + (((uint64_t)x39 * x59) + ((0x2 * ((uint64_t)x41 * x57)) + (((uint64_t)x43 * x55) + (0x2 * ((uint64_t)x42 * x53))))))))))))))))))));
  { uint64_t x102 = ((((uint64_t)x5 * x49) + (((uint64_t)x7 * x47) + ((uint64_t)x9 * x45))) + (0x1f * (((uint64_t)x11 * x82) + (((uint64_t)x13 * x83) + (((uint64_t)x15 * x81) + (((uint64_t)x17 * x79) + (((uint64_t)x19 * x77) + (((uint64_t)x21 * x75) + (((uint64_t)x23 * x73) + (((uint64_t)x25 * x71) + (((uint64_t)x27 * x69) + (((uint64_t)x29 * x67) + (((uint64_t)x31 * x65) + (((uint64_t)x33 * x63) + (((uint64_t)x35 * x61) + (((uint64_t)x37 * x59) + (((uint64_t)x39 * x57) + (((uint64_t)x41 * x55) + (((uint64_t)x43 * x53) + ((uint64_t)x42 * x51))))))))))))))))))));
  { uint64_t x103 = ((((uint64_t)x5 * x47) + ((uint64_t)x7 * x45)) + (0x1f * ((0x2 * ((uint64_t)x9 * x82)) + (((uint64_t)x11 * x83) + ((0x2 * ((uint64_t)x13 * x81)) + (((uint64_t)x15 * x79) + ((0x2 * ((uint64_t)x17 * x77)) + (((uint64_t)x19 * x75) + (((uint64_t)x21 * x73) + ((0x2 * ((uint64_t)x23 * x71)) + (((uint64_t)x25 * x69) + ((0x2 * ((uint64_t)x27 * x67)) + (((uint64_t)x29 * x65) + ((0x2 * ((uint64_t)x31 * x63)) + (((uint64_t)x33 * x61) + (((uint64_t)x35 * x59) + ((0x2 * ((uint64_t)x37 * x57)) + (((uint64_t)x39 * x55) + ((0x2 * ((uint64_t)x41 * x53)) + (((uint64_t)x43 * x51) + (0x2 * ((uint64_t)x42 * x49))))))))))))))))))))));
  { uint64_t x104 = (((uint64_t)x5 * x45) + (0x1f * ((0x2 * ((uint64_t)x7 * x82)) + ((0x2 * ((uint64_t)x9 * x83)) + ((0x2 * ((uint64_t)x11 * x81)) + ((0x2 * ((uint64_t)x13 * x79)) + ((0x2 * ((uint64_t)x15 * x77)) + ((0x2 * ((uint64_t)x17 * x75)) + (((uint64_t)x19 * x73) + ((0x2 * ((uint64_t)x21 * x71)) + ((0x2 * ((uint64_t)x23 * x69)) + ((0x2 * ((uint64_t)x25 * x67)) + ((0x2 * ((uint64_t)x27 * x65)) + ((0x2 * ((uint64_t)x29 * x63)) + ((0x2 * ((uint64_t)x31 * x61)) + (((uint64_t)x33 * x59) + ((0x2 * ((uint64_t)x35 * x57)) + ((0x2 * ((uint64_t)x37 * x55)) + ((0x2 * ((uint64_t)x39 * x53)) + ((0x2 * ((uint64_t)x41 * x51)) + ((0x2 * ((uint64_t)x43 * x49)) + (0x2 * ((uint64_t)x42 * x47)))))))))))))))))))))));
  { uint64_t x105 = (x104 >> 0x18);
  { uint32_t x106 = ((uint32_t)x104 & 0xffffff);
  { uint64_t x107 = (x105 + x103);
  { uint64_t x108 = (x107 >> 0x18);
  { uint32_t x109 = ((uint32_t)x107 & 0xffffff);
  { uint64_t x110 = (x108 + x102);
  { uint64_t x111 = (x110 >> 0x17);
  { uint32_t x112 = ((uint32_t)x110 & 0x7fffff);
  { uint64_t x113 = (x111 + x101);
  { uint64_t x114 = (x113 >> 0x18);
  { uint32_t x115 = ((uint32_t)x113 & 0xffffff);
  { uint64_t x116 = (x114 + x100);
  { uint64_t x117 = (x116 >> 0x17);
  { uint32_t x118 = ((uint32_t)x116 & 0x7fffff);
  { uint64_t x119 = (x117 + x99);
  { uint64_t x120 = (x119 >> 0x18);
  { uint32_t x121 = ((uint32_t)x119 & 0xffffff);
  { uint64_t x122 = (x120 + x98);
  { uint64_t x123 = (x122 >> 0x17);
  { uint32_t x124 = ((uint32_t)x122 & 0x7fffff);
  { uint64_t x125 = (x123 + x97);
  { uint64_t x126 = (x125 >> 0x18);
  { uint32_t x127 = ((uint32_t)x125 & 0xffffff);
  { uint64_t x128 = (x126 + x96);
  { uint64_t x129 = (x128 >> 0x18);
  { uint32_t x130 = ((uint32_t)x128 & 0xffffff);
  { uint64_t x131 = (x129 + x95);
  { uint64_t x132 = (x131 >> 0x17);
  { uint32_t x133 = ((uint32_t)x131 & 0x7fffff);
  { uint64_t x134 = (x132 + x94);
  { uint64_t x135 = (x134 >> 0x18);
  { uint32_t x136 = ((uint32_t)x134 & 0xffffff);
  { uint64_t x137 = (x135 + x93);
  { uint64_t x138 = (x137 >> 0x17);
  { uint32_t x139 = ((uint32_t)x137 & 0x7fffff);
  { uint64_t x140 = (x138 + x92);
  { uint64_t x141 = (x140 >> 0x18);
  { uint32_t x142 = ((uint32_t)x140 & 0xffffff);
  { uint64_t x143 = (x141 + x91);
  { uint64_t x144 = (x143 >> 0x17);
  { uint32_t x145 = ((uint32_t)x143 & 0x7fffff);
  { uint64_t x146 = (x144 + x90);
  { uint64_t x147 = (x146 >> 0x18);
  { uint32_t x148 = ((uint32_t)x146 & 0xffffff);
  { uint64_t x149 = (x147 + x89);
  { uint64_t x150 = (x149 >> 0x18);
  { uint32_t x151 = ((uint32_t)x149 & 0xffffff);
  { uint64_t x152 = (x150 + x88);
  { uint64_t x153 = (x152 >> 0x17);
  { uint32_t x154 = ((uint32_t)x152 & 0x7fffff);
  { uint64_t x155 = (x153 + x87);
  { uint64_t x156 = (x155 >> 0x18);
  { uint32_t x157 = ((uint32_t)x155 & 0xffffff);
  { uint64_t x158 = (x156 + x86);
  { uint64_t x159 = (x158 >> 0x17);
  { uint32_t x160 = ((uint32_t)x158 & 0x7fffff);
  { uint64_t x161 = (x159 + x85);
  { uint64_t x162 = (x161 >> 0x18);
  { uint32_t x163 = ((uint32_t)x161 & 0xffffff);
  { uint64_t x164 = (x162 + x84);
  { uint64_t x165 = (x164 >> 0x17);
  { uint32_t x166 = ((uint32_t)x164 & 0x7fffff);
  { uint64_t x167 = (x106 + (0x1f * x165));
  { uint32_t x168 = (uint32_t) (x167 >> 0x18);
  { uint32_t x169 = ((uint32_t)x167 & 0xffffff);
  { uint32_t x170 = (x168 + x109);
  { uint32_t x171 = (x170 >> 0x18);
  { uint32_t x172 = (x170 & 0xffffff);
  out[0] = x169;
  out[1] = x172;
  out[2] = (x171 + x112);
  out[3] = x115;
  out[4] = x118;
  out[5] = x121;
  out[6] = x124;
  out[7] = x127;
  out[8] = x130;
  out[9] = x133;
  out[10] = x136;
  out[11] = x139;
  out[12] = x142;
  out[13] = x145;
  out[14] = x148;
  out[15] = x151;
  out[16] = x154;
  out[17] = x157;
  out[18] = x160;
  out[19] = x163;
  out[20] = x166;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}

// file automatically generated by kram.exe - do not ask


#pragma pack (push, 1)

struct Phoneme
{
  sU16 f1f, f1b;
  sU16 f2f, f2b;
  sU16 f3f, f3b;
  sU16 fnf;
  sS8  a_voicing, a_aspiration, a_frication, a_bypass;
  sS8  a_1, a_2, a_3, a_4, a_n;
  sS8  a_breath, d_breath;
  sS8  duration, rank;
};

#pragma pack (pop)

//  {  490,   60, 1480,   90, 2500,  150,  270,  0,  0,  0,-16,-16,-16,-16,-16,-16,-16,  0,  5, 31}, //  18: end
//  {  280,   60, 1720,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 38, 38, 50,-16,-16,  0,  4, 20}, //  68: zz

  
static Phoneme phonemes[] =
{
  {  490,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 64, 47, 40,-16,-16,  0,  4,  2}, //   0: a
  {  790,  130, 1780,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 61, 52, 45,-16,-16,  0,  5,  2}, //   1: aa
  {  640,   60, 1600,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 49, 43,-16,-16,  0,  6,  2}, //   2: ai
  {  640,   60, 2020,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 52, 45,-16,-16,  0,  6,  2}, //   3: air
  {  790,   60,  880,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 63, 43, 36,-16,-16,  0, 15,  2}, //   4: ar
  {  490,   60,  820,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 36, 31,-16,-16,  0, 10,  2}, //   5: aw
  {  190,   60,  760,   90, 2500,  150,  270, 62,  0,  0,-16, 38,-16,-16,-16,-16,-16,  0, 12, 26}, //   6: b
  {  190,   60,  760,   90, 2500,  150,  270, 62,  0,  0,-16, 38, 63, 57, 52,-16,-16,  0,  1, 29}, //   7: by
  {  190,   60,  760,   90, 2500,  150,  270, 62,  0,  0,-16,-16,-16,-16,-16,-16,-16,  0,  0, 26}, //   8: bz
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16,-16,-16,  0,  4, 23}, //   9: ch
  {  400,   60, 2020,   90, 2560,  150,  270,  0, 60, 60,-16,-16, 45, 56, 45,-16,-16,  0,  8, 18}, //  10: ci
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 45,-16,-16,-16,-16,-16,  0,  8, 26}, //  11: d
  {  280,   60, 1600,   90, 2560,  150,  270, 36,  0, 60, 54, 43, 45, 40, 42,-16,-16,  0,  4, 20}, //  12: dh
  {  280,   60, 1600,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 45, 40, 42,-16,-16,  0,  4, 20}, //  13: di
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 52, 52, 49, 59,-16,-16,  0,  1, 29}, //  14: dy
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 52, 42, 38, 49,-16,-16,  0,  1, 26}, //  15: dz
  {  640,   60, 2020,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 52, 45,-16,-16,  0,  4,  2}, //  16: e
  {  250,   60, 2320,   90, 3200,  150,  270, 62,  0,  0,-16, 64, 47, 50, 45,-16,-16,  0,  7,  2}, //  17: ee
  {  490,   60, 1480,   90, 2500,  150,  270,  0,  0,  0,-16,-16,-16,-16,-16,-16,-16,  0,  5, 31}, //  18: end
  {  580,   60, 1420,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 47, 40,-16,-16,  0, 16,  2}, //  19: er
  {  400,   60, 1420,   90, 2560,  150,  270,  0, 32, 54, 54,-16, 14, 14,-16,-16,-16,  0, 12, 18}, //  20: f
  {  190,   60, 1480,   90, 2620,  150,  270, 62,  0,  0,-16, 49,-16,-16,-16,-16,-16,  0, 12, 26}, //  21: g
  {  190,   60, 1480,   90, 2620,  150,  270, 62,  0,  0,-16, 49, 59, 54, 38,-16,-16,  0,  1, 29}, //  22: gy
  {  190,   60, 1480,   90, 2620,  150,  270, 62,  0,  0,-16, 49, 49, 43, 28,-16,-16,  0,  2, 26}, //  23: gz
  {  490,   60, 1480,   90, 2500,  150,  270,  0, 60, 60,-16, 49, 50, 40, 36,-16,-16,  0,  5,  9}, //  24: h
  {  400,   60, 2080,   90, 2560,  150,  270, 62,  0,  0,-16, 64, 50, 49, 43,-16,-16,  0,  6,  2}, //  25: i
  {  310,   60, 2200,   90, 2920,  150,  270, 62,  0,  0,-16, 64, 49, 50, 45,-16,-16,  0,  6,  2}, //  26: ia
  {  490,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 64, 47, 40,-16,-16,  0,  6,  2}, //  27: ib
  {  790,   60,  880,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 63, 43, 36,-16,-16,  0,  6,  2}, //  28: ie
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 45,-16,-16,-16,-16,-16,  0,  4, 26}, //  29: j
  {  280,   60, 2020,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 40, 50, 40,-16,-16,  0,  3, 20}, //  30: jy
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16,-16,-16,  0,  8, 23}, //  31: k
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16, 64, 64, 43,-16,-16,  0,  1, 29}, //  32: ky
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16, 54, 54, 33,-16,-16,  0,  4, 23}, //  33: kz
  {  460,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 50, 40, 40, 35,-16,-16,  0,  8, 11}, //  34: l
  {  460,   60,  940,   90, 2500,  150,  270, 62,  0,  0,-16, 50, 40, 40, 35,-16,-16,  0,  8, 11}, //  35: ll
  {  480,   40, 1000,  175, 2200,  120,  360, 62,  0,  0,-16, 40, 44, 47,-16, 56,-16,  0,  8, 11}, //  36: m
  {  480,   40, 1780,  300, 2620,  260,  450, 62,  0,  0,-16, 49, 49, 49, 34, 56,-16,  0,  8, 11}, //  37: n
  {  480,  160,  820,  150, 2800,  100,  360, 52,  0,  0,-16, 34, 44, 49, 14, 56,-16,  0,  8, 11}, //  38: ng
  {  610,   60,  880,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 61, 36, 29,-16,-16,  0,  6,  2}, //  39: o
  {  490,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 64, 47, 40,-16,-16,  0,  6,  2}, //  40: oa
  {  490,   60,  820,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 36, 31,-16,-16,  0,  6,  2}, //  41: oi
  {  370,   60, 1000,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 42, 36,-16,-16,  0,  4,  2}, //  42: oo
  {  370,   60, 1000,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 42, 36,-16,-16,  0,  6,  2}, //  43: oor
  {  490,   60,  820,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 36, 31,-16,-16,  0,  6,  2}, //  44: or
  {  790,   60, 1300,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 61, 49, 42,-16,-16,  0,  6,  2}, //  45: ou
  {  370,   60, 1000,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 42, 36,-16,-16,  0,  6,  2}, //  46: ov
  {  190,   60,  760,   90, 2500,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16,-16,-16,  0,  8, 23}, //  47: p
  {  190,   60,  760,   90, 2500,  150,  270,  0, 60, 60,-16, 38, 63, 57, 52,-16,-16,  0,  1, 29}, //  48: py
  {  190,   60,  760,   90, 2500,  150,  270,  0, 60, 60,-16, 38, 52, 47, 42,-16,-16,  0,  2, 23}, //  49: pz
  {  490,   60, 1480,   90, 2500,  150,  270,  0,  0,  0,-16,-16,-16,-16,-16,-16,-16,  0,  6, 29}, //  50: q
  {  280,   60, 1420,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 54, 50, 47,-16,-16,  0,  0, 30}, //  51: qq
  {  490,   60, 1180,   90, 1600,  150,  270, 62,  0,  0,-16, 56, 49, 49,-16,-16,-16,  0, 11, 10}, //  52: r
  {  490,   60, 1180,   90, 1600,   70,  270, 50,  0,  0,-16, 56, 49, 49,-16,-16,-16,  0, 10, 10}, //  53: rx
  {  400,  200, 1720,   96, 2620,  220,  270,  0, 32, 60,-16,-16, 42, 42, 54,-16,-16,  0, 12, 18}, //  54: s
  {  400,   60, 2200,   90, 2560,  150,  270,  0, 60, 60,-16,-16, 45, 56, 45,-16,-16,  0, 12, 18}, //  55: sh
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16,-16,-16,  0,  6, 23}, //  56: t
  {  400,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16, 40, 42, 36,-16,-16,  0, 15, 18}, //  57: th
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16, 52, 64,-16,-16,  0,  1, 29}, //  58: ty
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16, 42, 54,-16,-16,  0,  2, 23}, //  59: tz
  {  700,   60, 1360,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 57, 45, 38,-16,-16,  0,  6,  2}, //  60: u
  {  250,   60,  880,   90, 2200,  150,  270, 62,  0,  0,-16, 64, 52, 31, 24,-16,-16,  0,  9,  2}, //  61: uu
  {  280,   60, 1420,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 54, 50, 47,-16,-16,  0,  4, 20}, //  62: v
  {  190,   60,  760,   90, 2020,  150,  270, 62,  0,  0,-16, 57, 42, 35,-16,-16,-16,  0,  8, 10}, //  63: w
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16, 54, 54, 33,-16,-16,  0, 12, 18}, //  64: x
  {  250,   60, 2500,   90, 2980,  150,  270, 62,  0,  0,-16, 64, 47, 52, 45,-16,-16,  0,  7, 10}, //  65: y
  {  280,   60, 1720,   90, 2560,  150,  270, 40,  0, 60,-16, 43, 38, 38, 50,-16,-16,  0,  4, 20}, //  66: z
  {  280,   60, 2020,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 40, 50, 40,-16,-16,  0,  4, 20}, //  67: zh
  {  280,   60, 1720,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 38, 38, 50,-16,-16,  0,  4, 20}, //  68: zz
};


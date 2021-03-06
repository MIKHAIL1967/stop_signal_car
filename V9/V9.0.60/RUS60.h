// Data file for user example user defined fonts
//широкий буквы имеют кратную ширину 
#ifndef FONTDATA_H
#define FONTDATA_H

const uint8_t BigFontLower[] PROGMEM = 
{
  0,    // 0
  0,    // 1
  0,    // 2
  0,    // 3
  0,    // 4
  0,    // 5
  0,    // 6
  0,    // 7
  0,    // 8
  0,    // 9
  0,    // 10
  0,    // 11
  0,    // 12
  0,    // 13
  0,    // 14
  0,    // 15
  0,    // 16
  0,    // 17
  0,    // 18
  0,    // 19
  0,    // 20
  11,192,224,152,134,129,128,128,0,0,223,223,           //нижн///21///"\x015"//"у"/"знак /!\"
  8,0,128,128,129,134,152,224,192,                      //нижн///22///"\x016"//"у"/"знак /!\"
  0,    // 23
  0,    // 24
  13,15,31,63,127,248,240,240,240,248,252,124,60,28,    //нижн///25//"\x019"//"с" //КРУПНАЯ//
  12,0,0,0,0,255,255,255,255,0,0,0,0,                   //нижн///26///"\x01a"//"т"//КРУПНАЯ//
  13,31,63,127,255,248,240,240,240,248,255,127,63,31,   //нижн///27///"\x01b"//"о"//КРУПНАЯ//
  12,255,255,255,255,0,0,0,0,255,255,255,255,           //нижн///28///"\x01c"//"п"//КРУПНА//
  0,    // 29
  0,    // 30
  0,    // 31
  4,0,0,0,0,   // 32 - 'Space'
  2,103,103,    // 33 - '!'
  6,0,0,0,0,0,0,    // 34 - '"'
  10,6,6,127,127,6,6,127,127,6,6,    // 35 - '#'
  10,48,112,97,97,255,255,97,115,63,30,    // 36 - '$'
  10,0,96,120,30,7,1,48,120,120,48,    // 37 - '%'
  10,30,63,115,97,97,103,63,28,126,102,    // 38 - '&'
  2,0,0,    // 39 - '''
  5,7,31,60,112,96,    // 40 - '('
  5,96,112,60,31,7,    // 41 - ')'
  10,3,3,1,0,15,15,0,1,3,3,    // 42 - '*'
  10,1,1,1,1,31,31,1,1,1,1,    // 43 - '+'
  2,96,224,    // 44 - ','
  10,1,1,1,1,1,1,1,1,1,1,    // 45 - '-'
  2,96,96,    // 46 - '.'
  8,96,120,30,7,1,0,0,0,    // 47 - '/'
  10,31,63,112,96,96,96,96,112,63,31,  // 48 - '0'
  6,96,96,127,127,96,96,    // 49 - '1' //
  10,96,112,120,124,110,103,99,97,96,96,   // 50 - '2'
  10,24,56,112,96,96,97,97,113,63,30,   // 51 - '3'
  10,7,7,6,6,6,6,127,127,6,6,    // 52 - '4'
  10,24,56,112,96,96,96,96,112,63,31,   // 53 - '5'
  10,31,63,112,96,96,96,96,113,63,31,  // 54 - '6'
  10,0,0,0,127,127,1,0,0,0,0,     // 55 - '7'
  10,30,63,115,97,97,97,97,115,63,30,  // 56 - '8'
  10,0,0,97,97,113,57,29,15,7,3,   // 57 - '9'
  2,12,12,    // 58 - ':'
  2, 97,225,    // 59 - ';'
  8,1,3,7,14,28,56,112,96,    // 60 - '<'
  10,12,12,12,12,12,12,12,12,12,12,    // 61 - '='
  8,96,112,56,28,14,7,3,1,    // 62 - '>'
  10,0,0,0,0,111,111,1,0,0,0,    // 63 - '?'
  10,31,63,112,103,111,111,111,108,111,39,    // 64 - '@'
  10,127,127,6,6,6,6,6,6,127,127,   // 65 - 'A'
  10,127,127,97,97,97,97,97,115,63,30,   // 66 - 'B'
  10,31,63,96,96,96,96,96,112,56,24,   // 67 - 'C'
  10,127,127,96,96,96,96,96,112,63,31,   // 68 - 'D'
  10,127,127,97,97,97,97,97,97,96,96,   // 69 - 'E'
  10,127,127,1,1,1,1,1,1,0,0,     // 70 - 'F'
  10,31,63,112,96,96,96,97,113,63,31,    // 71 - 'G'
  10,127,127,1,1,1,1,1,1,127,127,    // 72 - 'H'
  6,96,96,127,127,96,96,    // 73 - 'I'
  8,24,56,112,96,96,112,63,31,    // 74 - 'J'
  10,127,127,3,3,7,14,28,56,112,96,    // 75 - 'K'
  10,127,127,96,96,96,96,96,96,96,96,    // 76 - 'L'
  10,127,127,0,0,0,0,0,0,127,127,    // 77 - 'M'
  10,127,127,0,0,1,7,28,48,127,127,    // 78 - 'N'
  10,31,63,112,96,96,96,96,112,63,31,    // 79 - 'O'
  10,127,127,1,1,1,1,1,1,0,0,    // 80 - 'P'
  10,31,63,112,96,96,108,124,56,127,111,    // 81 - 'Q'
  10,127,127,1,3,7,15,29,57,112,96,    // 82 - 'R'
  10,48,112,97,97,97,97,97,115,63,30,    // 83 - 'S'
  10,0,0,0,0,127,127,0,0,0,0,    // 84 - 'T'
  10,31,63,112,96,96,96,96,112,63,31,    // 85 - 'U'
  10,7,15,28,56,112,112,56,28,15,7,    // 86 - 'V'
  10,31,63,112,120,62,62,120,112,63,31,    // 87 - 'W'
  10,120,124,14,7,3,3,7,14,124,120,    // 88 - 'X'
  10,0,0,0,0,127,127,0,0,0,0,    // 89 - 'Y'
  10,120,124,110,103,99,97,96,96,96,96,    // 90 - 'Z'
  4,127,127,96,96,    // 91 - '['
  8,0,0,0,1,7,30,120,96,    // 92 - '\'
  4,96,96,127,127,    // 93 - ']'
  10,0,0,0,0,0,0,0,0,0,0,    // 94 - '^'
  10,192,192,192,192,192,192,192,192,192,192,    // 95 - '_'
  3,0,0,0,    // 96 - '`'
  10,24,60,102,102,102,102,102,102,127,63,   // 97 - 'a'
  10,127,127,96,96,96,96,96,112,63,31,   // 98 - 'b'
  10,31,63,112,96,96,96,96,112,57,25,   // 99 - 'c'
  10,31,63,112,96,96,96,96,96,127,127,   // 100 - 'd'
  10,31,63,118,102,102,102,102,118,55,19,   // 101 - 'e'
  7,1,127,127,1,1,0,0,     // 102 - 'f'
  10,35,103,238,204,204,204,204,236,127,63,    // 103 - 'g'
  10,127,127,0,0,0,0,0,0,127,127,    // 104 - 'h'
  2,127,127,    // 105 - 'i'
  8,24,56,112,96,96,112,63,31,    // 106 - 'j'
  8,127,127,14,15,31,57,112,96,    // 107 - 'k'
  6,96,96,127,127,96,96,    // 108 - 'l'
  10,127,127,0,0,127,127,0,0,127,127,    // 109 - 'm'
  10,127,127,1,1,0,0,0,0,127,127,    // 110 - 'n'
  10,31,63,112,96,96,96,96,112,63,31,    // 111 - 'o'
  10,255,255,24,24,24,24,24,28,15,7,    // 112 - 'p'
  10,7,15,28,24,24,24,24,24,255,255,    // 113 - 'q'
  10,127,127,3,1,0,0,0,0,1,1,    // 114 - 'r'
  10,49,115,102,102,102,102,102,126,60,24,    // 115 - 's'
  8,0,0,31,63,112,112,56,24,    // 116 - 't'
  10,31,63,112,96,96,96,96,112,63,31,    // 117 - 'u'
  10,7,15,28,56,112,112,56,28,15,7,    // 118 - 'v'
  10,31,63,112,112,62,62,112,112,63,31,    // 119 - 'w'
  10,96,112,57,31,15,15,31,57,112,96,    // 120 - 'x'
  10,3,7,206,204,204,204,204,236,127,63,    // 121 - 'y'
  10,96,112,120,124,110,103,99,97,96,96,    // 122 - 'z'
  6,1,3,31,62,112,96,    // 123 - '{'
  2,255,255,   // 124 - '|'
  6,96,112,62,31,3,1,    // 125 - '}'
  0,    // 126
  0,    // 127
  0,    // 128
  0,    // 129
  0,    // 130
  0,    // 131
  0,    // 132
  0,    // 133
  0,    // 134
  0,    // 135
  0,    // 136
  0,    // 137
  0,    // 138
  0,    // 139
  0,    // 140
  0,    // 141
  0,    // 142
  0,    // 143
  8, 255, 255, 6, 6, 6, 6, 255, 255,    // 144 - 'A'//нижн
  8, 255, 255, 192, 192, 192, 225, 127, 63,   // 145 - 'Б'//нижн
  8, 255, 255, 192, 192, 193, 227, 127, 62,   // 146 - 'В'//нижн
  6, 255, 255, 0, 0, 0, 0,    // 147 - 'Г'//нижн
  10, 224, 252, 127, 99, 96, 96, 96, 127, 255, 224,   // 148 - 'Д'//нижн
  6, 255, 255, 195, 195, 195, 192,    // 149 - 'Е'//нижн
  10, 254, 255, 1, 0, 255, 255, 0, 1, 255, 254,   // 150 - 'Ж'//нижн
  8, 56, 120, 224, 192, 193, 227, 127, 62,    // 151 - 'З'//нижн
  8, 255, 255, 112, 28, 7, 1, 255, 255,   // 152 - 'И'//нижн
  8, 255, 255, 112, 28, 7, 1, 255, 255,   // 153 - 'Й'//нижн
  8, 255, 255, 1, 3, 6, 12, 248, 240,   // 154 - 'К'//нижн
  8, 240, 254, 15, 1, 0, 0, 255, 255,   // 155 - 'Л'//нижн
  10, 255, 255, 0, 1, 15, 15, 1, 0, 255, 255,   // 156 - 'М'//нижн
  8, 255, 255, 1, 1, 1, 1, 255, 255,    // 157 - 'Н'//нижн
  8, 63, 127, 224, 192, 192, 224, 127, 63,    // 158 - 'О'//нижн
  8, 255, 255, 0, 0, 0, 0, 255, 255,    // 159 - 'П'//нижн
  8, 255, 255, 6, 6, 6, 7, 3, 1,    // 160 - 'Р'//нижн
  8, 63, 127, 224, 192, 192, 224, 120, 56,    // 161 - 'С'//нижн
  8, 0, 0, 0, 255, 255, 0, 0, 0,    // 162 - 'Т'//нижн
  8, 64, 192, 192, 97, 51, 27, 15, 7,   // 163 - 'У'//нижн
  8, 15, 31, 16, 255, 255, 16, 31, 15,    // 164 - 'Ф'//нижн
  8, 252, 254, 3, 1, 1, 3, 254, 252,    // 165 - 'Х'//нижн
  8, 127, 127, 96, 96, 96, 127, 255, 224,   // 166 - 'Ц'//нижн
  8, 0, 1, 1, 3, 3, 3, 255, 255,    // 167 - 'Ч'//нижн
  10, 255, 255, 192, 192, 255, 255, 192, 192, 255, 255,   // 168 - 'Ш'//нижн
  10, 127, 127, 96, 96, 127, 127, 224, 224, 255, 223,   // 169 - 'Щ'//нижн
  10, 0, 0, 255, 255, 192, 192, 192, 225, 127, 63,    // 170 - 'Ъ'//нижн
  10, 255, 255, 192, 192, 225, 127, 63, 0, 255, 255,    // 171 - 'Ы'//нижн
  8, 255, 255, 192, 192, 192, 225, 127, 63,   // 172 - 'Ь'//нижн
  10, 48, 112, 224, 192, 193, 193, 225, 113, 63, 31,    // 173 - 'Э'//нижн
  10, 255, 255, 1, 63, 127, 224, 192, 224, 127, 63,   // 174 - 'Ю'//нижн
  10, 128, 192, 97, 49, 27, 14, 6, 2, 255, 255,   // 175 - 'Я'//нижн
  0,    // 176
  0,    // 177
  0,    // 178
  0,    // 179
  0,    // 180
  0,    // 181
  0,    // 182
  0,    // 183
  0,    // 184
  0,    // 185
  0,    // 186
  0,    // 187
  0,    // 188
  0,    // 189
  0,    // 190
  0,    // 191
  0,    // 192
  0,    // 193
  0,    // 194
  0,    // 195
  0,    // 196
  0,    // 197
  0,    // 198
  0,    // 199
  0,    // 200
  0,    // 201
  0,    // 202
  0,    // 203
  0,    // 204
  0,    // 205
  0,    // 206
  0,    // 207
  0,    // 208
  0,    // 209
  0,    // 210
  0,    // 211
  0,    // 212
  0,    // 213
  0,    // 214
  0,    // 215
  0,    // 216
  0,    // 217
  0,    // 218
  0,    // 219
  0,    // 220
  0,    // 221
  0,    // 222
  0,    // 223
  0,    // 224
  0,    // 225
  0,    // 226
  0,    // 227
  0,    // 228
  0,    // 229
  0,    // 230
  0,    // 231
  0,    // 232
  0,    // 233
  0,    // 234
  0,    // 235
  0,    // 236
  0,    // 237
  0,    // 238
  0,    // 239
  0,    // 240
  0,    // 241
  0,    // 242
  0,    // 243
  0,    // 244
  0,    // 245
  0,    // 246
  0,    // 247
  0,    // 248
  0,    // 249
  0,    // 250
  0,    // 251
  0,    // 252
  0,    // 253
  0,    // 254
  0,    // 255
};


const uint8_t BigFontUpper[] PROGMEM = 
{
  0,    // 0
  0,    // 1
  0,    // 2
  0,    // 3
  0,    // 4
  0,    // 5
  0,    // 6
  0,    // 7
  0,    // 8
  0,    // 9
  0,    // 10
  0,    // 11
  0,    // 12
  0,    // 13
  0,    // 14
  0,    // 15
  0,    // 16
  0,    // 17
  0,    // 18
  0,    // 19
  0,    // 20
  11,0,0,0,0,128,96,24,6,0,241,241,           //верх///21///"\x015"//"у"/"знак /!\"
  8,6,24,96,128,0,0,0,0,                      //верх///22///"\x016"//"у"/"знак /!\"
  0,    // 23
  0,    // 24
  13,240,248,252,254,31,15,15,15,31,63,62,60,56,         //верх///25//"\x019"// "c" КРУПНАЯ//рус мал
  12,15,15,15,15,255,255,255,255,15,15,15,15,            //верх///26//"\x01a"// "т" КРУПНАЯ//рус мал
  13,248,252,254,255,31,15,15,15,31,255,254,252,248,     //верх///27//"\x01b"//"о" КРУПНАЯ//рус мал
  12,255,255,255,255,15,15,15,15,255,255,255,255,        //верх///28//"\x01c"//"п" КРУПНАЯ//рус мал
  0,    // 29
  0,    // 30
  0,    // 31
  4,0,0,0,0,   // 32 - 'Space'
  2,254,254,    // 33 - '!'
  6,14,14,0,0,14,14,    // 34 - '"'
  10,96,96,254,254,96,96,254,254,96,96,    // 35 - '#'
  10,120,252,206,134,255,255,134,134,14,12,    // 36 - '$'
  10,12,30,30,12,128,224,120,30,6,0,    // 37 - '%'
  10,0,0,152,252,230,230,60,24,0,0,    // 38 - '&'
  2,14,14,    // 39 - '''
  5,224,248,60,14,6,    // 40 - '('
  5,6,14,60,248,224,    // 41 - ')'
  10,24,184,240,224,254,254,224,240,184,24,    // 42 - '*'
  10,128,128,128,128,248,248,128,128,128,128,    // 43 - '+'
  2,0,0,    // 44 - ','
  10,128,128,128,128,128,128,128,128,128,128,    // 45 - '-'
  2,0,0,    // 46 - '.'
  8,0,0,0,128,224,120,30,6,    // 47 - '/'
  10,248,252,14,6,6,6,6,14,252,248,  // 48 - '0'
  6,24,28,254,254,0,0,     // 49 - '1' 
  10,24,28,14,6,6,6,134,206,252,120,   // 50 - '2'
  10,24,28,14,6,6,134,134,142,252,120,   // 51 - '3'
  10,128,192,224,112,56,28,254,254,0,0,    // 52 - '4'
  10,126,126,102,102,102,102,102,230,198,134,   // 53 - '5'
  10,248,252,198,198,198,198,198,198,140,8,  // 54 - '6'
  10,6,6,6,6,134,198,230,118,62,30,     // 55 - '7'
  10,56,124,206,134,134,134,134,206,124,56,  // 56 - '8'
  10,120,252,206,134,134,134,134,206,252,248,   // 57 - '9'
  2,48,48,    // 58 - ':'
  2,128,128,    // 59 - ';'
  8,128,192,224,112,56,28,14,6,    // 60 - '<'
  10,48,48,48,48,48,48,48,48,48,48,    // 61 - '='
  8,6,14,28,56,112,224,192,128,    // 62 - '>'
  10,24,28,14,6,6,134,134,206,252,120,    // 63 - '?'
  10,248,252,14,230,246,246,230,14,252,248,    // 64 - '@'
  10,248,252,14,6,6,6,6,14,252,248,   // 65 - 'A'
  10,254,254,134,134,134,134,134,206,252,120,   // 66 - 'B'
  10,248,252,6,6,6,6,6,14,28,24,   // 67 - 'C'
  10,254,254,6,6,6,6,6,14,252,248,   // 68 - 'D'
  10,254,254,134,134,134,134,134,134,6,6,   // 69 - 'E'
  10,254,254,134,134,134,134,134,134,6,6,     // 70 - 'F'
  10,248,252,14,6,6,6,134,142,156,152,    // 71 - 'G'
  10,254,254,128,128,128,128,128,128,254,254,    // 72 - 'H'
  6,6,6,254,254,6,6,    // 73 - 'I'
  8,6,6,6,6,6,6,254,254,    // 74 - 'J'
  10,254,254,192,192,224,112,56,28,14,6,    // 75 - 'K'
  10,254,254,0,0,0,0,0,0,0,0,    // 76 - 'L'
  10,254,254,28,56,240,240,56,28,254,254,    // 77 - 'M'
  10,254,254,28,112,192,0,0,0,254,254,    // 78 - 'N'
  10,248,252,14,6,6,6,6,14,252,248,    // 79 - 'O'
  10,254,254,134,134,134,134,134,206,252,120,    // 80 - 'P'
  10,248,252,14,6,6,6,6,14,252,248,    // 81 - 'Q'
  10,254,254,134,134,134,134,134,206,252,120,    // 82 - 'R'
  10,120,252,206,134,134,134,134,134,14,12,    // 83 - 'S'
  10,6,6,6,6,254,254,6,6,6,6,    // 84 - 'T'
  10,254,254,0,0,0,0,0,0,254,254,    // 85 - 'U'
  10,254,254,0,0,0,0,0,0,254,254,    // 86 - 'V'
  10,254,254,0,0,0,0,0,0,254,254,    // 87 - 'W'
  10,30,62,48,224,192,192,224,112,62,30,    // 88 - 'X'
  10,30,62,112,224,192,192,224,112,62,30,    // 89 - 'Y'
  10,6,6,6,6,134,198,230,118,62,30,    // 90 - 'Z'
  4,254,254,6,6,    // 91 - '['
  8,6,30,120,224,128,0,0,0,    // 92 - '\'
  4,6,6,254,254,    // 93 - ']'
  10,96,112,56,28,14,14,28,56,112,96,    // 94 - '^'
  10,0,0,0,0,0,0,0,0,0,0,    // 95 - '_'
  3,6,30,24,    // 96 - '`'
  10,0,192,224,96,96,96,96,224,192,128,   // 97 - 'a'
  10,254,254,96,96,96,96,96,224,192,128,   // 98 - 'b'
  10,128,192,224,96,96,96,96,224,192,128,   // 99 - 'c'
  10,128,192,224,96,96,96,96,96,254,254,   // 100 - 'd'
  10,128,192,224,96,96,96,96,224,192,128,   // 101 - 'e'
  7,128,248,252,142,142,28,24,     // 102 - 'f'
  10,128,192,224,96,96,96,96,96,224,224,    // 103 - 'g'
  10,254,254,96,96,96,96,96,224,192,128,    // 104 - 'h'
  2,236,236,    // 105 - 'i'
  8,0,0,0,0,0,0,230,230,    // 106 - 'j'
  8,254,254,0,0,128,192,224,96,    // 107 - 'k'
  6,6,6,254,254,0,0,    // 108 - 'l'
  10,224,224,96,96,224,224,96,96,224,192,    // 109 - 'm'
  10,224,224,128,192,224,96,96,224,192,128,    // 110 - 'n'
  10,128,192,224,96,96,96,96,224,192,128,    // 111 - 'o'
  10,224,224,96,96,96,96,96,224,192,128,    // 112 - 'p'
  10,128,192,224,96,96,96,96,96,224,224,    // 113 - 'q'
  10,224,224,128,192,224,96,96,224,192,128,    // 114 - 'r'
  10,128,192,96,96,96,96,96,96,192,192,    // 115 - 's'
  8,96,96,254,254,96,96,96,96,    // 116 - 't'
  10,224,224,0,0,0,0,0,0,224,224,    // 117 - 'u'
  10,224,224,0,0,0,0,0,0,224,224,    // 118 - 'v'
  10,224,224,0,0,0,0,0,0,224,224,    // 119 - 'w'
  10,96,224,192,128,0,0,128,192,224,96,    // 120 - 'x'
  10,224,224,0,0,0,0,0,0,224,224,    // 121 - 'y'
  10,96,96,96,96,96,96,224,224,224,96,    // 122 - 'z'
  6,128,192,248,124,14,6,    // 123 - '{'
  2,255,255,   // 124 - '|'
  6,6,14,124,248,192,128,    // 125 - '}'
  0,    // 126
  0,    // 127
  0,    // 128
  0,    // 129
  0,    // 130
  0,    // 131
  0,    // 132
  0,    // 133
  0,    // 134
  0,    // 135
  0,    // 136
  0,    // 137
  0,    // 138
  0,    // 139
  0,    // 140
  0,    // 141
  0,    // 142
  0,    // 143
  8, 224, 240, 56, 28, 14, 15, 255, 255,    // 144 - 'A'//верх
  8, 255, 255, 195, 195, 195, 195, 131, 0,    // 145 - 'Б'//верх
  8, 255, 255, 195, 195, 231, 190, 28, 0,   // 146 - 'В'//верх
  6, 255, 255, 3, 3, 3, 7,    // 147 - 'Г'//верх
  10, 0, 0, 128, 240, 126, 15, 3, 255, 255, 0,    // 148 - 'Д'//верх
  6, 255, 255, 131, 131, 131, 3,    // 149 - 'Е'//верх
  10, 31, 63, 224, 192, 255, 255, 192, 224, 63, 31,   // 150 - 'Ж'//верх
  8, 12, 14, 199, 195, 227, 183, 62, 28,    // 151 - 'З'//верх
  8, 255, 255, 0, 0, 0, 192, 255, 255,    // 152 - 'И'//верх
  8, 252, 252, 1, 2, 2, 193, 252, 252,    // 153 - 'Й'//верх
  8, 255, 255, 192, 96, 48, 24, 15, 7,    // 154 - 'К'//верх
  8, 0, 0, 192, 248, 63, 7, 255, 255,   // 155 - 'Л'//верх
  10, 255, 255, 120, 224, 128, 128, 224, 120, 255, 255,   // 156 - 'М'//верх
  8, 255, 255, 128, 128, 128, 128, 255, 255,    // 157 - 'Н'//верх
  8, 252, 254, 7, 3, 3, 7, 254, 252,    // 158 - 'О'//верх
  8, 255, 255, 3, 3, 3, 3, 255, 255,    // 159 - 'П'//верх
  8, 255, 255, 3, 3, 3, 7, 254, 252,    // 160 - 'Р'//верх
  8, 252, 254, 7, 3, 3, 7, 30, 28,    // 161 - 'С'//верх
  8, 7, 3, 3, 255, 255, 3, 3, 7,    // 162 - 'Т'//верх
  8, 63, 127, 192, 128, 0, 0, 255, 255,   // 163 - 'У'//верх
  8, 248, 252, 4, 255, 255, 4, 252, 248,    // 164 - 'Ф'//верх
  8, 31, 63, 96, 192, 192, 96, 63, 31,    // 165 - 'Х'//верх
  8, 255, 255, 0, 0, 0, 255, 255, 0,    // 166 - 'Ц'//верх
  8, 127, 255, 128, 0, 0, 0, 255, 255,    // 167 - 'Ч'//верх
  10, 255, 255, 0, 0, 255, 255, 0, 0, 255, 255,   // 168 - 'Ш'//верх
  10, 255, 255, 0, 0, 255, 255, 0, 0, 255, 255,   // 169 - 'Щ'//верх
  10, 3, 3, 255, 255, 192, 192, 192, 192, 128, 0,   // 170 - 'Ъ'//верх
  10, 255, 255, 192, 192, 192, 128, 0, 0, 255, 255,   // 171 - 'Ы'//верх
  8, 255, 255, 192, 192, 192, 192, 128, 0,    // 172 - 'Ь'//верх
  10, 12, 14, 7, 3, 131, 131, 135, 142, 252, 248,   // 173 - 'Э'//верх
  10, 255, 255, 128, 252, 254, 7, 3, 7, 254, 252,   // 174 - 'Ю'//верх
  10, 120, 252, 134, 3, 3, 3, 3, 3, 255, 255,   // 175 - 'Я'//верх
  0,    // 176
  0,    // 177
  0,    // 178
  0,    // 179
  0,    // 180
  0,    // 181
  0,    // 182
  0,    // 183
  0,    // 184
  0,    // 185
  0,    // 186
  0,    // 187
  0,    // 188
  0,    // 189
  0,    // 190
  0,    // 191
  0,    // 192
  0,    // 193
  0,    // 194
  0,    // 195
  0,    // 196
  0,    // 197
  0,    // 198
  0,    // 199
  0,    // 200
  0,    // 201
  0,    // 202
  0,    // 203
  0,    // 204
  0,    // 205
  0,    // 206
  0,    // 207
  0,    // 208
  0,    // 209
  0,    // 210
  0,    // 211
  0,    // 212
  0,    // 213
  0,    // 214
  0,    // 215
  0,    // 216
  0,    // 217
  0,    // 218
  0,    // 219
  0,    // 220
  0,    // 221
  0,    // 222
  0,    // 223
  0,    // 224
  0,    // 225
  0,    // 226
  0,    // 227
  0,    // 228
  0,    // 229
  0,    // 230
  0,    // 231
  0,    // 232
  0,    // 233
  0,    // 234
  0,    // 235
  0,    // 236
  0,    // 237
  0,    // 238
  0,    // 239
  0,    // 240
  0,    // 241
  0,    // 242
  0,    // 243
  0,    // 244
  0,    // 245
  0,    // 246
  0,    // 247
  0,    // 248
  0,    // 249
  0,    // 250
  0,    // 251
  0,    // 252
  0,    // 253
  0,    // 254
  0,    // 255
};


#endif


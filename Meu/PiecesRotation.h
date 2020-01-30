#ifndef PIECESROTATION_H
#define PIECESROTATION_H

int pieces[21][5][5] = {
  /*  a */ 
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  b */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  c */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  d */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  e */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 } },
  /*  f */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  g */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  h */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 0 },
    { 0, 0, 1, 1, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  i */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0 },
    { 0, 0, 1, 1, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  j */
  { { 0, 0, 1, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 } },
  /*  k */
  { { 0, 0, 1, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  l */
  { { 0, 0, 1, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0 },
    { 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  m */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  n */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 1, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  o */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 } },
  /*  p */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 1, 1, 1, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  q */
  { { 0, 0, 1, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 1 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  r */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 1, 1, 0, 0 },
    { 0, 0, 1, 1, 0 },
    { 0, 0, 0, 1, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  s */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 0 },
    { 0, 0, 0, 1, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  t */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } },
  /*  u */
  { { 0, 0, 0, 0, 0 }, 
    { 0, 0, 1, 0, 0 },
    { 0, 1, 1, 1, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0 } }
  };


/*  Here we'll store the 8 possible ways to put a piece on
    the board. To better identify them, we use the following
    key:
    CR = Left rotation (90 degree clockwise);
    CCR = Right rotation (90 degree counter-clockwise);
    U = 180 degree rotation;
    RC = Reflection along the middle column;
    RL = Reflection along the middle line.  */
    
int rotation[8][5][5] = {
  /*  0 - None  */
  { {0,  1,  2,  3,  4},
    {5,  6,  7,  8,  9},
    {10, 11, 12, 13, 14},
    {15, 16, 17, 18, 19},
    {20, 21, 22, 23, 24}  },
  /*  1 - RC  */
  { {4,  3,  2,  1,  0},
    {9,  8,  7,  6,  5},
    {14, 13, 12, 11, 10},
    {19, 18, 17, 16, 15},
    {24, 23, 22, 21, 20}  },
  /*  2 - CR  */
  { {20, 15, 10,  5,  0},
    {21, 16, 11,  6,  1},
    {22, 17, 12,  7,  2},
    {23, 18, 13,  8,  3},
    {24, 19, 14,  9,  4}  },
  /*  3 - CCR RL  */  
  { {0,  5, 10, 15, 20},
    {1,  6, 11, 16, 21},
    {2,  7, 12, 17, 22},
    {3,  8, 13, 18, 23},
    {4,  9, 14, 19, 24} },
  /*  4 - U */
  { {24, 23, 22, 21, 20},
    {19, 18, 17, 16, 15},
    {14, 13, 12, 11, 10},
    {9,  8,  7,  6,  5},
    {4,  3,  2,  1,  0} },
  /*  5 - U RC  */  
  { {20, 21, 22, 23, 24},
    {15, 16, 17, 18, 19},
    {10, 11, 12, 13, 14},
    {5,  6,  7,  8,  9},
    {0,  1,  2,  3,  4} },
  /*  6 - CCR  */  
  { {4,  9, 14, 19, 24},
    {3,  8, 13, 18, 23},
    {2,  7, 12, 17, 22},
    {1,  6, 11, 16, 21},
    {0,  5, 10, 15, 20} },
  /*  7 - CR RL */  
  { {24, 19, 14,  9,  4},
    {23, 18, 13,  8,  3},
    {22, 17, 12,  7,  2},
    {21, 16, 11,  6,  1},
    {20, 15, 10,  5,  0}  }
};

#endif
uint8_t frame[8][12] = {
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

void clear()
{
    for(int i = 0; i < 8; i++)
    {
      for(int j = 0; j < 12; j++)
      {
        frame[i][j] = 0;
      }
    }
}

void zero()
{
  // { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 }
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[1][3]   = 1;
  frame[1][7]   = 1;
  frame[2][2]   = 1;
  frame[2][8]   = 1;
  frame[3][2]   = 1;
  frame[3][8]   = 1;
  frame[4][2]   = 1;
  frame[4][8]   = 1;
  frame[5][2]   = 1;
  frame[5][8]   = 1;
  frame[6][3]   = 1;
  frame[6][7]   = 1;
  frame[7][4]   = 1;
  frame[7][5]   = 1;
  frame[7][6]   = 1;
}



void one()
{
  // { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }
  frame[0][6]   = 1;
  frame[1][5]   = 1;
  frame[1][6]   = 1;
  frame[2][4]   = 1;
  frame[2][6]   = 1;
  frame[3][3]   = 1;
  frame[3][6]   = 1;
  frame[4][6]   = 1;
  frame[5][6]   = 1;
  frame[6][6]   = 1;
  frame[7][6]   = 1;
}

void two()
{
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 }
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[0][7]   = 1;
  frame[1][3]   = 1;
  frame[1][8]   = 1;
  frame[2][3]   = 1;
  frame[2][8]   = 1;
  frame[3][7]   = 1;
  frame[4][6]   = 1;
  frame[5][5]   = 1;
  frame[6][4]   = 1;
  frame[7][3]   = 1;
  frame[7][4]   = 1;
  frame[7][5]   = 1;
  frame[7][6]   = 1;
  frame[7][7]   = 1;
  frame[7][8]   = 1;
}

void three()
{
  // { 0, 0, 0, , 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, , 1, 1, 1, 1, 0, 0, 0, 0 }
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[0][7]   = 1;
  frame[1][3]   = 1;
  frame[1][8]   = 1;
  frame[2][8]   = 1;
  frame[3][4]   = 1;
  frame[3][5]   = 1;
  frame[3][6]   = 1;
  frame[3][7]   = 1;
  frame[4][8]   = 1;
  frame[5][8]   = 1;
  frame[6][3]   = 1;
  frame[6][8]   = 1;
  frame[7][4]   = 1;
  frame[7][5]   = 1;
  frame[7][6]   = 1;
  frame[7][7]   = 1;
}

void four()
{
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 }
  frame[0][7]   = 1;
  frame[1][6]   = 1;
  frame[1][7]   = 1;
  frame[2][5]   = 1;
  frame[2][7]   = 1;
  frame[3][4]   = 1;
  frame[3][7]   = 1;
  frame[4][3]   = 1;
  frame[4][4]   = 1;
  frame[4][5]   = 1;
  frame[4][6]   = 1;
  frame[4][7]   = 1;
  frame[4][8]   = 1;
  frame[5][7]   = 1;
  frame[6][7]   = 1;
  frame[7][7]   = 1;
}

void five()
{
  // { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 }
  frame[0][3]   = 1;
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[0][7]   = 1;
  frame[1][3]   = 1;
  frame[2][3]   = 1;
  frame[3][3]   = 1;
  frame[3][4]   = 1;
  frame[3][5]   = 1;
  frame[3][6]   = 1;
  frame[3][7]   = 1;
  frame[4][7]   = 1;
  frame[5][7]   = 1;
  frame[6][7]   = 1;
  frame[7][3]   = 1;
  frame[7][4]   = 1;
  frame[7][5]   = 1;
  frame[7][6]   = 1;
  frame[7][7]   = 1;
}

void six()
{
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 }
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[0][7]   = 1;
  frame[1][3]   = 1;
  frame[1][8]   = 1;
  frame[2][3]   = 1;
  frame[3][3]   = 1;
  frame[3][4]   = 1;
  frame[3][5]   = 1;
  frame[3][6]   = 1;
  frame[3][7]   = 1;
  frame[4][3]   = 1;
  frame[4][8]   = 1;
  frame[5][3]   = 1;
  frame[5][8]   = 1;
  frame[6][3]   = 1;
  frame[6][8]   = 1;
  frame[7][4]   = 1;
  frame[7][5]   = 1;
  frame[7][6]   = 1;
  frame[7][7]   = 1;
}

void seven()
{
  // { 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0][2]   = 1;
  frame[0][3]   = 1;
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[0][7]   = 1;
  frame[0][8]   = 1;
  frame[0][9]   = 1;
  frame[1][8]   = 1;
  frame[2][7]   = 1;
  frame[3][3]   = 1;
  frame[3][4]   = 1;
  frame[3][5]   = 1;
  frame[3][6]   = 1;
  frame[3][7]   = 1;
  frame[3][8]   = 1;
  frame[4][5]   = 1;
  frame[5][4]   = 1;
  frame[6][3]   = 1;
  frame[7][2]   = 1;
}

void eight()
{
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 }
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[0][7]   = 1;
  frame[1][3]   = 1;
  frame[1][8]   = 1;
  frame[2][3]   = 1;
  frame[2][8]   = 1;
  frame[3][4]   = 1;
  frame[3][5]   = 1;
  frame[3][6]   = 1;
  frame[3][7]   = 1;
  frame[4][3]   = 1;
  frame[4][8]   = 1;
  frame[5][3]   = 1;
  frame[5][8]   = 1;
  frame[6][3]   = 1;
  frame[6][8]   = 1;
  frame[7][4]   = 1;
  frame[7][5]   = 1;
  frame[7][6]   = 1;
  frame[7][7]   = 1;
}

void nine()
{
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
  // { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 }
  frame[0][4]   = 1;
  frame[0][5]   = 1;
  frame[0][6]   = 1;
  frame[0][7]   = 1;
  frame[1][3]   = 1;
  frame[1][8]   = 1;
  frame[2][3]   = 1;
  frame[2][8]   = 1;
  frame[3][3]   = 1;
  frame[3][8]   = 1;
  frame[4][4]   = 1;
  frame[4][5]   = 1;
  frame[4][6]   = 1;
  frame[4][7]   = 1;
  frame[5][8]   = 1;
  frame[6][8]   = 1;
  frame[6][3]   = 1;
  frame[7][4]   = 1;
  frame[7][5]   = 1;
  frame[7][6]   = 1;
  frame[7][7]   = 1;
}

void zeroSmall(int shiftRow, int shiftCol)
{
  // { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[1 + shiftRow][0 + shiftCol]   = 1;
  frame[1 + shiftRow][2 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][0 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
}

void oneSmall(int shiftRow, int shiftCol)
{
  // { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[1 + shiftRow][0 + shiftCol]   = 1;
  frame[1 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[3 + shiftRow][1 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
}

void twoSmall(int shiftRow, int shiftCol)
{
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][2 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][0 + shiftCol]   = 1;
  frame[3 + shiftRow][0 + shiftCol]   = 1;
  frame[4 + shiftRow][0 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}

void threeSmall(int shiftRow, int shiftCol)
{
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][2 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][0 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}

void fourSmall(int shiftRow, int shiftCol)
{
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][0 + shiftCol]   = 1;
  frame[1 + shiftRow][2 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}

void fiveSmall(int shiftRow, int shiftCol)
{
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][0 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}

void sixSmall(int shiftRow, int shiftCol)
{
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][0 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][0 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}

void sevenSmall(int shiftRow, int shiftCol)
{
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][2 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}

void eightSmall(int shiftRow, int shiftCol)
{
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][0 + shiftCol]   = 1;
  frame[1 + shiftRow][2 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][0 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][0 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}

void nineSmall(int shiftRow, int shiftCol)
{
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  frame[0 + shiftRow][0 + shiftCol]   = 1;
  frame[0 + shiftRow][1 + shiftCol]   = 1;
  frame[0 + shiftRow][2 + shiftCol]   = 1;
  frame[1 + shiftRow][0 + shiftCol]   = 1;
  frame[1 + shiftRow][2 + shiftCol]   = 1;
  frame[2 + shiftRow][0 + shiftCol]   = 1;
  frame[2 + shiftRow][1 + shiftCol]   = 1;
  frame[2 + shiftRow][2 + shiftCol]   = 1;
  frame[3 + shiftRow][2 + shiftCol]   = 1;
  frame[4 + shiftRow][0 + shiftCol]   = 1;
  frame[4 + shiftRow][1 + shiftCol]   = 1;
  frame[4 + shiftRow][2 + shiftCol]   = 1;
}
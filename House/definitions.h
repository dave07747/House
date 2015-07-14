float budget = 3000;
int tempo = 0;
int track[10] = { 0 };

//Outside measurements
const float win = 5 * 3 * 10;
const float semiWin = (3.14159265358 * 9);
const float door = 7 * 4;
const float outArea = (7 * 30) + (2 * 12 * 30) + (2 * 12 * 54);
const float outPaint = (((outArea - door) - semiWin) - win);
const int paintCans = (ceil((outPaint*2) / 450));
const float outCost = paintCans*28.95;

//Inside measurements
const float carpArea = (11 * 12 + 12 * 11 + 14 * 14)/9;
const float carpBuy = ceil(10.4 * 5);
const float tileArea = (10 * 14 + 12 * 14);
const float tileBuy = ceil(tileArea / 12);
const float carpCost1 = carpBuy * 18.95;
const float carpCost2 = carpBuy* 29.95;
const float tileCost1 = (tileBuy) * 29.95;
const float tileCost2 = (tileBuy) * 38.95;

//Variables in return function
//Used in multiple loops
string r;
int i;
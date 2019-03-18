#ifndef _LPCLIB_H
#define _LPCLIB_H

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

typedef unsigned char smallint;

template <typename T>
class Vector;


void Error (string str);
string GetLine(istream & src=cin);
int GetInt(istream & src=cin);
double GetDouble(istream & src=cin);
string IntToString(int num);
string DoubleToString(double num);
int StringToInt(string str);
double StringToDouble(string str);
string ConvertToLowerCase(string str);
string ConvertToUpperCase(string str);
int RandomInt(int low, int high);
double RandomDouble(double low, double high);
bool RandomChance(double p);
void DefineColor(string name, smallint red, smallint green, smallint blue);
bool ColorIsDefined(string name);
void ListColors();
void GraphicsWindow(int width, int height, string color);
void UpdateDisplay();
int GetWidth();
int GetHeight();
void DrawLine(int x1, int y1, int x2, int y2, string color);
void DrawRectangle(int x, int y, int width, int height, string color, bool filled=false);
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, string color, bool filled=false);
void DrawCircle(int x, int y, int r, string color, bool filled=false);
void DrawEllipse(int x, int y, int rx, int ry, string color, bool filled=false);
void DrawPolygon(Vector<int> points, string color);
void DrawImage(string imageFileName, int x, int y);
void DrawImage(string imageFileName, int x, int y, int width, int height);
void DrawString(string str, int x, int y, string color, int fontsize=13);
int StringWidth(string str, int fontsize=13);
void WaitForMouseDown();
void WaitForMouseUp();
bool MouseIsDown();
int MouseX();
int MouseY();
char GetChar();
void Pause(double seconds);
void DisplayImage(string imageFileName);
void DisplayImage(string imageFileName, int width, int height);
void RemoveImage();
void HideSystemMessages();
void ConnectToDB(string username, string password);
void DBInsertRecord(int ID, int authcode, string record);
Vector<string> DBRetrieveAllRecords(int ID, int authcode);
Vector<string> DBRetrieveMyRecords(int ID, int authcode);

#define cin Error("Use of 'cin' with LPCLib is not allowed."); cin
#define main __lpclib_user_main
int __lpclib_user_main();

#endif

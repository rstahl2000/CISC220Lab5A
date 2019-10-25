/* Main Yahtzee.cpp
 * Sun Bilin
 * Robert Stahl and Chris Tiso
 * Main for Lab5A
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "TreePuzzle.hpp"
using namespace std;
int main() {
	string sarr[10] = {"run","tuxedo","ocelot","vast","bark","punctilios","hello","is","sibylic","go"};
	treePuzzle(10,sarr,0);
	//FOR EXTRA CREDIT
	//string sarr2[13] = {"xray","jack","superthriller","fa","noon","muddle","kindergartener","zoogeographical","window","dandelion","youthsploitation","byte","apple"};
	//treePuzzle(13,sarr2 ,1);

}


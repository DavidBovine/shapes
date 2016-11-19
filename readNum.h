#include <string>

using namespace std;

bool valiD(string input);
bool valiI(string input);

double readDouble(string prompt);
double readDouble(string prompt, double minVal);
double readDouble(string prompt, double minVal, double maxVal);

int readInt(string prompt);
int readInt(string prompt, int minVal);
int readInt(string prompt, int minVal, int maxVal);

void EtoC();
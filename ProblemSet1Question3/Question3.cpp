#include <iostream>
#include <cmath>

using namespace std;

bool functionone(int &a, int &b, int &c, int &d, int &e, int &f, int &nva)
{
    for (b = 1, c = 1; b <= 47, c <= 47; b++, ++c, nva+=2)   //b & c must be = to each other
    {        
                                                            //b & c must be less than 47
        for (e = 1; e <= 50; e++, nva++)
        {
            for (f = 1; f <= 50; f++, nva++)
            {
                // Problem 1
                if (b + c + d + f <= 50)
                {
                    a = b + c + e + f; // must be >= 28 
                    nva++;
                }
                else
                    break;

                // Problem 2, 3, & 4
                if ((e + f + 21) * (e + f + 21) == pow(e, 2) * a + 417 && e + f < a)//replicate d by doing e+f+21
                {
                    // Problem 2
                    if (e + f + 21 <= 50)//cannot go over 50
                    {
                        d = e + f + 21;
                        nva++;
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

bool functiontwo(int& a, int& b, int& c, int &d, int& e, int& f, int &g, int &h, int &i, int &j, int& nva)
{
    for (int h = 1, j = 1; h <= 50, j <= 50; h++, j++, nva++)
    {
        for (int g = 1; g <= 50; g++, nva++)
        {
            for (int i = 1; i <= 50; i++, nva++)
            {
                if (a + d == (pow(f - g, 2) - 1))
                {
                    nva++;
                    if ((h * j + e * 12) == pow(g + i, 2))
                    {
                        nva++;
                        if (4 * j == (pow(g, 2) + 39))
                        {
                            nva++;
                            if (pow(i - g, 9) == pow(f - h, 3))
                            {
                                nva++;
                                if (pow(g - c, 2) == f * c * c + 1)
                                {
                                    g = sqrt(g - c);
                                    nva++;
                                    return true;
                                }
                                else
                                    break;
                            }
                            else
                                break;
                        }
                        else
                            break;
                    }
                    else
                        break;
                }
                else
                    break;
            }
        }
    }

    return false;
}

bool functionthree(int& A, int& B, int& C, int& D, int& E, int& F, int& Z, int& z)
{
    return false;
}

int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0, z = 0, f = 0;
    int g = 0, h = 0, i = 0, j = 0;
    int nva = 0; //number variable assignments

    bool works = functionone(a, b, c, d, e, f, nva);

    if (works == true)
    {
        cout << "Correct, after " << nva << " assignments!" << endl;
        cout << " a =" << a << "| b =" << b << "| c =" << c << "| d =" << d << "| e =" << e << "| f =" << f << "| nva =" << nva << endl;
    }
    else
        cout << "Rip failed Question 1, after " << nva << "assignments. Be better." << endl;
    //cout << endl << "Q.E.D" << endl;

    bool contworks = functiontwo(a, b, c, d, e, f, g, h, i, j, nva);
    if (contworks == true)
    {
        cout << "Correct once again, after " << nva << " assignments!" << endl;
        cout << " a =" << a << "| b =" << b << "| c =" << c << "| d =" << d << "| e =" << e << "| f =" << f << "| g = " << g << "| h = " << h << "| i = " << i << "| j = " << j << "| nva =" << nva << endl;
    }
    else 
        cout << "Rip failed Question 2, after " << nva << " assignments. Be better." << endl;
    //cout << endl << "Q.E.D" << endl;

    return 0;
}
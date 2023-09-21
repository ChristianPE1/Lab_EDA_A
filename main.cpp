#include <iostream>
#include <random>
#include <fstream>

using namespace std;

double Euclidiana(vector<double> &a, vector<double> &b)
{
    double sum = 0.0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += pow(a[i] - b[i], 2);
    }
    return sqrt(sum);
}

void SaveData(vector<vector<double>> &matrix)
{
    ofstream file("dimension-3000.txt");

    for (int i = 0; i < 100; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            double distancia = Euclidiana(matrix[i], matrix[j]);
            file << distancia << " ";
        }
    }
    file.close();
}

int main()
{

    int d = 5000;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    vector<vector<double>> matrix(100, vector<double>(d, 0.0));

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < d; j++)
        {
            matrix[i][j] = dis(gen);
        }
    }

    SaveData(matrix);

    return 0;
}

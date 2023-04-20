#include <bits/stdc++.h>

using namespace std;

class ProbDistribution
{
public:
    virtual double getExpectedVal() = 0;
    virtual double getVariance() = 0;
};

class BinomialDistribution : public ProbDistribution
{
private:
    double p;
    int n, k;

public:
    BinomialDistribution(double p, int n, int k) : p(p), n(n), k(k) {}
    double getExpectedVal()
    {
        return n * p;
    }
    double getVariance()
    {
        return n * p * (1 - p);
    }
};

class GeometricDistribution : public ProbDistribution
{
private:
    double p;
    int k;

public:
    GeometricDistribution(double p, int k) : p(p), k(k) {}
    double getExpectedVal()
    {
        return 1 / p;
    }
    double getVariance()
    {
        return (1 - p) / (p * p);
    }
};

int main()
{
    BinomialDistribution binom(0.5, 10, 5);
    GeometricDistribution geom(0.25, 4);

    cout << "Binomial Distribution:" << endl;
    cout << "Expected Value: " << binom.getExpectedVal() << endl;
    cout << "Variance: " << binom.getVariance() << endl;

    cout << "Geometric Distribution:" << endl;
    cout << "Expected Value: " << geom.getExpectedVal() << endl;
    cout << "Variance: " << geom.getVariance() << endl;

    return 0;
}
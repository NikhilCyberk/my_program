#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int num_tests;
    std::cin >> num_tests;

    for (int i = 0; i < num_tests; i++)
    {
        int n;
        std::cin >> n;

        std::vector<int> vec(n);
        for (int j = 0; j < n; j++)
        {
            std::cin >> vec[j];
        }

        std::sort(vec.begin(), vec.end());

        int even_count = 0, odd_count = 0;
        for (int j = 0; j < n; j++)
        {
            if (vec[j] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

        if (even_count % 2 == 0 && odd_count % 2 == 0)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            bool flag = false;
            for (int j = 1; j < n; j++)
            {
                if (vec[j] - vec[j - 1] == 1)
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
            {
                std::cout << "YES" << std::endl;
            }
            else
            {
                std::cout << "NO" << std::endl;
            }
        }
    }

    return 0;
}

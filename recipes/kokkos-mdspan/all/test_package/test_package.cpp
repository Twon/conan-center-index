#include <experimental/mdspan>

using namespace std::experimental;

int main()
{
    basic_mdspan<double, 4, 4> matrix;

    using index_type = ptrdiff_t;

    cout << endl << "mdspan<double, " << s.extent(0) << "," << s.extent(1) << ">:" << endl;

    for (index_type i = 0;  i < matrix.extent(0);  ++i)
    {
        std::cout << std::right << std::setw(4) << std::setprecision(3) << (double) matrix(i, 0);

        for (index_type j = 1;  j < matrix.extent(1);  ++j)
        {
             std::cout << std::right << std::setw(6) << std::setprecision(3) << (double) matrix(i, j);
        }
        cout << endl;
    }
}

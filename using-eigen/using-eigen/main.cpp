#include <iostream>
#include <Eigen>

int main()
{
    std::vector<double> values{1};
    int rows_num = 1;
    int columns_num = 1;
    auto x_data = Eigen::Map<Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>>(values.data(),
                                                                                                    rows_num,
                                                                                                    columns_num );
    std::cout << typeid(x_data).name();
    return 0;
}

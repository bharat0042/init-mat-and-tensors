#include <iostream>
#include <shark/Data/Csv.h>

int main()
{
    std::vector<float> data{1, 2, 3, 4};
    auto m = remora::dense_matrix_adaptor<float>(data.data(), 2, 2);
    auto v = remora::dense_vector_adaptor<float>(data.data(), 4);
    return 0;
}

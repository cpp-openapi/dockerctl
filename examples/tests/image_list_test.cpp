#include "gtest/gtest.h"
#include "docker_test_client.h"
#include "ImageApi.h"
#include <iostream>

using namespace openapi;

TEST(docker, image_list)
{
    std::shared_ptr<IClient> c = GetTestClient();

    ImageApiService cc(c); 

    imageListParams params;
    imageListResponse resp = cc.imageList(params);

    ASSERT_EQ(resp.code, 200);
    ASSERT_TRUE(resp.payload.has_value());

    std::cout << resp << std::endl;
}
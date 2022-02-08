#include "gtest/gtest.h"
#include "docker_test_client.h"
#include "ContainerApi.h"
#include <iostream>

using namespace openapi;

TEST(docker, container_list)
{
    std::shared_ptr<IClient> c = GetTestClient();

    ContainerApiService cc(c); 

    containerListParams params;
    containerListResponse resp = cc.containerList(params);

    ASSERT_EQ(resp.code, 200);
    ASSERT_TRUE(resp.payload.has_value());

    std::cout << resp << std::endl;
}
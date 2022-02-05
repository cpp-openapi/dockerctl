#include "gtest/gtest.h"

#include "TaskSpecContainerSpecDNSConfig.h"

TEST(TaskSpecContainerSpecDNSConfig, Deserialize)
{
    // TODO: generate test content
    openapi::TaskSpecContainerSpecDNSConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
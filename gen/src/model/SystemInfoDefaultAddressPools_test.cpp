#include "gtest/gtest.h"

#include "SystemInfoDefaultAddressPools.h"

TEST(SystemInfoDefaultAddressPools, Deserialize)
{
    // TODO: generate test content
    openapi::SystemInfoDefaultAddressPools x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
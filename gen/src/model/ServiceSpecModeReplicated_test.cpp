#include "gtest/gtest.h"

#include "ServiceSpecModeReplicated.h"

TEST(ServiceSpecModeReplicated, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceSpecModeReplicated x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
#include "gtest/gtest.h"

#include "ServiceSpecMode.h"

TEST(ServiceSpecMode, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceSpecMode x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
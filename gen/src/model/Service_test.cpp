#include "gtest/gtest.h"

#include "Service.h"

TEST(Service, Deserialize)
{
    // TODO: generate test content
    openapi::Service x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
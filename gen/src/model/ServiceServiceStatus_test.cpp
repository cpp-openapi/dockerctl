#include "gtest/gtest.h"

#include "ServiceServiceStatus.h"

TEST(ServiceServiceStatus, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceServiceStatus x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
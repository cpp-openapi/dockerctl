#include "gtest/gtest.h"

#include "ServiceUpdateStatus.h"

TEST(ServiceUpdateStatus, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceUpdateStatus x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
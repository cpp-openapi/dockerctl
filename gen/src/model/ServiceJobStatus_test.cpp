#include "gtest/gtest.h"

#include "ServiceJobStatus.h"

TEST(ServiceJobStatus, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceJobStatus x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
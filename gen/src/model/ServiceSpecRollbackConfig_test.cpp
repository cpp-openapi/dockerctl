#include "gtest/gtest.h"

#include "ServiceSpecRollbackConfig.h"

TEST(ServiceSpecRollbackConfig, Deserialize)
{
    // TODO: generate test content
    openapi::ServiceSpecRollbackConfig x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
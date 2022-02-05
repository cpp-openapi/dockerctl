#include "gtest/gtest.h"

#include "TLSInfo.h"

TEST(TLSInfo, Deserialize)
{
    // TODO: generate test content
    openapi::TLSInfo x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
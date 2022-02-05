#include "gtest/gtest.h"

#include "OCIDescriptor.h"

TEST(OCIDescriptor, Deserialize)
{
    // TODO: generate test content
    openapi::OCIDescriptor x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
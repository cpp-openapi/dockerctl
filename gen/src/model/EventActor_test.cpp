#include "gtest/gtest.h"

#include "EventActor.h"

TEST(EventActor, Deserialize)
{
    // TODO: generate test content
    openapi::EventActor x;
    Json j;
    x.FromJSON(j);
    x.ToJSON(j);
}
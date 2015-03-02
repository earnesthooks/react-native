// Copyright 2004-present Facebook. All Rights Reserved.

#import <tgmath.h>

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import "RCTAssert.h"

#ifdef __cplusplus
extern "C" {
#endif

// Utility functions for JSON object <-> string serialization/deserialization
NSString *RCTJSONStringify(id jsonObject, NSError **error);
id RCTJSONParse(NSString *jsonString, NSError **error);

// Get MD5 hash of a string (TODO: currently unused. Remove?)
NSString *RCTMD5Hash(NSString *string);

// Get screen metrics in a thread-safe way
CGFloat RCTScreenScale(void);
CGSize RCTScreenSize(void);

// Round float coordinates to nearest whole screen pixel (not point)
CGFloat RCTRoundPixelValue(CGFloat value);
CGFloat RCTCeilPixelValue(CGFloat value);
CGFloat RCTFloorPixelValue(CGFloat value);

// Get current time, for precise performance metrics
NSTimeInterval RCTTGetAbsoluteTime(void);

// Method swizzling
void RCTSwapClassMethods(Class cls, SEL original, SEL replacement);
void RCTSwapInstanceMethods(Class cls, SEL original, SEL replacement);

// Module subclass support
BOOL RCTClassOverridesClassMethod(Class cls, SEL selector);
BOOL RCTClassOverridesInstanceMethod(Class cls, SEL selector);

// Enumerate all classes that conform to NSObject protocol
void RCTEnumerateClasses(void (^block)(Class cls));

#ifdef __cplusplus
}
#endif

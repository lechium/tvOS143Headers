//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NIServerAnalyticsManager : NSObject
{
    struct map<float, int, std::__1::less<float>, std::__1::allocator<std::__1::pair<const float, int>>> _distance;	// 8 = 0x8
    struct map<float, int, std::__1::less<float>, std::__1::allocator<std::__1::pair<const float, int>>> _updateRate;	// 32 = 0x20
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _direction;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x000000010001aa18
- (void).cxx_destruct;	// IMP=0x000000010001a9dc
- (void)submitAnalytics;	// IMP=0x000000010001a2e4
- (void)saveAnalytics:(long long)arg1 value1:(double)arg2 value2:(double)arg3;	// IMP=0x000000010001a194
- (void)_getDirectionMetricFromPointingCoordinates:(double)arg1 el:(double)arg2;	// IMP=0x0000000100019d54
- (id)init;	// IMP=0x0000000100019c40

@end


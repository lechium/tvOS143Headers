//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DeferredNetwork : NSObject
{
    double _firstSeen;	// 8 = 0x8
    _Bool _manualAssoc;	// 16 = 0x10
    NSMutableArray *_history;	// 24 = 0x18
    NSString *_ssid;	// 32 = 0x20
}

@property(readonly, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void)reset;	// IMP=0x000000010011ddf0
- (double)timeSinceFirstDeferral:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010011dd0c
- (_Bool)setNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010011dc3c
- (_Bool)doesContain:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010011dbdc
- (void)dealloc;	// IMP=0x000000010011db78
- (id)init;	// IMP=0x000000010011db08

@end


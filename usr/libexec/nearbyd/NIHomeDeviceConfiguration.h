//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIConfiguration.h"

@class NSArray, NSData;

@interface NIHomeDeviceConfiguration : NIConfiguration
{
    _Bool _anchor;	// 8 = 0x8
    unsigned long long _allowedDevices;	// 16 = 0x10
    NSData *_sessionKey;	// 24 = 0x18
    NSArray *_monitoredRegions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001aa54c
+ (id)new;	// IMP=0x00000001001aa3b8
- (void).cxx_destruct;	// IMP=0x00000001001aae1c
@property(copy) NSArray *monitoredRegions; // @synthesize monitoredRegions=_monitoredRegions;
@property(getter=isAnchor) _Bool anchor; // @synthesize anchor=_anchor;
@property(copy) NSData *sessionKey; // @synthesize sessionKey=_sessionKey;
@property unsigned long long allowedDevices; // @synthesize allowedDevices=_allowedDevices;
- (id)descriptionInternal;	// IMP=0x00000001001aacbc
- (id)description;	// IMP=0x00000001001aabf0
- (unsigned long long)hash;	// IMP=0x00000001001aab78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001aa918
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001aa698
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001aa5c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001aa554
- (id)initWithAllowedDevices:(unsigned long long)arg1 sessionKey:(id)arg2 asAnchor:(_Bool)arg3 regions:(id)arg4;	// IMP=0x00000001001aa458
- (id)initWithRegions:(id)arg1;	// IMP=0x00000001001aa3c4
- (id)init;	// IMP=0x00000001001aa324

@end


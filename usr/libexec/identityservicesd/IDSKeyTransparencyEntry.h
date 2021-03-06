//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSKeyTransparencyEntry : NSObject
{
    NSData *_pushToken;	// 8 = 0x8
    NSData *_loggableData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010061b840
@property(readonly, nonatomic) NSData *loggableData; // @synthesize loggableData=_loggableData;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (id)description;	// IMP=0x000000010061b6d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010061b6bc
- (unsigned long long)hash;	// IMP=0x000000010061b610
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010061b554
- (_Bool)isEqualToKeyTransparencyEntry:(id)arg1;	// IMP=0x000000010061b1fc
- (id)initWithPushToken:(id)arg1 loggableData:(id)arg2;	// IMP=0x000000010061b0e0

@end


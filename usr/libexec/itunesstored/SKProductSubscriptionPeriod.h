//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKProductSubscriptionPeriod : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004a2f0
- (id)copyXPCEncoding;	// IMP=0x000000010004a290
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000010004a1e8
- (id)initWithISO8601String:(id)arg1;	// IMP=0x0000000100049fb4
- (id)init;	// IMP=0x0000000100049f50
- (void)_setUnit:(unsigned long long)arg1;	// IMP=0x0000000100049f44
- (void)_setNumberOfUnits:(unsigned long long)arg1;	// IMP=0x0000000100049f38
@property(readonly, nonatomic) unsigned long long unit;
@property(readonly, nonatomic) unsigned long long numberOfUnits;

@end

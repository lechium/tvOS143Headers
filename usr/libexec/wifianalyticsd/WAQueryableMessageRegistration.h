//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@protocol WAQueryableMessageDelegate;

@interface WAQueryableMessageRegistration : NSObject <NSSecureCoding>
{
    id <WAQueryableMessageDelegate> _queryDelegate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100030518
- (void).cxx_destruct;	// IMP=0x000000010003057c
@property(nonatomic) __weak id <WAQueryableMessageDelegate> queryDelegate; // @synthesize queryDelegate=_queryDelegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100030524
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100030520
- (void)messageSubmittedAsync:(id)arg1;	// IMP=0x00000001000304a4
- (void)reRegister;	// IMP=0x0000000100030430
- (void)newConnectionWithProcessToken:(id)arg1;	// IMP=0x00000001000303bc
- (id)registerProcess:(id)arg1 forQueryableMessageWithidentifierDict:(id)arg2;	// IMP=0x0000000100030340

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface _PBAccountIdentifier : NSObject <NSCopying>
{
    NSString *_accountType;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010008e7a0
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008e73c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008e4f8
- (unsigned long long)hash;	// IMP=0x000000010008e43c
- (id)initWithAccountType:(id)arg1 altDSID:(id)arg2;	// IMP=0x000000010008e2f0

@end


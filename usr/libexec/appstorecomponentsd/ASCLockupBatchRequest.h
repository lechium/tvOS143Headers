//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSSet, NSString;

@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying>
{
    NSSet *_ids;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000a3d0
+ (id)lockupBatchRequestsFromRequests:(id)arg1;	// IMP=0x0000000100009e8c
- (void).cxx_destruct;	// IMP=0x000000010000ae10
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSSet *ids; // @synthesize ids=_ids;
- (id)lockupBatchRequestWithIDs:(id)arg1;	// IMP=0x000000010000ad34
@property(readonly, copy, nonatomic) NSArray *requests;
- (id)description;	// IMP=0x000000010000a9cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a7ac
- (unsigned long long)hash;	// IMP=0x000000010000a6b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000a6b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000a5bc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000a3d8
- (id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3;	// IMP=0x000000010000a2d4

@end

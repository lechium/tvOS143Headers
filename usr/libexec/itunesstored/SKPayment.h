//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;	// 8 = 0x8
}

+ (id)paymentWithProductIdentifier:(id)arg1;	// IMP=0x000000010010fff4
+ (id)paymentFromPurchaseIntentWithProduct:(id)arg1;	// IMP=0x000000010010fef4
+ (id)paymentWithProduct:(id)arg1;	// IMP=0x000000010010fe00
- (void).cxx_destruct;	// IMP=0x000000010011023c
@property(readonly, copy, nonatomic) NSDictionary *requestParameters;
@property(readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property(readonly, copy, nonatomic) NSString *partnerIdentifier;
@property(readonly, nonatomic) _Bool isStoreOriginated;
@property(readonly, copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property(readonly, nonatomic) _Bool simulatesAskToBuyInSandbox;
@property(readonly, copy, nonatomic) NSData *requestData;
@property(readonly, nonatomic) long long quantity;
@property(readonly, copy, nonatomic) NSString *productIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001100f8
- (unsigned long long)hash;	// IMP=0x0000000100110080
@property(readonly, copy, nonatomic) NSString *applicationUsername;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010fd8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010fd18
- (id)init;	// IMP=0x000000010010fcb4

@end


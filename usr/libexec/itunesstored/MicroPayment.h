//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MicroPaymentClient, NSData, NSDate, NSNumber, NSSet, NSString;

@interface MicroPayment : NSManagedObject
{
    NSString *_temporaryIdentifier;	// 8 = 0x8
    _Bool _transientFailed;	// 16 = 0x10
}

+ (_Bool)responseIsValid:(id)arg1;	// IMP=0x0000000100040554
+ (id)paymentEntityFromContext:(id)arg1;	// IMP=0x000000010004050c
@property(nonatomic, getter=isTransientFailed) _Bool transientFailed; // @synthesize transientFailed=_transientFailed;
- (void)_updateDownloadsFromResponse:(id)arg1;	// IMP=0x00000001000418fc
- (id)_temporaryIdentifier;	// IMP=0x000000010004189c
- (long long)_serverStateForClientState:(long long)arg1;	// IMP=0x0000000100041840
- (long long)_clientStateForServerState:(long long)arg1;	// IMP=0x00000001000417bc
- (void)setValuesWithPaymentTransaction:(id)arg1;	// IMP=0x000000010004134c
@property(retain, nonatomic) NSString *transactionIdentifier; // @dynamic transactionIdentifier;
- (void)awakeFromInsert;	// IMP=0x0000000100041250
- (void)setFailedWithError:(id)arg1;	// IMP=0x000000010004116c
@property(readonly, nonatomic) NSString *matchingIdentifier;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (void)mergeValuesFromResponse:(id)arg1;	// IMP=0x0000000100040d50
- (_Bool)isEqualToResponse:(id)arg1 compareAllFields:(_Bool)arg2;	// IMP=0x0000000100040b3c
- (id)copyPaymentTransaction;	// IMP=0x00000001000405b4
- (void)dealloc;	// IMP=0x00000001000404b8

// Remaining properties
@property(retain, nonatomic) NSString *actionParams; // @dynamic actionParams;
@property(retain, nonatomic) NSString *applicationUsername; // @dynamic applicationUsername;
@property(retain, nonatomic) NSString *askPermissionRequestIdentifier; // @dynamic askPermissionRequestIdentifier;
@property(retain, nonatomic) MicroPaymentClient *client; // @dynamic client;
@property(retain, nonatomic) NSString *discountIdentifier; // @dynamic discountIdentifier;
@property(retain, nonatomic) NSString *discountKeyIdentifier; // @dynamic discountKeyIdentifier;
@property(retain, nonatomic) NSString *discountNonceString; // @dynamic discountNonceString;
@property(retain, nonatomic) NSString *discountSignature; // @dynamic discountSignature;
@property(retain, nonatomic) NSNumber *discountTimestamp; // @dynamic discountTimestamp;
@property(retain, nonatomic) NSSet *downloads; // @dynamic downloads;
@property(retain, nonatomic) NSData *errorData; // @dynamic errorData;
@property(retain, nonatomic) NSDate *insertDate; // @dynamic insertDate;
@property(retain, nonatomic) NSDate *originalPurchaseDate; // @dynamic originalPurchaseDate;
@property(retain, nonatomic) NSString *originalTransactionIdentifier; // @dynamic originalTransactionIdentifier;
@property(copy, nonatomic) NSString *originatingStorefront; // @dynamic originatingStorefront;
@property(retain, nonatomic) NSString *partnerIdentifier; // @dynamic partnerIdentifier;
@property(retain, nonatomic) NSString *partnerTransactionIdentifier; // @dynamic partnerTransactionIdentifier;
@property(retain, nonatomic) NSString *productIdentifier; // @dynamic productIdentifier;
@property(retain, nonatomic) NSDate *purchaseDate; // @dynamic purchaseDate;
@property(retain, nonatomic) NSNumber *quantity; // @dynamic quantity;
@property(retain, nonatomic) NSData *receiptData; // @dynamic receiptData;
@property(retain, nonatomic) NSData *requestData; // @dynamic requestData;
@property(retain, nonatomic) NSNumber *simulatesAskToBuyInSandbox; // @dynamic simulatesAskToBuyInSandbox;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSNumber *supportsDeferredPayment; // @dynamic supportsDeferredPayment;
@property(retain, nonatomic) NSNumber *userDSID; // @dynamic userDSID;

@end


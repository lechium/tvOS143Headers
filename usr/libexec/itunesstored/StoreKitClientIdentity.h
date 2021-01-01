//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface StoreKitClientIdentity : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    _Bool _allowsBootstrapCellularData;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_bundleVersion;	// 32 = 0x20
    _Bool _hidesConfirmationDialogs;	// 40 = 0x28
    _Bool _ignoresInAppPurchaseRestriction;	// 41 = 0x29
    NSString *_receiptDirectoryPath;	// 48 = 0x30
    _Bool _requiresAuthenticationForPayment;	// 56 = 0x38
    NSNumber *_storeIdentifier;	// 64 = 0x40
    NSNumber *_storeVersion;	// 72 = 0x48
    _Bool _sandboxed;	// 80 = 0x50
    _Bool _usesIdentityAttributes;	// 81 = 0x51
    NSString *_vendorIdentifier;	// 88 = 0x58
}

+ (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2;	// IMP=0x00000001001b126c
+ (void)initialize;	// IMP=0x00000001001b1230
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(nonatomic) _Bool usesIdentityAttributes; // @synthesize usesIdentityAttributes=_usesIdentityAttributes;
@property(copy, nonatomic) NSNumber *storeVersion; // @synthesize storeVersion=_storeVersion;
@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(nonatomic) _Bool requiresAuthenticationForPayment; // @synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment;
@property(copy, nonatomic) NSString *receiptDirectoryPath; // @synthesize receiptDirectoryPath=_receiptDirectoryPath;
@property(nonatomic) _Bool ignoresInAppPurchaseRestriction; // @synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction;
@property(nonatomic) _Bool hidesConfirmationDialogs; // @synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;	// IMP=0x00000001001b1a9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001b1988
- (void)setValuesWithSoftwareApplicationProxy:(id)arg1;	// IMP=0x00000001001b16c8
- (void)setValuesWithPaymentQueueClient:(id)arg1;	// IMP=0x00000001001b14b0
- (void)dealloc;	// IMP=0x00000001001b1438

@end


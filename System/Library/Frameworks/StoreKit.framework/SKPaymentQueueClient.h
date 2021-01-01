/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKPaymentQueueClientDelegate;
@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {

	BOOL _allowsBootstrapCellularData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	long long _environmentType;
	BOOL _hidesConfirmationDialogs;
	BOOL _ignoresInAppPurchaseRestriction;
	NSString* _receiptDirectoryPath;
	BOOL _requiresAuthenticationForPayment;
	NSNumber* _storeExternalVersion;
	NSNumber* _storeItemIdentifier;
	NSString* _vendorIdentifier;
	id<SKPaymentQueueClientDelegate> _delegate;

}

@property (assign,nonatomic) BOOL allowsBootstrapCellularData;                              //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                        //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic,__weak) id<SKPaymentQueueClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long environmentType;                                     //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) BOOL hidesConfirmationDialogs;                                 //@synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs - In the implementation block
@property (assign,nonatomic) BOOL ignoresInAppPurchaseRestriction;                          //@synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction - In the implementation block
@property (nonatomic,copy) NSString * receiptDirectoryPath;                                 //@synthesize receiptDirectoryPath=_receiptDirectoryPath - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthenticationForPayment;                         //@synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;                                 //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;                                  //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                                     //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SKPaymentQueueClientDelegate>)delegate;
-(void)setDelegate:(id<SKPaymentQueueClientDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setEnvironmentType:(long long)arg1 ;
-(long long)environmentType;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(id)plist;
-(BOOL)hidesConfirmationDialogs;
-(BOOL)ignoresInAppPurchaseRestriction;
-(BOOL)requiresAuthenticationForPayment;
-(NSString *)receiptDirectoryPath;
-(void)setHidesConfirmationDialogs:(BOOL)arg1 ;
-(void)setIgnoresInAppPurchaseRestriction:(BOOL)arg1 ;
-(void)setReceiptDirectoryPath:(NSString *)arg1 ;
-(void)setRequiresAuthenticationForPayment:(BOOL)arg1 ;
-(void)setStoreExternalVersion:(NSNumber *)arg1 ;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)storeExternalVersion;
@end


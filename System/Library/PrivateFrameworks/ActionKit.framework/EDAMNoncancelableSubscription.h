/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMUser, NSString;

@interface EDAMNoncancelableSubscription : FATObject {

	NSNumber* _subscriptionId;
	EDAMUser* _user;
	NSNumber* _premiumServiceStatus;
	NSString* _premiumCommerceService;
	NSString* _itunesReceiptData;
	NSString* _amazonUserId;
	NSString* _amazonPurchaseToken;
	NSString* _premiumServiceSku;
	NSNumber* _nextPaymentDue;
	NSNumber* _premiumLockUntil;
	NSString* _currency;
	NSNumber* _unitPrice;
	NSString* _itunesOriginalTransactionId;

}

@property (nonatomic,retain) NSNumber * subscriptionId;                           //@synthesize subscriptionId=_subscriptionId - In the implementation block
@property (nonatomic,retain) EDAMUser * user;                                     //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSNumber * premiumServiceStatus;                     //@synthesize premiumServiceStatus=_premiumServiceStatus - In the implementation block
@property (nonatomic,retain) NSString * premiumCommerceService;                   //@synthesize premiumCommerceService=_premiumCommerceService - In the implementation block
@property (nonatomic,retain) NSString * itunesReceiptData;                        //@synthesize itunesReceiptData=_itunesReceiptData - In the implementation block
@property (nonatomic,retain) NSString * amazonUserId;                             //@synthesize amazonUserId=_amazonUserId - In the implementation block
@property (nonatomic,retain) NSString * amazonPurchaseToken;                      //@synthesize amazonPurchaseToken=_amazonPurchaseToken - In the implementation block
@property (nonatomic,retain) NSString * premiumServiceSku;                        //@synthesize premiumServiceSku=_premiumServiceSku - In the implementation block
@property (nonatomic,retain) NSNumber * nextPaymentDue;                           //@synthesize nextPaymentDue=_nextPaymentDue - In the implementation block
@property (nonatomic,retain) NSNumber * premiumLockUntil;                         //@synthesize premiumLockUntil=_premiumLockUntil - In the implementation block
@property (nonatomic,retain) NSString * currency;                                 //@synthesize currency=_currency - In the implementation block
@property (nonatomic,retain) NSNumber * unitPrice;                                //@synthesize unitPrice=_unitPrice - In the implementation block
@property (nonatomic,retain) NSString * itunesOriginalTransactionId;              //@synthesize itunesOriginalTransactionId=_itunesOriginalTransactionId - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMUser *)user;
-(void)setUser:(EDAMUser *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSNumber *)nextPaymentDue;
-(NSString *)premiumCommerceService;
-(void)setPremiumCommerceService:(NSString *)arg1 ;
-(NSNumber *)unitPrice;
-(void)setUnitPrice:(NSNumber *)arg1 ;
-(NSNumber *)premiumServiceStatus;
-(void)setPremiumServiceStatus:(NSNumber *)arg1 ;
-(void)setNextPaymentDue:(NSNumber *)arg1 ;
-(NSNumber *)premiumLockUntil;
-(void)setPremiumLockUntil:(NSNumber *)arg1 ;
-(NSNumber *)subscriptionId;
-(void)setSubscriptionId:(NSNumber *)arg1 ;
-(NSString *)itunesReceiptData;
-(void)setItunesReceiptData:(NSString *)arg1 ;
-(NSString *)amazonUserId;
-(void)setAmazonUserId:(NSString *)arg1 ;
-(NSString *)amazonPurchaseToken;
-(void)setAmazonPurchaseToken:(NSString *)arg1 ;
-(NSString *)premiumServiceSku;
-(void)setPremiumServiceSku:(NSString *)arg1 ;
-(NSString *)itunesOriginalTransactionId;
-(void)setItunesOriginalTransactionId:(NSString *)arg1 ;
@end


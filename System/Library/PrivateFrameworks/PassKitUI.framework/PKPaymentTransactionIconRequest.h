/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitUI/PassKitUI-Structs.h>
@class PKPaymentTransaction, PKMerchant, NSString, NSArray;

@interface PKPaymentTransactionIconRequest : NSObject {

	BOOL _ignoreLogoURL;
	PKPaymentTransaction* _transaction;
	PKMerchant* _merchant;
	NSString* _cacheKey;
	NSArray* _completionHandlers;
	CGSize _size;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                           //@synthesize merchant=_merchant - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                             //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,retain) NSArray * completionHandlers;                    //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,nonatomic) BOOL ignoreLogoURL;                              //@synthesize ignoreLogoURL=_ignoreLogoURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(PKPaymentTransaction *)transaction;
-(NSString *)cacheKey;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(PKMerchant *)merchant;
-(NSArray *)completionHandlers;
-(void)setCompletionHandlers:(NSArray *)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(BOOL)ignoreLogoURL;
-(void)setIgnoreLogoURL:(BOOL)arg1 ;
@end


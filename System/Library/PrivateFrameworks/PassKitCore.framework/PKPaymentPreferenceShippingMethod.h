/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentPreference.h>

@class NSString;

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference {

	NSString* _currency;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
@end


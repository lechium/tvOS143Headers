/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse {

	NSString* _passURL;
	unsigned long long _appletState;

}

@property (nonatomic,copy,readonly) NSString * passURL;                     //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,readonly) unsigned long long appletState;              //@synthesize appletState=_appletState - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)passURL;
-(unsigned long long)appletState;
@end

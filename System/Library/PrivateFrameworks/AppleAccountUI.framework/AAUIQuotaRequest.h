/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUIQuotaRequest : AARequest {

	ACAccount* _account;
	BOOL _isDetailedRequest;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 ;
-(id)urlString;
-(id)urlRequest;
-(id)initDetailedRequestWithAccount:(id)arg1 ;
@end


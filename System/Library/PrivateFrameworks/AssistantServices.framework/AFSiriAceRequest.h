/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@protocol OS_xpc_object;
@class NSObject;

@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest> {

	NSObject*<OS_xpc_object> _startRequestData;
	unsigned long long _requestOptions;

}
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStartRequest:(id)arg1 requestOptions:(unsigned long long)arg2 ;
-(id)initWithStartRequest:(id)arg1 ;
@end


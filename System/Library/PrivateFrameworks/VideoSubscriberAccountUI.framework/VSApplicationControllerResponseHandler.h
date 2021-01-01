/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VSApplicationControllerResponseHandler : NSObject
-(void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_parseSAMLResponseString:(id)arg1 error:(id*)arg2 ;
-(void)_setSubscriptionDataWithResponse:(id)arg1 forJavascriptResponse:(id)arg2 ;
@end


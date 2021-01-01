/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSRegistrationControlDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {

	IDSDaemonRequestTimer* _requestTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registrationControlResponseForRequestID:(id)arg1 withError:(id)arg2 ;
-(void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(id)arg2 withError:(id)arg3 ;
-(id)initWithRequestTimer:(id)arg1 ;
@end


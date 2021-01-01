/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputDeviceAuthorizationSessionInternal;

@interface AVOutputDeviceAuthorizationSession : NSObject {

	AVOutputDeviceAuthorizationSessionInternal* _ivars;

}

@property (__weak) id<AVOutputDeviceAuthorizationSessionDelegate> delegate; 
+(void)initialize;
+(id)sharedAuthorizationSession;
+(id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)dealloc;
-(id<AVOutputDeviceAuthorizationSessionDelegate>)delegate;
-(void)setDelegate:(id<AVOutputDeviceAuthorizationSessionDelegate>)arg1 ;
-(id)impl;
-(id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2 ;
-(BOOL)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3 ;
@end

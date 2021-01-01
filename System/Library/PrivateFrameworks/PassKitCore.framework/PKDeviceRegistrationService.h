/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject {

	PKXPCService* _remoteService;
	BOOL _isRegistering;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)performDeviceRegistrationWithCompletion:(/*^block*/id)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject;

@interface AVAssetCustomURLAuthentication : NSObject {

	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)copyKeychainCredentialForUrl:(id)arg1 ;
+(int)sendAuthResponse:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 disposition:(long long)arg3 credential:(id)arg4 authHandler:(OpaqueFigCustomURLHandlerRef)arg5 ;
-(void)dealloc;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(int)_handleAuthChallenge:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char*)arg3 ;
@end


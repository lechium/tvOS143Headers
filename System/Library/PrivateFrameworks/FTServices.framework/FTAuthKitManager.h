/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AKAppleIDSession, NSObject;

@interface FTAuthKitManager : NSObject {

	AKAppleIDSession* _akAppleIDSession;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end


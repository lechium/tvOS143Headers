/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface ICDelegationConsumerService : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _activeSessions;

}
-(id)init;
-(void)performRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end


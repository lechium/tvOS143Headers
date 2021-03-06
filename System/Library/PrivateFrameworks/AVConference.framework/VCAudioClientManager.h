/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCAudioClientManager : NSObject {

	NSMutableDictionary* _clientList;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)unregisterBlocksForService;
-(id)getAudioClientWithProcessId:(id)arg1 create:(BOOL)arg2 ;
@end


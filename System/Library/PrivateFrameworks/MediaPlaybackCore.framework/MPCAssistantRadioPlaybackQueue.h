/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSString;

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue {

	NSString* _stationStringID;

}

@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
+(id)radioQueueWithContextID:(id)arg1 stationStringID:(id)arg2 ;
-(id)description;
-(NSString *)stationStringID;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(BOOL)supportedOnCurrentPlatform;
-(id)initWithContextID:(id)arg1 stationStringID:(id)arg2 ;
@end

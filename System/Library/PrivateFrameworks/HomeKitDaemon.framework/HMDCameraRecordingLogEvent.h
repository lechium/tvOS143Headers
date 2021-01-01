/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSUUID;

@interface HMDCameraRecordingLogEvent : HMDLogEvent {

	NSUUID* _sessionID;
	unsigned long long _sequenceNumber;
	NSUUID* _cameraID;

}

@property (copy,readonly) NSUUID * cameraID;                         //@synthesize cameraID=_cameraID - In the implementation block
@property (copy,readonly) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) unsigned long long sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (copy,readonly) NSUUID * ephemeralCameraID; 
@property (readonly) unsigned long long startTimestamp; 
@property (readonly) unsigned long long endTimestamp; 
-(NSUUID *)sessionID;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)startTimestamp;
-(unsigned long long)endTimestamp;
-(id)attributeDescriptions;
-(NSUUID *)cameraID;
-(id)initWithEventType:(id)arg1 sessionID:(id)arg2 cameraID:(id)arg3 sequenceNumber:(unsigned long long)arg4 ;
-(NSUUID *)ephemeralCameraID;
@end


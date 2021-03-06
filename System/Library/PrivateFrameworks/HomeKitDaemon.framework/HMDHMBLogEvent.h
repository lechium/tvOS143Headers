/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDHMBLogEvent : HMDLogEvent {

	int _containerType;
	int _zoneType;

}

@property (readonly) int containerType;              //@synthesize containerType=_containerType - In the implementation block
@property (readonly) int zoneType;                   //@synthesize zoneType=_zoneType - In the implementation block
-(int)containerType;
-(int)zoneType;
-(id)initWithEventType:(id)arg1 cloudZoneID:(id)arg2 ;
@end


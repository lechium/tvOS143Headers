/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface AXPidSuspensionInfo : NSObject {

	NSMutableDictionary* _suspendsPids;
	NSMutableDictionary* _probationPids;
	NSMutableDictionary* _tentativeSuspendedPids;
	NSMutableDictionary* _associatedRemotePidCache;
	NSMutableDictionary* _associatedRemotePids;

}
+(id)shared;
-(id)init;
-(id)timeoutProbationPidsForDisplay:(int)arg1 ;
-(id)suspendedPidsForDisplay:(int)arg1 ;
-(id)associatedRemotePidCacheForDisplay:(int)arg1 ;
-(id)tentativeSuspendedPidsForDisplay:(int)arg1 ;
-(id)associatedRemotePidsForDisplay:(int)arg1 ;
@end

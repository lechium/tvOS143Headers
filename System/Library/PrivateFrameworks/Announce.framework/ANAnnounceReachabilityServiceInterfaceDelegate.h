/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANAnnounceReachabilityServiceInterfaceDelegate <NSObject>
@required
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeName:(id)arg2;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomName:(id)arg2 inHomeName:(id)arg3;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeUUID:(id)arg2;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomUUID:(id)arg2 inHomeUUID:(id)arg3;

@end


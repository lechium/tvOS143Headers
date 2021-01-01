/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NAFuture;


@protocol HMBMirrorProtocol <NSObject>
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID; 
@property (nonatomic,readonly) NAFuture * startUp; 
@required
-(id)destroy;
-(id)shutdown;
-(id)flush;
-(id<HMBLocalZoneID>)zoneID;
-(NAFuture *)startUp;
-(void)startUpWithLocalZone:(id)arg1;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;

@end


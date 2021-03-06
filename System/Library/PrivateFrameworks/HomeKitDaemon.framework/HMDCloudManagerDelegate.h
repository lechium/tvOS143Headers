/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDCloudManagerDelegate
@required
-(void)fetchHomeFromCloudZone:(id)arg1 cloudConflict:(BOOL)arg2 withDelay:(double)arg3;
-(void)fetchHomeManagerCloudConflict:(BOOL)arg1 withDelay:(double)arg2;
-(void)uploadHomeConfigToCloud:(BOOL)arg1 withDelay:(double)arg2;
-(void)fetchHomeDataFromCloudWithCloudConflict:(BOOL)arg1 withDelay:(double)arg2;
-(void)archiveServerToken:(id)arg1;
-(void)eraseLocalHomeData;
-(void)reloadHomeDataFromLocalStore:(BOOL)arg1;
-(void)fetchAllZones;
-(void)verifyHomeDataFromCloud:(/*^block*/id)arg1;
-(void)schedulePostFetch;
-(void)notifyZonesCloudZoneReady:(id)arg1;
-(void)kickAccountAvailabilityCheck;

@end


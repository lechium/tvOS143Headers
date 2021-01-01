/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENRegionMonitorDataSource <NSObject>
@property (assign,nonatomic,__weak) NSObject*<ENRegionMonitorSourceDelegate> delegate; 
@required
-(NSObject*<ENRegionMonitorSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startMonitoring;
-(void)stopMonitoring;
-(id)currentRegionVisit;

@end

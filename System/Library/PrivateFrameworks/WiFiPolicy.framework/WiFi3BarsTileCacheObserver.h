/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject {

	TBDataSourceMediator* _dataSourceMediator;

}

@property (nonatomic,retain) TBDataSourceMediator * dataSourceMediator;              //@synthesize dataSourceMediator=_dataSourceMediator - In the implementation block
-(id)initWithDataSourceMediator:(id)arg1 ;
-(TBDataSourceMediator *)dataSourceMediator;
-(void)setDataSourceMediator:(TBDataSourceMediator *)arg1 ;
-(void)_scheduleXPCActivity;
-(void)_submitCacheAvailabilityMetric;
@end


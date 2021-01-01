/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DuetActivityScheduler/_DASWidgetInfo.h>

@class NSDate, NSString;

@interface _DASWidgetRefresh : _DASWidgetInfo {

	BOOL _isDASInitiated;
	NSDate* _refreshDate;
	NSString* _refreshReason;

}

@property (nonatomic,retain) NSDate * refreshDate;                  //@synthesize refreshDate=_refreshDate - In the implementation block
@property (assign,nonatomic) BOOL isDASInitiated;                   //@synthesize isDASInitiated=_isDASInitiated - In the implementation block
@property (nonatomic,retain) NSString * refreshReason;              //@synthesize refreshReason=_refreshReason - In the implementation block
+(id)refreshAt:(id)arg1 forWidgetID:(id)arg2 ;
-(NSDate *)refreshDate;
-(void)setRefreshDate:(NSDate *)arg1 ;
-(BOOL)isDASInitiated;
-(void)setIsDASInitiated:(BOOL)arg1 ;
-(NSString *)refreshReason;
-(void)setRefreshReason:(NSString *)arg1 ;
@end


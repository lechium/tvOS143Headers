/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject {

	long long _day;
	NSMutableSet* _events;

}

@property (assign,nonatomic) long long day;                        //@synthesize day=_day - In the implementation block
@property (nonatomic,readonly) NSMutableSet * events;              //@synthesize events=_events - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)setDay:(long long)arg1 ;
-(long long)day;
-(NSMutableSet *)events;
-(id)initWithDay:(long long)arg1 ;
@end


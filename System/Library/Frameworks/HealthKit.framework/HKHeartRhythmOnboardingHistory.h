/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface HKHeartRhythmOnboardingHistory : NSObject {

	NSDictionary* _dataSource;
	long long _count;

}

@property (nonatomic,readonly) NSDictionary * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) long long count;                            //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) long long maxOnboardedVersion; 
-(id)description;
-(long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dataSource;
-(id)_filterLessThanOrEqualToVersion:(long long)arg1 ;
-(id)_filterOnlyLessThanVersion:(long long)arg1 ;
-(id)_emptyHistory;
-(id)filteredHistoryByVersion:(long long)arg1 filterType:(long long)arg2 ;
-(long long)maxOnboardedVersion;
-(BOOL)containsOnboardedVersion:(long long)arg1 ;
@end


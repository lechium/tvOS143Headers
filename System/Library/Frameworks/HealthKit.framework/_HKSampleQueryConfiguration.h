/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSArray;

@interface _HKSampleQueryConfiguration : HKQueryServerConfiguration {

	BOOL _includeAutomaticTimeZones;
	BOOL _includeContributorInformation;
	NSArray* _sortDescriptors;
	unsigned long long _limit;

}

@property (nonatomic,copy) NSArray * sortDescriptors;                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(void)setIncludeContributorInformation:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
-(BOOL)includeContributorInformation;
@end


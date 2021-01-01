/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying> {

	unsigned long long _ocnt_precomputedHash;
	BOOL _shouldConsiderAlarms;
	NSDictionary* _titlesAndParticipants;
	double _earliestStartTime;

}

@property (nonatomic,readonly) NSDictionary * titlesAndParticipants;              //@synthesize titlesAndParticipants=_titlesAndParticipants - In the implementation block
@property (nonatomic,readonly) double earliestStartTime;                          //@synthesize earliestStartTime=_earliestStartTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldConsiderAlarms;                         //@synthesize shouldConsiderAlarms=_shouldConsiderAlarms - In the implementation block
+(id)eventMetadataWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)_hash;
-(BOOL)isEqualToEventMetadata:(id)arg1 ;
-(id)initWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 ;
-(NSDictionary *)titlesAndParticipants;
-(double)earliestStartTime;
-(BOOL)shouldConsiderAlarms;
@end


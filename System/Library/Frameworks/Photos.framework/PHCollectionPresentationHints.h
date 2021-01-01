/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol PHCollectionPresentationHints <NSObject>
@property (nonatomic,readonly) long long temporalRange; 
@property (nonatomic,readonly) unsigned long long socialRelationships; 
@property (nonatomic,readonly) long long tripType; 
@property (nonatomic,readonly) long long qualityCategory; 
@property (nonatomic,readonly) unsigned long long recommendedMoods; 
@property (nonatomic,readonly) unsigned long long forbiddenMoods; 
@property (nonatomic,readonly) NSDictionary * musicGenreDistribution; 
@required
-(NSDictionary *)musicGenreDistribution;
-(long long)temporalRange;
-(unsigned long long)socialRelationships;
-(long long)tripType;
-(long long)qualityCategory;
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;

@end

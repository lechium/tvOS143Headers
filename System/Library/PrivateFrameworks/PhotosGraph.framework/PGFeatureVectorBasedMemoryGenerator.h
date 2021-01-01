/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSSet;

@interface PGFeatureVectorBasedMemoryGenerator : PGMemoryGenerator {

	NSSet* _featureVectors;
	unsigned long long _relatedType;
	unsigned long long _memoryCategory;
	unsigned long long _memorySubcategory;
	double _minimumPeopleMatchingScore;
	double _maximumLocationMatchingDistance;
	double _minimumLocationMatchingScore;

}

@property (nonatomic,retain) NSSet * featureVectors;                              //@synthesize featureVectors=_featureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long relatedType;                      //@synthesize relatedType=_relatedType - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;                   //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) unsigned long long memorySubcategory;                //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (assign,nonatomic) double minimumLocationMatchingScore;                 //@synthesize minimumLocationMatchingScore=_minimumLocationMatchingScore - In the implementation block
@property (assign,nonatomic) double maximumLocationMatchingDistance;              //@synthesize maximumLocationMatchingDistance=_maximumLocationMatchingDistance - In the implementation block
@property (assign,nonatomic) double minimumPeopleMatchingScore;                   //@synthesize minimumPeopleMatchingScore=_minimumPeopleMatchingScore - In the implementation block
-(id)initWithController:(id)arg1 ;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(void)setMemorySubcategory:(unsigned long long)arg1 ;
-(unsigned long long)memoryCategory;
-(unsigned long long)memorySubcategory;
-(id)_potentialMemoriesForDryTesting;
-(id)generateMemories:(unsigned long long)arg1 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
-(unsigned long long)_postProcessMatch:(id)arg1 ;
-(NSSet *)featureVectors;
-(void)setFeatureVectors:(NSSet *)arg1 ;
-(unsigned long long)relatedType;
-(void)setRelatedType:(unsigned long long)arg1 ;
-(double)minimumPeopleMatchingScore;
-(void)setMinimumPeopleMatchingScore:(double)arg1 ;
-(double)maximumLocationMatchingDistance;
-(void)setMaximumLocationMatchingDistance:(double)arg1 ;
-(double)minimumLocationMatchingScore;
-(void)setMinimumLocationMatchingScore:(double)arg1 ;
@end


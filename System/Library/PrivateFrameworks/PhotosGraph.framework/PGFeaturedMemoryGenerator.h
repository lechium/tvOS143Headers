/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator {

	BOOL _usesLowRequirements;
	BOOL _oldMemory;
	NSDate* _upperBoundLocalDate;

}

@property (nonatomic,retain) NSDate * upperBoundLocalDate;              //@synthesize upperBoundLocalDate=_upperBoundLocalDate - In the implementation block
@property (assign,nonatomic) BOOL usesLowRequirements;                  //@synthesize usesLowRequirements=_usesLowRequirements - In the implementation block
@property (assign,nonatomic) BOOL oldMemory;                            //@synthesize oldMemory=_oldMemory - In the implementation block
-(NSDate *)upperBoundLocalDate;
-(void)setUpperBoundLocalDate:(NSDate *)arg1 ;
-(BOOL)usesLowRequirements;
-(void)setUsesLowRequirements:(BOOL)arg1 ;
-(BOOL)oldMemory;
-(void)setOldMemory:(BOOL)arg1 ;
@end


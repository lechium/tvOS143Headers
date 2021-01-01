/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSSet, PHAsset;

@interface PGKeyAssetCurationOptions : NSObject <NSCopying> {

	BOOL _focusOnPeople;
	BOOL _complete;
	BOOL _allowContextualTrip;
	BOOL _useSummarizer;
	BOOL _useContextualCurationOnly;
	BOOL _prefilterAssetsWithFaces;
	BOOL _promoteAutoplayableItems;
	CLLocation* _referenceLocation;
	NSSet* _referencePersonUUIDs;
	unsigned long long _precision;
	double _prefilterAssetsWithFacesThreshold;
	PHAsset* _referenceAsset;

}

@property (nonatomic,retain) CLLocation * referenceLocation;                        //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,retain) NSSet * referencePersonUUIDs;                          //@synthesize referencePersonUUIDs=_referencePersonUUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long precision;                          //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) BOOL complete;                                         //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) BOOL focusOnPeople;                                    //@synthesize focusOnPeople=_focusOnPeople - In the implementation block
@property (assign,nonatomic) BOOL allowContextualTrip;                              //@synthesize allowContextualTrip=_allowContextualTrip - In the implementation block
@property (assign,nonatomic) BOOL useSummarizer;                                    //@synthesize useSummarizer=_useSummarizer - In the implementation block
@property (assign,nonatomic) BOOL prefilterAssetsWithFaces;                         //@synthesize prefilterAssetsWithFaces=_prefilterAssetsWithFaces - In the implementation block
@property (assign,nonatomic) double prefilterAssetsWithFacesThreshold;              //@synthesize prefilterAssetsWithFacesThreshold=_prefilterAssetsWithFacesThreshold - In the implementation block
@property (assign,nonatomic) BOOL useContextualCurationOnly;                        //@synthesize useContextualCurationOnly=_useContextualCurationOnly - In the implementation block
@property (assign,nonatomic) BOOL promoteAutoplayableItems;                         //@synthesize promoteAutoplayableItems=_promoteAutoplayableItems - In the implementation block
@property (nonatomic,readonly) PHAsset * referenceAsset;                            //@synthesize referenceAsset=_referenceAsset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)dictionaryRepresentation;
-(BOOL)complete;
-(unsigned long long)precision;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(CLLocation *)referenceLocation;
-(void)setComplete:(BOOL)arg1 ;
-(void)setPrecision:(unsigned long long)arg1 ;
-(PHAsset *)referenceAsset;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(void)setAllowContextualTrip:(BOOL)arg1 ;
-(id)initWithReferenceAsset:(id)arg1 ;
-(void)setFocusOnPeople:(BOOL)arg1 ;
-(void)setReferencePersonUUIDs:(NSSet *)arg1 ;
-(BOOL)focusOnPeople;
-(NSSet *)referencePersonUUIDs;
-(BOOL)allowContextualTrip;
-(BOOL)useSummarizer;
-(void)setUseSummarizer:(BOOL)arg1 ;
-(BOOL)useContextualCurationOnly;
-(void)setUseContextualCurationOnly:(BOOL)arg1 ;
-(BOOL)prefilterAssetsWithFaces;
-(void)setPrefilterAssetsWithFaces:(BOOL)arg1 ;
-(double)prefilterAssetsWithFacesThreshold;
-(void)setPrefilterAssetsWithFacesThreshold:(double)arg1 ;
-(BOOL)promoteAutoplayableItems;
-(void)setPromoteAutoplayableItems:(BOOL)arg1 ;
@end


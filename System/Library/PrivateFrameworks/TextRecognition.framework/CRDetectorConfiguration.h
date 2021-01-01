/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@class NSURL;

@interface CRDetectorConfiguration : NSObject {

	BOOL _cpuOnly;
	BOOL _logIntermediateResults;
	BOOL _runFullTile;
	BOOL _mergeFullTile;
	int _mergingType;
	NSURL* _customModelURL;
	double _tileOverlap;
	double _scoreMapScaleFactor;
	CGSize _tileSize;
	CGSize _minimumInputSize;
	CGSize _maximumInputSize;

}

@property (readonly) BOOL cpuOnly;                             //@synthesize cpuOnly=_cpuOnly - In the implementation block
@property (readonly) BOOL logIntermediateResults;              //@synthesize logIntermediateResults=_logIntermediateResults - In the implementation block
@property (readonly) NSURL * customModelURL;                   //@synthesize customModelURL=_customModelURL - In the implementation block
@property (assign) BOOL runFullTile;                           //@synthesize runFullTile=_runFullTile - In the implementation block
@property (assign) BOOL mergeFullTile;                         //@synthesize mergeFullTile=_mergeFullTile - In the implementation block
@property (readonly) CGSize tileSize;                          //@synthesize tileSize=_tileSize - In the implementation block
@property (readonly) double tileOverlap;                       //@synthesize tileOverlap=_tileOverlap - In the implementation block
@property (readonly) CGSize minimumInputSize;                  //@synthesize minimumInputSize=_minimumInputSize - In the implementation block
@property (readonly) CGSize maximumInputSize;                  //@synthesize maximumInputSize=_maximumInputSize - In the implementation block
@property (readonly) double scoreMapScaleFactor;               //@synthesize scoreMapScaleFactor=_scoreMapScaleFactor - In the implementation block
@property (assign) int mergingType;                            //@synthesize mergingType=_mergingType - In the implementation block
-(CGSize)tileSize;
-(id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2 ;
-(CGSize)maximumInputSize;
-(BOOL)runFullTile;
-(BOOL)mergeFullTile;
-(BOOL)logIntermediateResults;
-(int)mergingType;
-(NSURL *)customModelURL;
-(BOOL)cpuOnly;
-(id)initV1DefaultConfig;
-(id)initV2DefaultConfig;
-(void)setRunFullTile:(BOOL)arg1 ;
-(void)setMergeFullTile:(BOOL)arg1 ;
-(double)tileOverlap;
-(CGSize)minimumInputSize;
-(double)scoreMapScaleFactor;
-(void)setMergingType:(int)arg1 ;
@end


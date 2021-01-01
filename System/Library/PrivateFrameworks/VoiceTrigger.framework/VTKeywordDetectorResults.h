/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VTKeywordDetectorPhraseScore, NSArray;

@interface VTKeywordDetectorResults : NSObject {

	VTKeywordDetectorPhraseScore* _bestResult;
	NSArray* _nBestResults;

}

@property (nonatomic,retain) VTKeywordDetectorPhraseScore * bestResult;              //@synthesize bestResult=_bestResult - In the implementation block
@property (nonatomic,retain) NSArray * nBestResults;                                 //@synthesize nBestResults=_nBestResults - In the implementation block
-(NSArray *)nBestResults;
-(id)initWithResultArray:(id)arg1 ;
-(unsigned long long)_getBestResultIdx:(id)arg1 ;
-(VTKeywordDetectorPhraseScore *)bestResult;
-(void)setBestResult:(VTKeywordDetectorPhraseScore *)arg1 ;
-(void)setNBestResults:(NSArray *)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface REMLSentimentAnalyzerResult : NSObject {

	float _postivieSentiment;
	float _negativeSentiment;
	float _certainty;

}

@property (assign,nonatomic) float postivieSentiment;              //@synthesize postivieSentiment=_postivieSentiment - In the implementation block
@property (assign,nonatomic) float negativeSentiment;              //@synthesize negativeSentiment=_negativeSentiment - In the implementation block
@property (assign,nonatomic) float certainty;                      //@synthesize certainty=_certainty - In the implementation block
-(float)postivieSentiment;
-(float)negativeSentiment;
-(float)certainty;
-(void)setPostivieSentiment:(float)arg1 ;
-(void)setNegativeSentiment:(float)arg1 ;
-(void)setCertainty:(float)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCPFrameScoreFilter : NSObject {

	int _numFilterTabs;
	float* _scoreArray;
	float _distanceVariance;
	float _diffVariance;
	int _numOfScores;

}
-(void)dealloc;
-(id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3 ;
-(float)processFrameScore:(float)arg1 validScore:(BOOL)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BurstClusterDivider : NSObject {

	float dividerScore;
	int trueLocalMaximum;
	int leftImage;
	float actionAmount;
	float noiseThreshold;
	float highNoiseThreshold;

}

@property (assign) float dividerScore; 
@property (assign) int trueLocalMaximum; 
@property (assign) int leftImage; 
@property (assign) float actionAmount; 
@property (assign) float noiseThreshold; 
@property (assign) float highNoiseThreshold; 
-(float)dividerScore;
-(int)leftImage;
-(float)actionAmount;
-(long long)compareDividers:(id)arg1 ;
-(long long)compareIndices:(id)arg1 ;
-(long long)compareActionAmounts:(id)arg1 ;
-(void)setDividerScore:(float)arg1 ;
-(void)setLeftImage:(int)arg1 ;
-(int)trueLocalMaximum;
-(void)setTrueLocalMaximum:(int)arg1 ;
-(void)setActionAmount:(float)arg1 ;
-(float)noiseThreshold;
-(void)setNoiseThreshold:(float)arg1 ;
-(float)highNoiseThreshold;
-(void)setHighNoiseThreshold:(float)arg1 ;
@end


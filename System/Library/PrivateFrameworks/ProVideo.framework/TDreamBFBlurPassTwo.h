/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamBFBlurPassTwo : TDreamProgramWrapperTwoInput {

	int sigmaColorUniform;
	int sigmaUniform;
	double _sigma;
	double _sigmaColor;

}

@property (assign,nonatomic) double sigma;                   //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) double sigmaColor;              //@synthesize sigmaColor=_sigmaColor - In the implementation block
-(id)init;
-(double)sigma;
-(void)setUniforms;
-(double)sigmaColor;
-(void)setSigmaColor:(double)arg1 ;
-(void)setSigma:(double)arg1 ;
@end


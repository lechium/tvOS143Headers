/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPPetsRegion : NSObject {

	float _confidence;
	CGRect _bound;

}

@property (assign) CGRect bound;                  //@synthesize bound=_bound - In the implementation block
@property (assign) float confidence;              //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(CGRect)bound;
-(id)initWith:(CGRect)arg1 confidence:(float)arg2 ;
-(void)setBound:(CGRect)arg1 ;
@end

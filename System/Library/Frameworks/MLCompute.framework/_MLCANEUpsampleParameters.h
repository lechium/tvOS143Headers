/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface _MLCANEUpsampleParameters : NSObject {

	float _scaleFactorX;
	float _scaleFactorY;
	NSDictionary* _upsampleParams;

}

@property (nonatomic,retain,readonly) NSDictionary * upsampleParams;              //@synthesize upsampleParams=_upsampleParams - In the implementation block
@property (nonatomic,readonly) float scaleFactorX;                                //@synthesize scaleFactorX=_scaleFactorX - In the implementation block
@property (nonatomic,readonly) float scaleFactorY;                                //@synthesize scaleFactorY=_scaleFactorY - In the implementation block
+(id)upsampleUnitParametersWith:(id)arg1 scaleFactorX:(float)arg2 scaleFactorY:(float)arg3 ;
-(float)scaleFactorX;
-(float)scaleFactorY;
-(NSDictionary *)upsampleParams;
-(id)initWithUpsampleParams:(id)arg1 scaleFactorX:(float)arg2 scaleFactorY:(float)arg3 ;
@end


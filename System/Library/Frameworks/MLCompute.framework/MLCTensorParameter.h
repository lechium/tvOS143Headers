/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLCTensor, MLCDevice;

@interface MLCTensorParameter : NSObject {

	BOOL _isUpdatable;
	MLCTensor* _tensor;
	MLCDevice* _device;

}

@property (nonatomic,retain) MLCDevice * device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * tensor;              //@synthesize tensor=_tensor - In the implementation block
@property (assign,nonatomic) BOOL isUpdatable;                         //@synthesize isUpdatable=_isUpdatable - In the implementation block
+(id)parameterWithTensor:(id)arg1 ;
+(id)parameterWithTensor:(id)arg1 optimizerData:(id)arg2 ;
-(MLCDevice *)device;
-(void)setDevice:(MLCDevice *)arg1 ;
-(BOOL)isUpdatable;
-(void)setIsUpdatable:(BOOL)arg1 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 device:(id)arg2 isVector:(BOOL)arg3 ;
-(id)initWithTensor:(id)arg1 optimizerData:(id)arg2 ;
-(MLCTensor *)tensor;
@end


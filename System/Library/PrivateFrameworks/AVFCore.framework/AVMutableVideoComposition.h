/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVMutableVideoComposition : AVVideoComposition {

	AVMutableVideoCompositionInternal* _mutableVideoComposition;

}

@property (nonatomic,retain) Class customVideoCompositorClass; 
@property (assign,nonatomic) SCD_Struct_AV6 frameDuration; 
@property (assign,nonatomic) int sourceTrackIDForFrameTiming; 
@property (assign,nonatomic) CGSize renderSize; 
@property (assign,nonatomic) float renderScale; 
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,retain) AVVideoCompositionCoreAnimationTool * animationTool; 
+(id)videoComposition;
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 prototypeInstruction:(id)arg2 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(SCD_Struct_AV6)frameDuration;
-(void)setFrameDuration:(SCD_Struct_AV6)arg1 ;
-(float)renderScale;
-(void)setRenderScale:(float)arg1 ;
-(void)setColorYCbCrMatrix:(id)arg1 ;
-(void)setColorTransferFunction:(id)arg1 ;
-(void)setColorPrimaries:(id)arg1 ;
-(void)setSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(CGSize)renderSize;
-(id)colorPrimaries;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(int)sourceTrackIDForFrameTiming;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(id)builtInCompositorName;
-(id)colorYCbCrMatrix;
-(id)colorTransferFunction;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
@end

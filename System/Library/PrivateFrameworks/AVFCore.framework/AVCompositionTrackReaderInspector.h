/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTrackReaderInspector.h>

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {

	OpaqueFigMutableCompositionRef _figMutableComposition;

}

@property (getter=_mutableComposition,nonatomic,readonly) OpaqueFigMutableCompositionRef mutableComposition; 
-(void)dealloc;
-(id)segments;
-(BOOL)isPlayable;
-(BOOL)isDecodable;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(int)playabilityValidationResult;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(int)decodabilityValidationResult;
@end


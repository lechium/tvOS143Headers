/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <AVFCore/AVVideoCompositionInstruction.h>
@class NSArray;


@protocol AVVideoCompositionInstruction <NSObject>
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@required
-(SCD_Struct_AV7)timeRange;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(int)passthroughTrackID;

@end


@class NSArray, AVVideoCompositionInstructionInternal, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction> {

	AVVideoCompositionInstructionInternal* _instruction;

}

@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,retain,readonly) CGColorRef backgroundColor; 
@property (nonatomic,copy,readonly) NSArray * layerInstructions; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)konaSerializeVideoInstruction;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(id)_deepCopy;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)enablePostProcessing;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(NSArray *)layerInstructions;
-(id)blendingTransferFunction;
-(void)_setValuesFromDictionary:(id)arg1 ;
-(void)setBlendingTransferFunction:(id)arg1 ;
@end


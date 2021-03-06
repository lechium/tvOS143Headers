/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface UITextMagnifierTimeWeightedPoint : NSObject {

	int m_index;
	SCD_Struct_UI96 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(void)addPoint:(CGPoint)arg1 ;
-(void)clearHistory;
-(BOOL)isPlacedCarefully;
-(CGPoint)diffFromLastPoint;
-(CGPoint)weightedPoint;
-(BOOL)historyCovers:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 ;
-(CGSize)displacementInInterval:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
@end


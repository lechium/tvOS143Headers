/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreChart/CoreChart-Structs.h>
@interface CCTextLayerLineData : NSObject {

	id line;
	double baselineOffset;
	double xOffset;
	CGRect bounds;

}

@property (nonatomic,retain) id line; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) double xOffset; 
-(id)line;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLine:(id)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(double)xOffset;
-(void)setXOffset:(double)arg1 ;
@end

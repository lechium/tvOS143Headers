/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHPointFIFO.h>

@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO {

	CHDrawing* _strokes;
	CHDrawing* _drawing;

}

@property (nonatomic,retain) CHDrawing * strokes;              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,retain) CHDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(CHDrawing *)drawing;
-(void)setDrawing:(CHDrawing *)arg1 ;
-(CHDrawing *)strokes;
-(void)setStrokes:(CHDrawing *)arg1 ;
@end


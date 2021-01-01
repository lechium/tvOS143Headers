/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHTriangleRecognitionResult : CHSketchRecognitionResult {

	CGPoint _vertex1;
	CGPoint _vertex2;
	CGPoint _vertex3;

}

@property (readonly) CGPoint vertex1;              //@synthesize vertex1=_vertex1 - In the implementation block
@property (readonly) CGPoint vertex2;              //@synthesize vertex2=_vertex2 - In the implementation block
@property (readonly) CGPoint vertex3;              //@synthesize vertex3=_vertex3 - In the implementation block
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 vertex1:(CGPoint)arg4 vertex2:(CGPoint)arg5 vertex3:(CGPoint)arg6 ;
-(CGPoint)vertex1;
-(CGPoint)vertex2;
-(CGPoint)vertex3;
@end


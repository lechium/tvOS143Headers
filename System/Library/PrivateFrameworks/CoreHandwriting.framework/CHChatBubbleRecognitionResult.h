/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHEllipseRecognitionResult.h>

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult {

	double _stemWidth;
	CGPoint _stemLocation;

}

@property (readonly) CGPoint stemLocation;              //@synthesize stemLocation=_stemLocation - In the implementation block
@property (readonly) double stemWidth;                  //@synthesize stemWidth=_stemWidth - In the implementation block
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 stemLocation:(CGPoint)arg6 stemWidth:(double)arg7 ;
-(CGPoint)stemLocation;
-(double)stemWidth;
@end


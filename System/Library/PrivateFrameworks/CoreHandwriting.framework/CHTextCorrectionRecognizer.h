/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CHRecognizing;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSLocale, CHRecognizer, CHCornerDetector;

@interface CHTextCorrectionRecognizer : NSObject {

	BOOL _isRemoteRecognition;
	NSLocale* _locale;
	id<CHRecognizing> __textRecognizer;
	CHRecognizer* __shapeRecognizer;
	CHCornerDetector* __cornerDetector;

}

@property (nonatomic,readonly) id<CHRecognizing> _textRecognizer;               //@synthesize _textRecognizer=__textRecognizer - In the implementation block
@property (nonatomic,readonly) CHRecognizer * _shapeRecognizer;                 //@synthesize _shapeRecognizer=__shapeRecognizer - In the implementation block
@property (nonatomic,readonly) CHCornerDetector * _cornerDetector;              //@synthesize _cornerDetector=__cornerDetector - In the implementation block
@property (nonatomic,retain,readonly) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteRecognition;                        //@synthesize isRemoteRecognition=_isRemoteRecognition - In the implementation block
+(NSRange)defaultTextAffectedRangeForTargetContentInfo:(id)arg1 ;
+(id)_modifiedTextResult:(id)arg1 replacingString:(id)arg2 ;
+(id)_improvedSingleCharacterOneColumnTextResult:(id)arg1 targetContentInfo:(id)arg2 insertionRange:(NSRange)arg3 locale:(id)arg4 affectedRange:(NSRange*)arg5 ;
+(NSRange)_relativeRangeOfPreviousCharacterFromTargetContentInfo:(id)arg1 absoluteInsertionRange:(NSRange)arg2 ;
-(void)dealloc;
-(NSLocale *)locale;
-(id)textCorrectionResultForDrawing:(id)arg1 targetContentInfo:(id)arg2 originalDrawing:(id)arg3 lastStroke:(id)arg4 localTypedContextBounds:(CGRect)arg5 normalizedDrawingScaleFactor:(double)arg6 previousCorrectionResult:(id)arg7 ;
-(BOOL)isRemoteRecognition;
-(id)initWithLocale:(id)arg1 remoteRecognition:(BOOL)arg2 priority:(long long)arg3 ;
-(id)_gestureOnBlankAreaResultForDrawing:(id)arg1 originalDrawing:(id)arg2 targetContentInfo:(id)arg3 ;
-(id)_editingGestureResultForDrawing:(id)arg1 originalDrawing:(id)arg2 lastStroke:(id)arg3 targetContentInfo:(id)arg4 previousResult:(id)arg5 ;
-(id)_refinedGestureResultForPreviousResult:(id)arg1 originalDrawing:(id)arg2 lastStroke:(id)arg3 targetContentInfo:(id)arg4 ;
-(id)_textInsertionResultForDrawing:(id)arg1 targetContentInfo:(id)arg2 originalDrawing:(id)arg3 localTypedContextBounds:(CGRect)arg4 normalizedDrawingScaleFactor:(double)arg5 insertionRange:(NSRange)arg6 ;
-(CHCornerDetector *)_cornerDetector;
-(id)_textBeforeStringForTargetContentInfo:(id)arg1 insertionRange:(NSRange)arg2 ;
-(unsigned long long)_precedingLineBreakCountForAutoLineBreak:(id)arg1 targetContentInfo:(id)arg2 ;
-(long long)_precedingSpaceBehaviorFromTargetContentInfo:(id)arg1 drawingBounds:(CGRect)arg2 localTypedContextBounds:(CGRect)arg3 insertionRange:(NSRange)arg4 lastCharacterBefore:(id)arg5 ;
-(id)_textAfterStringForTargetContentInfo:(id)arg1 insertionRange:(NSRange)arg2 ;
-(id<CHRecognizing>)_textRecognizer;
-(id)_verticalBarGestureOnBlankAreaResultForDrawing:(id)arg1 originalDrawing:(id)arg2 targetContentInfo:(id)arg3 ;
-(CHRecognizer *)_shapeRecognizer;
@end


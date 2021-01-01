/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableLabelTypesetter.h>

@class NSAttributedString, NSArray;

@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter> {

	BOOL _adjustsFontSizeToFitWidth;
	BOOL _allowTruncation;
	CGContextRef _context;
	NSAttributedString* _attributedString;
	long long _typesettingMode;
	unsigned long long _maximumNumberOfLines;
	double _minimumScaleFactor;
	double _minimumTruncatedScaleFactor;
	NSArray* _lines;
	CGRect _bounds;

}

@property (nonatomic,copy) NSAttributedString * attributedString;                  //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                        //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) long long typesettingMode;                            //@synthesize typesettingMode=_typesettingMode - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;                       //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                            //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowTruncation;                                 //@synthesize allowTruncation=_allowTruncation - In the implementation block
@property (assign,nonatomic) double minimumTruncatedScaleFactor;                   //@synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor - In the implementation block
@property (nonatomic,readonly) CGContextRef context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * lines;                                    //@synthesize lines=_lines - In the implementation block
-(id)init;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(CGContextRef)context;
-(id)initWithContext:(CGContextRef)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(NSArray *)lines;
-(NSAttributedString *)attributedString;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)allowTruncation;
-(void)didPerformChanges;
-(void)setAllowTruncation:(BOOL)arg1 ;
-(double)minimumTruncatedScaleFactor;
-(void)setMinimumTruncatedScaleFactor:(double)arg1 ;
-(long long)typesettingMode;
-(void)setTypesettingMode:(long long)arg1 ;
-(void)shiftLinesVerticallyToAvoidOverlap:(id)arg1 referenceFont:(id)arg2 ;
-(void)_updateLines;
-(unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2 ;
-(BOOL)_allowTextOverlapForFont:(id)arg1 ;
-(void)_setLines:(id)arg1 ;
@end

